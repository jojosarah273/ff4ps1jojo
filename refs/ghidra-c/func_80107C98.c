
void FUN_80107c98(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6630(0xcc);
  FUN_800f654c(1);
  FUN_800f824c(0xea);
  do {
    FUN_800fe778();
    FUN_800f6630(0xea);
    FUN_800f5574(2);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f71dc(0);
  FUN_800f8d00(0x8f4);
  FUN_800f8fb8(0xde);
  FUN_800f654c(0xec);
  FUN_800f824c(0xbb);
  FUN_800f8fb8(0xba);
  FUN_80108458();
  FUN_800f654c(1);
  FUN_800f824c(0xdf);
  FUN_800f824c(0xeb);
  if (DAT_8019ede8 == 1) {
    DAT_8019ede8 = 0;
  }
  do {
    FUN_800fe778();
    do {
      FUN_800f6630(0x7f);
      FUN_800f5574(2);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f62bc(0xdf);
    FUN_800f6630(0xdf);
    FUN_800f5574(8);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  while( true ) {
    FUN_800f7210(0x8f4);
    iVar1 = FUN_800f7170(2);
    if (iVar1 == 0) {
      do {
        FUN_80177dac();
        uVar2 = FUN_800f3b04(0x8f6);
        FUN_800f56ac(uVar2);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      FUN_800f71dc(0);
      FUN_800f8d00(0x8f4);
    }
    else {
      FUN_800f6630(0xde);
      FUN_800f5574(2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        return;
      }
      FUN_800f6630(0xcb);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800fd9fc();
        FUN_800fda4c();
      }
    }
    FUN_800f6630(0xde);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 != 0) break;
    FUN_80108458();
    FUN_800f654c(0x10);
    FUN_800f824c(7);
    do {
      FUN_800fe778();
      FUN_800f6630(0xcb);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f62bc(0xbb);
        FUN_800f62bc(0xbb);
        FUN_800f62bc(0xbb);
        FUN_800f62bc(0xbb);
        FUN_800f5da0(7);
      }
      else {
        FUN_800f6630(0x7a);
        FUN_800f4248(7);
        iVar1 = FUN_800f4120(0x202);
        if (iVar1 == 0) {
          FUN_800f62bc(0xbb);
          FUN_800f6630(0x7a);
          FUN_800f4248(0x1f);
          iVar1 = FUN_800f4120(0x202);
          if (iVar1 == 0) {
            FUN_800f5da0(7);
          }
        }
      }
      FUN_800f6630(7);
      iVar1 = FUN_800f6434(0x202);
    } while (iVar1 != 0);
  }
  return;
}



