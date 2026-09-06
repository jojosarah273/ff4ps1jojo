
void FUN_80122ff4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  while( true ) {
    FUN_800f6630(0xe7);
    FUN_801224d0();
    FUN_8012d1d0();
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) break;
    FUN_800f6630(0xe7);
    FUN_800f61e8();
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f654c(0);
    }
    FUN_800f824c(0xe7);
  }
  do {
    FUN_800f6630(0xe7);
    *DAT_8019ed40 = *DAT_8019ed40 << 3;
    FUN_800f824c(0x45);
    *DAT_8019ed40 = *DAT_8019ed40 << 1;
    FUN_800f5140();
    FUN_800f4f4c();
    uVar2 = FUN_800f3c3c(0x45);
    FUN_800f3f38(uVar2);
    FUN_800f4008(0x10);
    FUN_800f824c(0x46);
    FUN_800f654c(2);
    FUN_800f824c(0x45);
    FUN_8011f6d4();
    FUN_8011f684();
    FUN_8011f884();
    FUN_800f6630(1);
    FUN_800f4248(8);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      do {
        FUN_800f6630(0xe7);
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(0x8080);
        if (iVar1 == 0) {
          FUN_800f654c(4);
        }
        FUN_800f824c(0xe7);
        FUN_801224d0();
        FUN_800f6c68(0x14ff9d);
        FUN_80124eac();
        FUN_800f6564(0x1bb8);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 != 0) break;
        FUN_800f6b68(0);
        FUN_800f4248(0x1f);
        iVar1 = FUN_800f4120(2);
      } while (iVar1 != 0);
    }
    FUN_800f6630(1);
    FUN_800f4248(4);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      do {
        FUN_800f6630(0xe7);
        FUN_800f61e8();
        FUN_800f5574(5);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f971c();
        }
        FUN_800f824c(0xe7);
        FUN_801224d0();
        FUN_800f6c68(0x14ff9d);
        FUN_80124eac();
        FUN_800f6564(0x1bb8);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 != 0) break;
        FUN_800f6b68(0);
        FUN_800f4248(0x1f);
        iVar1 = FUN_800f4120(2);
      } while (iVar1 != 0);
    }
    FUN_800f6564(0x1b27);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f6630(1);
      FUN_800f4248(3);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f654c(0x7f);
        goto LAB_801232d0;
      }
    }
    FUN_800f6630(0);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6630(0xe7);
      FUN_801224d0();
      FUN_800f6c68(0x14ff9d);
LAB_801232d0:
      FUN_800f824c(0xe8);
      return;
    }
    FUN_800f6630(1);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f654c(0xff);
      FUN_800f824c(0xe8);
      return;
    }
  } while( true );
}



