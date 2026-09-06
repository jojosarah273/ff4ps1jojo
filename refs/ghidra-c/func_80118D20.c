
void FUN_80118d20(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_80117594();
  FUN_800f5574(0xfe);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f824c(0x18);
    FUN_800f8fb8(0x19);
    FUN_800f654c(10);
    FUN_800f824c(0x1a);
    FUN_800f8fb8(0x1b);
    FUN_80174f0c();
    FUN_800f71dc(0);
    do {
      FUN_800f6b68(0x1003);
      iVar1 = FUN_800f6434(0x80);
      if (iVar1 == 0) {
        FUN_800f9644(0x20);
        FUN_800f6be0(0x100b);
        FUN_800f5410();
        uVar2 = FUN_800f3c3c(0x30);
        FUN_800f3f94(uVar2);
        uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x100d);
        FUN_800f5520(uVar2);
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) {
          FUN_800f6be0(0x100d);
        }
        FUN_800f87dc(0x100b);
        FUN_800f6558(0);
        FUN_800f9660(0x20);
      }
      FUN_80117df8();
      FUN_800f5958(0x140);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_8011ea5c();
  }
  else {
    FUN_800f71dc(0);
    do {
      FUN_800f6b68(0x1003);
      iVar1 = FUN_800f6434(0x80);
      if (iVar1 == 0) {
        FUN_800f9644(0x20);
        FUN_800f6be0(0x100d);
        FUN_800f87dc(0x100b);
        FUN_800f6558(0);
        FUN_800f9660(0x20);
      }
      FUN_80117df8();
      FUN_800f5958(0x140);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_8011ea5c();
  }
  return;
}



