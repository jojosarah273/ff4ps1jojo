# FF4 source-port build (deck compile + optional platform boot).
# The interpreted deck (port/src) compiles with the FF4 window API;
# undefined row-helper func_* names are allowed at compile time and
# stubbed at link time (platform/stubs.c).

CC      ?= gcc
CFLAGS  ?= -O2 -std=gnu99 -Wall -I../include -Iinclude -I../port/include
PY      = python3

SRC := $(shell find src -path 'src/device' -prune -o -name '*.c' -print)
OBJ := $(SRC:%.c=build/%.o)

all: deck

deck: $(OBJ)
	@echo "deck: $(words $(OBJ)) objects"

build/%.o: %.c ../tools/port_rowmap.py
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

stubs: ../tools/port_stubs.py
	$(PY) ../tools/port_stubs.py > include/stubs.h

native: all boot
	bash tools/native_link.sh
	$(CC) -O0 $$(find build -path '*src*' -name '*.o' ! -path '*src/device*') build/device.o build/platform/boot2.o build/main.o build/stubs.o -lSDL2 -o build/ff4-native

boot: all
	mkdir -p build/platform
	$(CC) -O2 -Iinclude -I../include -I/usr/include/SDL2 -D_REENTRANT -c src/device/sdl_device.c -o build/device.o
	$(CC) -O0 -Iinclude -I../include -c platform/boot.c -o build/platform/boot2.o
	$(CC) -O0 -Iinclude -I../include -c platform/main.c -o build/main.o

clean:
	rm -rf build

.PHONY: all deck native boot clean

sdl: native

