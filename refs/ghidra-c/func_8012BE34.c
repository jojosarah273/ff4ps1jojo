
void FUN_8012be34(void)

{
  int iVar1;
  
  while( true ) {
    FUN_8012d194();
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) break;
    FUN_800f6564(0x1b3e);
    FUN_800f61e8();
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f654c(0);
    }
    FUN_800f8188(0x1b3e);
  }
  FUN_800f6564(0x1b22);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f654c(0x70);
  }
  else {
    FUN_800f654c(8);
  }
  FUN_800f824c(0x5d);
  while( true ) {
    FUN_8011f684();
    FUN_8011f884();
    FUN_800f6630(1);
    FUN_800f4248(8);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      do {
        FUN_800f6564(0x1b3e);
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(0x8080);
        if (iVar1 == 0) {
          FUN_800f654c(4);
        }
        FUN_800f8188(0x1b3e);
        FUN_8012d194();
        iVar1 = FUN_800f53d4();
      } while (iVar1 != 0);
    }
    FUN_800f6630(1);
    FUN_800f4248(4);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      do {
        FUN_800f6564(0x1b3e);
        FUN_800f61e8();
        FUN_800f5574(5);
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) {
          FUN_800f654c(0);
        }
        FUN_800f8188(0x1b3e);
        FUN_8012d194();
        iVar1 = FUN_800f53d4();
      } while (iVar1 != 0);
    }
    FUN_800f6630(0);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) break;
    FUN_800f6630(1);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f654c(0xff);
      FUN_800f824c(0xe8);
      return;
    }
    FUN_800f6564(0x1b3e);
    *DAT_8019ed40 = *DAT_8019ed40 << 4;
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_800f4008(0x40);
    FUN_800f824c(0x5e);
    FUN_800f654c(0);
    FUN_800f7270(0x5d);
    FUN_800f7500(0x300);
    FUN_8011f724();
  }
  FUN_800f6564(0x1b3e);
  FUN_801224d0();
  FUN_800f6c68(0x14ff9d);
  FUN_800f824c(0xe8);
  return;
}



