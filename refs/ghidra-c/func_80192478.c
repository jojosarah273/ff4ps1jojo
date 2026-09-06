
int CdRead(int sectors,u_long *buf,int mode)

{
  int iVar1;
  int iVar2;
  
  if (DAT_8019bdb8 != 0) {
    iVar1 = VSync(-1);
    while (DAT_8019bdb8 != 0) {
      iVar2 = VSync(-1);
      if (0x78 < (uint)(iVar2 - iVar1)) {
        FUN_80191838(DAT_8019bdbc);
        DAT_8019bdb8 = 0;
        iVar1 = CDR_1_OBJ_77C();
        return iVar1;
      }
    }
  }
  DAT_8019bda0 = mode;
  if ((mode & 0x30U) != 0) {
    if ((mode & 0x30U) != 0x20) {
      iVar1 = CDR_1_OBJ_7E4();
      return iVar1;
    }
    DAT_8019bda4 = 0x249;
    iVar1 = CDR_1_OBJ_7F0();
    return iVar1;
  }
  DAT_8019bda4 = 0x200;
  iVar1 = CDR_1_OBJ_7F0();
  return iVar1;
}



