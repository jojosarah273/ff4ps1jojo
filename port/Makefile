# FF4 source-port build (deck compile + optional platform boot).
# The interpreted deck (port/src) compiles with the FF4 window API;
# undefined row-helper func_* names are allowed at compile time and
# stubbed at link time (platform/stubs.c).

CC      ?= gcc
CFLAGS  ?= -O2 -std=gnu99 -Wall -I../include -Iinclude -I../port/include
PY      = python3

SRC := $(shell find src -name '*.c')
OBJ := $(SRC:%.c=build/%.o)

all: deck

deck: $(OBJ)
	@echo "deck: $(words $(OBJ)) objects"

build/%.o: %.c ../tools/port_rowmap.py
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

stubs: ../tools/port_stubs.py
	$(PY) ../tools/port_stubs.py > include/stubs.h

native: all
	$(PY) ../tools/port_stubs.py 2>/dev/null > /tmp/stubs_now.c || true
	gcc -O0 -c /tmp/stubs_now.c -o build/stubs.o 2>/dev/null || gcc -O0 -c platform/stubs.c -o build/stubs.o
	$(CC) -O0 build/src/*/*.o build/*.o -o build/ff4-native 2>/dev/null || 	  $(CC) -O0 $$(find build -name '*.o') -o build/ff4-native

clean:
	rm -rf build

.PHONY: all deck native clean
