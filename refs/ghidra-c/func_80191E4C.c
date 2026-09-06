
void CDR_1_OBJ_D4(void)

{
  int iVar1;
  
  iVar1 = DsPosToInt((DslLOC *)&stack0x00000010);
  if (iVar1 != DAT_8019bdb4) {
    FUN_80191620("CdRead: sector error\n");
    DAT_8019bda8 = -1;
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



