
void CDR_1_OBJ_34(char param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  DslLOC aDStack_20 [4];
  
  DAT_8019bdc8 = param_2;
  if (param_1 == '\x01') {
    if (0 < DAT_8019bda8) {
      if (DAT_8019bda4 == 0x200) {
        if ((DAT_8019b9c8 & 1) != 0) {
          FUN_80192858(0);
          FUN_80192748(aDStack_20,3);
          FUN_80192888(0);
          FUN_80192858(CDR_1_OBJ_2A8);
          CDR_1_OBJ_D4();
          return;
        }
        DsGetSector(aDStack_20,3);
        iVar1 = DsPosToInt(aDStack_20);
        if (iVar1 != DAT_8019bdb4) {
          FUN_80191620("CdRead: sector error\n");
          DAT_8019bda8 = -1;
        }
      }
      if ((DAT_8019b9c8 & 1) != 0) {
        FUN_80192748(DAT_8019bd9c,DAT_8019bda4);
        CDR_1_OBJ_19C();
        return;
      }
      DsGetSector(DAT_8019bd9c,DAT_8019bda4);
      DAT_8019bd9c = (void *)((int)DAT_8019bd9c + DAT_8019bda4 * 4);
      DAT_8019bda8 = DAT_8019bda8 + -1;
      DAT_8019bdb4 = DAT_8019bdb4 + 1;
      CDR_1_OBJ_19C();
      return;
    }
  }
  else {
    DAT_8019bda8 = -1;
  }
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
      (*DAT_8019b9c4)(uVar2,param_2);
    }
  }
  return;
}



