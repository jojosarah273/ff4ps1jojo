
bool CDR_1_OBJ_7F0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 unaff_s3;
  undefined4 unaff_s4;
  
  DAT_8019bda0 = DAT_8019bda0 | 0x20;
  DAT_8019bd94 = unaff_s4;
  DAT_8019bd98 = unaff_s3;
  DAT_8019bdbc = FUN_80191838(0);
  DAT_8019bdc0 = FUN_80191858(0);
  if ((DAT_8019b9c8 & 1) != 0) {
    DAT_8019bdc4 = FUN_80192858(0);
  }
  DAT_8019bdb0 = VSync(-1);
  uVar1 = FUN_80192718();
  if ((uVar1 & 0xe0) != 0) {
    CdControlB('\t',(u_char *)0x0,(u_char *)0x0);
  }
  iVar2 = CDR_1_OBJ_378(0);
  return 0 < iVar2;
}



