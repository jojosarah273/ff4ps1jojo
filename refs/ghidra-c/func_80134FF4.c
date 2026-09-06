
void FUN_80134ff4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_80124298();
  FUN_80134fbc();
  FUN_801264c0();
  FUN_8017f8f8(&DAT_801d7d68,0x300,0,0xffffffff);
  DAT_8019ee30 = 0;
  DAT_8019ee2e = 0;
  DAT_8019ee2c = 0;
  FUN_80126590();
  while( true ) {
    while( true ) {
      FUN_800f6564(0x1b79);
      *DAT_8019ed40 = *DAT_8019ed40 << 3;
      FUN_800f824c(0x45);
      *DAT_8019ed40 = *DAT_8019ed40 << 1;
      FUN_800f5140();
      FUN_800f4f4c();
      uVar1 = FUN_800f3c3c(0x45);
      FUN_800f3f38(uVar1);
      FUN_800f4008(0x10);
      if (0x10 < *DAT_8019ed40) {
        *DAT_8019ed40 = *DAT_8019ed40 - 8;
      }
      FUN_800f824c(0x45);
      FUN_800f654c(0x30);
      FUN_800f824c(0x46);
      FUN_8011f6d4();
      FUN_80125934();
      FUN_8011f684();
      FUN_801264e8();
      FUN_8011ef0c();
      FUN_8011f884();
      FUN_800f6630(1);
      FUN_800f4248(1);
      iVar2 = FUN_800f4120(2);
      if (iVar2 == 0) {
        FUN_800f6564(0x1b79);
        FUN_800f61e8();
        FUN_800f5574(3);
        iVar2 = FUN_800f53d4();
        if (iVar2 != 0) {
          FUN_800f654c(0);
        }
        FUN_800f8188(0x1b79);
      }
      FUN_800f6630(1);
      FUN_800f4248(2);
      iVar2 = FUN_800f4120(2);
      if (iVar2 == 0) {
        FUN_800f6564(0x1b79);
        FUN_800f5ccc();
        iVar2 = FUN_800f5b8c(0x8080);
        if (iVar2 == 0) {
          FUN_800f654c(2);
        }
        FUN_800f8188(0x1b79);
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
    FUN_800f6564(0x1b79);
    FUN_800f5574(2);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) break;
    FUN_800f9200();
    FUN_800f93dc();
    FUN_800f71dc(0xc401);
    FUN_80120070();
    FUN_8012b0d8();
    FUN_80123fb4();
    FUN_80134fbc();
    FUN_80126528();
    FUN_80126458();
    FUN_801264c0();
  }
  return;
}



