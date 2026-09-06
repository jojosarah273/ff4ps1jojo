
void FUN_801813c0(undefined4 param_1,undefined2 param_2,short param_3,short param_4)

{
  int iVar1;
  int iVar2;
  
  if (0x20 < param_4) {
    param_4 = 0x20;
  }
  DAT_8019ee94 = 0x40;
  DAT_8019ee96 = 8;
  DAT_8019eea8 = &DAT_80013800;
  iVar1 = 0;
  DAT_8019ee90 = param_2;
  DAT_8019ee92 = param_3;
  DAT_8019ee9e = param_2;
  DAT_8019eea0 = param_3;
  DAT_8019eea4 = param_1;
  if (0 < param_4) {
    iVar2 = 0x10000;
    do {
      if (0xf7 < DAT_8019ee92) {
        return;
      }
      FUN_801808d8(0xffffffff,iVar1,0);
      iVar1 = iVar2 >> 0x10;
      iVar2 = iVar2 + 0x10000;
    } while (iVar1 < param_4);
  }
  return;
}



