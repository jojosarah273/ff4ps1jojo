
void FUN_80121678(void)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  FUN_800f6a78(0xa2);
  iVar1 = FUN_800f6434(0x8080);
  if (iVar1 == 0) {
    FUN_800f9644(0x20);
    FUN_800f6af4(0xa1);
    FUN_800f4264(0x7fff);
    FUN_800f8274(0x1d);
    FUN_800f6af4(0x89);
    FUN_800f5480();
    uVar2 = FUN_800f3c3c(0x1d);
    FUN_800f7fcc(uVar2);
    FUN_800f86f0(0x89);
    FUN_800f9660(0x20);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      iVar1 = FUN_800f3c3c(0x8b);
      FUN_800f5b2c(iVar1 + (uint)*DAT_8019ed54);
    }
  }
  else {
    FUN_800f9644(0x20);
    FUN_800f6af4(0x89);
    FUN_800f5410();
    iVar1 = FUN_800f3c3c(0xa1);
    FUN_800f3f94(iVar1 + (uint)*DAT_8019ed54);
    *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
    bVar3 = *DAT_8019ed68;
    if (*DAT_8019ed50 == 0) {
      bVar3 = bVar3 | 2;
    }
    *DAT_8019ed68 = bVar3;
    FUN_800f86f0(0x89);
    FUN_800f9660(0x20);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      iVar1 = FUN_800f3c3c(0x8b);
      FUN_800f6048(iVar1 + (uint)*DAT_8019ed54);
    }
  }
  return;
}



