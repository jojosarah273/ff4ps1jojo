
int CdReset(int mode)

{
  int iVar1;
  int iVar2;
  
  if (mode == 2) {
    CD_initintr();
    iVar1 = S_007_OBJ_5C();
    return iVar1;
  }
  iVar1 = CD_init();
  iVar2 = 0;
  if ((iVar1 == 0) && (iVar2 = 1, mode == 1)) {
    iVar1 = CD_initvol();
    iVar2 = 0;
    if (iVar1 == 0) {
      iVar2 = 1;
    }
  }
  return iVar2;
}



