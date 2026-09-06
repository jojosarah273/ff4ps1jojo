
void FUN_8012c584(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f7500(3);
  FUN_800f66d8(0x60);
  FUN_800f4248(0x80);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_800f7500(DAT_801991ae);
    FUN_8012c2f8();
  }
  else {
    FUN_800f7500(0x16);
    FUN_800f66d8(0x60);
    FUN_800f824c(0x43);
    FUN_800f9644(0x20);
    FUN_800f6658(0x43);
    *DAT_8019ed44 = *DAT_8019ed44 << 1;
    FUN_800f516c();
    FUN_800f5050();
    uVar2 = FUN_800f3c3c(0x43);
    FUN_800f3f94(uVar2);
    FUN_800f7500(7);
    uVar2 = FUN_800f3a70(0x60);
    iVar1 = FUN_800f3b04(uVar2);
    FUN_800f5520(iVar1 + (uint)*DAT_8019ed58);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      FUN_800f8378(0x60);
    }
    FUN_800f9660(0x20);
    FUN_800f7500(3);
    FUN_800f66d8(0x60);
    FUN_800f4248(0x7f);
    FUN_800f82ec(0x60);
    FUN_801221ec();
  }
  return;
}



