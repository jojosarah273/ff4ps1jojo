
undefined4 BIOS_1_OBJ_0(void)

{
  undefined4 uVar1;
  
  *PTR_CDROM_REG0_8019bcb0 = 1;
  if ((*PTR_CDROM_REG3_8019bcb4 & 7) != 0) {
    uVar1 = BIOS_1_OBJ_64();
    return uVar1;
  }
  return 0;
}



