
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80125df8(void)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  
  FUN_800f8188(0x145);
  iVar5 = (int)_DAT_800d2116;
  do {
    FUN_800f71dc(8);
    do {
      FUN_800f6d70(0);
      puVar3 = &DAT_801cfd68 + iVar5;
      *puVar3 = (ushort)*DAT_8019ed40;
      FUN_800f6d70(1);
      *puVar3 = *puVar3 | (ushort)*DAT_8019ed40 << 8;
      iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
      *DAT_8019ed58 = *DAT_8019ed58 + 2;
      FUN_800f5e48();
      iVar1 = FUN_800f5c64(0x202);
    } while (iVar1 != 0);
    FUN_800f71dc(8);
    iVar1 = iVar5;
    do {
      FUN_800f6d70(0);
      iVar4 = (iVar1 + 1) * 0x10000;
      iVar5 = iVar4 >> 0x10;
      (&DAT_801cfd68)[iVar1] = (ushort)*DAT_8019ed40;
      FUN_800f63bc();
      FUN_800f5e48();
      iVar2 = FUN_800f5c64(0x202);
      iVar1 = iVar5;
    } while (iVar2 != 0);
    FUN_800f5d24(0x145);
    iVar1 = FUN_800f5b8c(0x202);
  } while (iVar1 != 0);
  _DAT_800d2116 = (short)((uint)iVar4 >> 0x10);
  return;
}



