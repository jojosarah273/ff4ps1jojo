
void CDR_1_OBJ_19C(void)

{
  int iVar1;
  undefined4 uVar2;
  
  DAT_8019bdac = VSync(-1);
  if (DAT_8019bda8 < 0) {
    CDR_1_OBJ_378(1);
  }
  iVar1 = VSync(-1);
  if (DAT_8019bdb0 + 0x4b0 < iVar1) {
    DAT_8019bda8 = -1;
  }
  if ((DAT_8019bda8 == 0) || (iVar1 = VSync(-1), DAT_8019bdb0 + 0x4b0 < iVar1)) {
    FUN_80191858(DAT_8019bdc0);
    if ((DAT_8019b9c8 & 1) != 0) {
      FUN_80192858(DAT_8019bdc4);
    }
    FUN_80191838(&CDR_1_OBJ_0);
    CdControlF('\t',(u_char *)0x0);
    DAT_8019bdb8 = 1;
    if (DAT_8019b9c4 != (code *)0x0) {
      uVar2 = 5;
      if (DAT_8019bda8 == 0) {
        uVar2 = 2;
      }
      (*DAT_8019b9c4)(uVar2);
    }
  }
  return;
}



