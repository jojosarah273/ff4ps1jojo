
void FUN_800fa5b8(void)

{
  int iVar1;
  
  FUN_800f6630(0xd5);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    return;
  }
  FUN_800f6630(0x50);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    return;
  }
  FUN_800f6630(2);
  FUN_800f4248(0x40);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    return;
  }
  FUN_800f654c(1);
  FUN_800f824c(0x50);
  FUN_800f6564(0x1700);
  FUN_800f5574(3);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f6564(0x1704);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f654c(0x40);
    }
    else {
      FUN_800f654c(0);
    }
  }
  else {
    FUN_800f6564(0xfdb);
    FUN_800f4248(0x30);
    *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
  }
  FUN_800f8188(0x1a04);
  FUN_800fc5a8();
  FUN_8011ea7c();
  FUN_800f6564(0x1700);
  FUN_800f5574(3);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f7210(0x16aa);
    FUN_800f8d00(0xcdd);
  }
  FUN_800fc5d8();
  FUN_800f6564(0x1a03);
  iVar1 = FUN_800f6434(2);
  if (iVar1 != 0) {
    return;
  }
  FUN_800f654c(1);
  FUN_800f824c(0xb1);
  FUN_800f8fb8(0xab);
  FUN_800f6564(0x1a03);
  FUN_800f5574(3);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f6564(0x1a03);
    FUN_800f5410();
    FUN_800f4008(0x76);
  }
  else {
    FUN_800f5574(3);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5574(4);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574(5);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f5574(6);
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) {
            FUN_800f654c(1);
            FUN_800f824c(0xc0);
            goto LAB_800fa814;
          }
          FUN_800f654c(0xdb);
        }
        else {
          FUN_800f654c(0xfb);
        }
      }
      else {
        FUN_800f654c(0x86);
      }
    }
    else {
      FUN_800f654c(0x87);
    }
  }
  FUN_801163e8();
LAB_800fa814:
  FUN_800f8fb8(0xb1);
  FUN_800fd718();
  return;
}



