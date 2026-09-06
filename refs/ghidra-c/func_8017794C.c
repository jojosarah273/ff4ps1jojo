
int FUN_8017794c(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if ((DAT_8019ee2c & 0x1000) == 0) {
    return 0;
  }
  if (((DAT_8019ee28 == 0x100) || (DAT_8019ee28 == 0)) || ((DAT_8019ee28 & 0x10000) != 0)) {
    uVar2 = (uint)*param_1;
    DAT_8019ee28 = 0;
    if (((0x10 < uVar2) && (DAT_8019ee00 == 0)) && (DAT_8019ee02 == 0)) {
      DAT_8019ee28 = 0x10000;
      if (0x20 < uVar2) {
        uVar2 = 0x20;
      }
      iVar1 = (uVar2 & 0xffe) - 0x10;
    }
  }
  return iVar1;
}



