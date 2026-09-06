
void FUN_800f3d64(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  *DAT_8019ed70 = (byte)param_1;
  *DAT_8019ed6c = (uint)*DAT_8019ed70 << 0x10;
  iVar1 = FUN_800f3b9c(*DAT_8019ed6c + (uint)*DAT_8019ed58,0);
  iVar2 = FUN_800f3b9c((param_1 & 0xff00) << 8 | (uint)*DAT_8019ed54,0);
  iVar5 = 0;
  iVar6 = *DAT_8019ed44 + 1;
  if (iVar6 != 0) {
    do {
      puVar4 = (undefined1 *)(iVar1 + iVar5);
      puVar3 = (undefined1 *)(iVar2 + iVar5);
      iVar5 = iVar5 + 1;
      *puVar4 = *puVar3;
    } while (iVar5 < iVar6);
  }
  *DAT_8019ed54 = *DAT_8019ed54 + (short)iVar6;
  *DAT_8019ed58 = *DAT_8019ed58 + (short)iVar6;
  *DAT_8019ed44 = 0xffff;
  return;
}



