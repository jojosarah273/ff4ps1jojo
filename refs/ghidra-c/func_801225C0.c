
void FUN_801225c0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_800f654c(0x7e);
  FUN_800f9200();
  FUN_800f9448();
  FUN_80123cb4();
  FUN_801386c8();
  FUN_800f8f74(0x1a03);
  FUN_800f6564(0x16b7);
  iVar2 = FUN_800f6434(0x202);
  if (iVar2 == 0) {
    FUN_800f8f74(0x1a76);
    FUN_800f8f74(0x1a77);
  }
  while( true ) {
    while( true ) {
      FUN_800f6564(0x1a76);
      *DAT_8019ed40 = *DAT_8019ed40 << 3;
      FUN_800f5140();
      FUN_800f4f4c();
      FUN_800f4008(0x10);
      FUN_800f824c(0x46);
      FUN_800f654c(0xb0);
      FUN_800f824c(0x45);
      FUN_8011f6d4();
      FUN_80122538();
      FUN_8011f684();
      FUN_80126550();
      FUN_8011ef0c();
      FUN_8011f884();
      FUN_800f6630(1);
      FUN_800f4248(8);
      iVar2 = FUN_800f4120(2);
      if (iVar2 == 0) {
        FUN_800f6564(0x1a76);
        FUN_800f5ccc();
        iVar2 = FUN_800f5b8c(0x8080);
        if (iVar2 == 0) {
          FUN_800f654c(7);
        }
        FUN_800f8188(0x1a76);
      }
      FUN_800f6630(1);
      FUN_800f4248(4);
      iVar2 = FUN_800f4120(2);
      if (iVar2 == 0) {
        FUN_800f6564(0x1a76);
        FUN_800f61e8();
        FUN_800f5574(8);
        iVar2 = FUN_800f53c0();
        if (iVar2 != 0) {
          FUN_800f971c();
        }
        FUN_800f8188(0x1a76);
      }
      FUN_800f6630(0);
      FUN_800f4248(0x80);
      iVar2 = FUN_800f4120(2);
      if (iVar2 == 0) break;
      FUN_800f6630(1);
      FUN_800f4248(0x80);
      iVar2 = FUN_800f4120(2);
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_8012b168();
    FUN_8011f684();
    FUN_800f6564(0x1a76);
    uVar3 = FUN_800f3b04(0x1a77);
    FUN_800f54d4(uVar3);
    iVar2 = FUN_800f53d4();
    if (iVar2 == 0) {
      FUN_80123cb4();
    }
    FUN_800f8188(0x1a77);
    FUN_800f71dc(0x8887);
    cVar1 = FUN_80120070();
    if (DAT_8019edc8 == 1) break;
    if (cVar1 == '\x01') {
      return;
    }
    FUN_80123cb4();
  }
  return;
}



