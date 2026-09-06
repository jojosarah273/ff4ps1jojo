
void FUN_80175f00(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6630(0xcc);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 != 0) {
    FUN_800f8fb8(0xcc);
    FUN_80175e88();
    FUN_800f6b68(0x1003);
    FUN_800f4248(0x20);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f654c(0xf);
    }
    else {
      FUN_800f6b68(0x1003);
      FUN_800f4248(0x10);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f654c(0xe);
      }
      else {
        FUN_800f6b68(0x1003);
        FUN_800f4248(8);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) {
          FUN_800f654c(0x10);
        }
        else {
          FUN_800f6b68(0x1001);
          FUN_800f4248(0x1f);
        }
      }
    }
    FUN_800f824c(6);
    FUN_800f5140();
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(6);
    FUN_800f3f38(uVar2);
    FUN_800f5410();
    FUN_800f4008(0x80);
    FUN_800f824c(0x4b);
    FUN_800f8fb8(0x4a);
    FUN_800f71dc(0x4000);
    FUN_800f8d6c(0x4c);
    FUN_800f71dc(0x200);
    FUN_800f8d6c(0x4e);
    FUN_800f654c(0x1b);
    FUN_800f824c(0x49);
    FUN_80170458();
  }
  return;
}



