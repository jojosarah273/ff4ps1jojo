
void FUN_8012c42c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8012c0a8();
  if (iVar1 != 2) {
    FUN_800f7500(0xb);
    FUN_800f9644(0x20);
    FUN_800f6764(0x60);
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(0x45);
    FUN_800f3f94(uVar2);
    FUN_800f63bc();
    FUN_800f63bc();
    uVar2 = FUN_800f3a70(0x60);
    iVar1 = FUN_800f3b04(uVar2);
    FUN_800f5520(iVar1 + (uint)*DAT_8019ed58);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      FUN_800f6764(0x60);
    }
    FUN_800f5ea0();
    FUN_800f5ea0();
    FUN_800f8378(0x60);
    FUN_800f9660(0x20);
  }
  return;
}



