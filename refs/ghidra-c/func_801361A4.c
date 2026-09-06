
void FUN_801361a4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  while( true ) {
    FUN_800f6564(0x1b7b);
    *DAT_8019ed40 = *DAT_8019ed40 << 3;
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_800f4008(0x50);
    FUN_800f824c(0x46);
    FUN_800f654c(0x10);
    FUN_800f824c(0x45);
    FUN_8011f6d4();
    FUN_801368e8();
    FUN_80125934();
    FUN_8011f684();
    FUN_8011f884();
    FUN_800f6630(1);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) break;
    FUN_800f6630(0);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_80136494();
      FUN_801240d0();
      FUN_80126458();
      FUN_801352f0();
      FUN_801264c0();
    }
    FUN_800f6630(1);
    FUN_800f4248(8);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      do {
        FUN_800f6564(0x1b7b);
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(0x8080);
        if (iVar1 == 0) {
          FUN_800f6564(0x1b7d);
          FUN_800f5ccc();
        }
        FUN_800f8188(0x1b7b);
        FUN_801224d0();
        FUN_800f6b68(0x1a78);
        iVar1 = FUN_800f6434(0x202);
      } while (iVar1 != 0);
    }
    FUN_800f6630(1);
    FUN_800f4248(4);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      do {
        FUN_800f6564(0x1b7b);
        FUN_800f61e8();
        uVar2 = FUN_800f3b04(0x1b7d);
        FUN_800f54d4(uVar2);
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) {
          FUN_800f654c(0);
        }
        FUN_800f8188(0x1b7b);
        FUN_801224d0();
        FUN_800f6b68(0x1a78);
        iVar1 = FUN_800f6434(0x202);
      } while (iVar1 != 0);
    }
    FUN_800f6630(1);
    FUN_800f4248(3);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6564(0x1b7a);
      *DAT_8019ed40 = ~*DAT_8019ed40;
      FUN_800f4248(1);
      FUN_800f8188(0x1b7a);
      FUN_801378e0();
      FUN_8013554c();
      FUN_8011f6a4();
    }
    FUN_800f6630(0);
    FUN_800f4248(0x40);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6564(0x1b7a);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f6564(0x1b7c);
        FUN_800f5410();
        FUN_800f4008(10);
        FUN_800f5574(100);
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) {
          FUN_800f654c(10);
        }
        FUN_800f8188(0x1b7c);
        FUN_800f7500(0x19a);
        FUN_801206dc();
        FUN_8013554c();
      }
    }
  }
  return;
}



