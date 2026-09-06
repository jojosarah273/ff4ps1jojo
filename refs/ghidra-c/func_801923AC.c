
void CDR_1_OBJ_634(void)

{
  int in_v0;
  int iVar1;
  int iVar2;
  
  if (in_v0 != 0) {
    FUN_80191858(DAT_8019bdc0);
    if ((DAT_8019b9c8 & 1) != 0) {
      FUN_80192858(DAT_8019bdc4);
    }
    FUN_80191838(&CDR_1_OBJ_0);
    CdControlF('\t',(u_char *)0x0);
    DAT_8019bdb8 = 1;
    iVar1 = VSync(-1);
    while (DAT_8019bdb8 != 0) {
      iVar2 = VSync(-1);
      if (0x78 < (uint)(iVar2 - iVar1)) {
        FUN_80191838(DAT_8019bdbc);
        DAT_8019bdb8 = 0;
        CDR_1_OBJ_6EC();
        return;
      }
    }
  }
  return;
}



