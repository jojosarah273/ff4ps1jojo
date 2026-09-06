
void FUN_801198f0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6364();
  FUN_800f8d6c(0xb3);
  FUN_80106370();
  FUN_800fe7b0();
  FUN_80109a28();
  FUN_800f6564(0x8fb);
  FUN_800f5574(0xff);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f7270(0xb3);
    FUN_800f6b68(0x9d5);
    uVar2 = FUN_800f3b04(0x8fb);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f5574(0xec);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574(0xfe);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_800f5574(0xed);
          iVar1 = FUN_800f53c0();
          if (iVar1 != 0) goto LAB_80119a80;
        }
        FUN_800f71dc(0);
        while( true ) {
          FUN_800f6b68(0x1440);
          uVar2 = FUN_800f3b04(0x8fb);
          FUN_800f54d4(uVar2);
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) break;
          *DAT_8019ed54 = *DAT_8019ed54 + 2;
        }
        uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x1441);
        FUN_800f5b2c(uVar2);
        iVar1 = FUN_800f5b8c(0x202);
        if (iVar1 == 0) {
          FUN_800f90ec(0x1440);
        }
      }
LAB_80119a80:
      FUN_8011ea5c();
      return;
    }
    FUN_800f654c(0x14);
    FUN_800f824c(0xb2);
    FUN_801082c8();
    FUN_80107c98();
    FUN_80107f3c();
  }
  FUN_801175c4();
  FUN_8011ea5c();
  return;
}



