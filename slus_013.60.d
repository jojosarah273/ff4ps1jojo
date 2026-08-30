build/slus_013.60.elf: \
    build/asm/header.s.o \
    build/asm/data/rodata_800.rodata.s.o \
    build/src/main.c.o \
    build/asm/data/data_A6E54.data.s.o
build/asm/header.s.o:
build/asm/data/rodata_800.rodata.s.o:
build/src/main.c.o:
build/asm/data/data_A6E54.data.s.o:
-include build/asm/header.s.d build/asm/data/rodata_800.rodata.s.d build/src/main.c.d build/asm/data/data_A6E54.data.s.d
