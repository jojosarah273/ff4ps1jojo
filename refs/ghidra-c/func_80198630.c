
int __fixsfsi(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 & 0x7fffffff) != 0) {
    uVar3 = (int)param_1 >> 0x17 & 0xff;
    iVar1 = uVar3 - 0x9d;
    if (0 < iVar1) {
      if (-1 < (int)param_1) {
        _err_math(0x22,0x12);
        iVar1 = FIXSFSI_OBJ_94();
        return iVar1;
      }
      iVar1 = FIXSFSI_OBJ_94(0x22);
      return iVar1;
    }
    uVar2 = param_1 & 0x7fffff | 0x800000;
    if ((uVar3 - 0x7e < 0x20) && (uVar2 != 0)) {
      iVar1 = (int)(uVar2 << 7) >> (-iVar1 & 0x1fU);
      if ((int)param_1 < 0) {
        iVar1 = -iVar1;
      }
      return iVar1;
    }
  }
  iVar1 = FIXSFSI_OBJ_94();
  return iVar1;
}



