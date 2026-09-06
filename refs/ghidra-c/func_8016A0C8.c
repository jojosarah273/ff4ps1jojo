
void FUN_8016a0c8(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_800f926c();
  FUN_800f9200();
  FUN_800f9448();
  uVar2 = (uint)*DAT_8019ed58;
  FUN_800f8d6c(2);
  FUN_800f7500(0);
  do {
    FUN_800f9644(0x20);
    FUN_800f922c();
    FUN_800f71dc(8);
    do {
      FUN_800f6764(2);
      uVar3 = uVar2 + 1 & 0xffff;
      (&DAT_801cfd68)[uVar2] = *DAT_8019ed44;
      FUN_800f63bc();
      FUN_800f63bc();
      FUN_800f5e48();
      iVar1 = FUN_800f5c64(0x202);
      uVar2 = uVar3;
    } while (iVar1 != 0);
    FUN_800f71dc(8);
    FUN_800f9410();
    FUN_800f9660(0x20);
    do {
      FUN_800f66d8(2);
      uVar2 = uVar3 + 1 & 0xffff;
      (&DAT_801cfd68)[uVar3] = (ushort)*DAT_8019ed40;
      FUN_800f63bc();
      FUN_800f5e48();
      iVar1 = FUN_800f5c64(0x202);
      uVar3 = uVar2;
    } while (iVar1 != 0);
    FUN_800f5da0(0);
    iVar1 = FUN_800f5b8c(0x202);
  } while (iVar1 != 0);
  FUN_800f9448();
  return;
}



