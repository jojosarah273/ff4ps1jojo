
undefined4 CDR_1_OBJ_378(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  u_char *param;
  int iVar3;
  DslLOC *p;
  uint uVar4;
  u_char local_18 [8];
  
  FUN_80191838(0);
  FUN_80191858(0);
  if ((DAT_8019b9c8 & 1) != 0) {
    FUN_80192858(0);
  }
  uVar1 = FUN_80192718();
  if ((uVar1 & 0x10) != 0) {
    uVar1 = VSync(-1);
    if ((uVar1 & 0x3f) == 0) {
      FUN_80191620("CdRead: Shell open...\n");
    }
    CdControlF('\x01',(u_char *)0x0);
    DAT_8019bdb0 = VSync(-1);
    DAT_8019bda8 = 0xffffffff;
    uVar2 = CDR_1_OBJ_548();
    return uVar2;
  }
  if (param_1 != 0) {
    FUN_80191620("CdRead: retry...\n");
    CdControl('\t',(u_char *)0x0,(u_char *)0x0);
    param = (u_char *)FUN_80192738();
    iVar3 = CdControl('\x02',param,(u_char *)0x0);
    if (iVar3 == 0) goto CDR_1_OBJ_4B4;
  }
  FUN_801917b8();
  local_18[0] = (u_char)DAT_8019bda0;
  uVar4 = DAT_8019bda0 & 0xff;
  uVar1 = FUN_80192728();
  if (((uVar4 == uVar1) && (param_1 == 0)) ||
     (iVar3 = CdControl('\x0e',local_18,(u_char *)0x0), iVar3 != 0)) {
    p = (DslLOC *)FUN_80192738();
    DAT_8019bdb4 = DsPosToInt(p);
    FUN_80191858(CDR_1_OBJ_34);
    if ((DAT_8019b9c8 & 1) != 0) {
      FUN_80192858(CDR_1_OBJ_2A8);
    }
    DAT_8019bd9c = DAT_8019bd98;
    CdControlF('\x06',(u_char *)0x0);
    DAT_8019bda8 = DAT_8019bd94;
    DAT_8019bdac = VSync(-1);
    return DAT_8019bda8;
  }
CDR_1_OBJ_4B4:
  DAT_8019bda8 = 0xffffffff;
  uVar2 = CDR_1_OBJ_548();
  return uVar2;
}



