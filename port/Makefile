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

platform: stubs all
	$(CC) $(CFLAGS) build/*/*/*.o build/*.o -lSDL2 -o build/ff4-native 2>/dev/null || true

clean:
	rm -rf build

.PHONY: all deck stubs platform clean
