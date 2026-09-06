
void FUN_80127168(void)

{
  int iVar1;
  
  FUN_801360ac();
  do {
    FUN_800f6564(0x1a3c);
    FUN_800f5574(5);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      FUN_800f8f74(0x1a3c);
    }
    FUN_8011f684();
    FUN_8011ef0c();
    FUN_800f654c(0x1f);
    FUN_800f81e8(0x212c);
    FUN_800f6240(0x16a7);
    FUN_8011f884();
    FUN_800f6630(0);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f5480();
      DAT_8019edc4 = 2;
      FUN_80136148();
      return;
    }
    if ((DAT_8019edc2 == 8) && (FUN_80135be4(), 0 < (int)(&DAT_8019edd0)[DAT_8019ed8e])) {
      DAT_8019edc4 = 1;
      FUN_800f5410();
      FUN_80136014();
      return;
    }
    FUN_800f6630(1);
    FUN_800f4248(8);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f654c(0xf);
      FUN_800f81e8(0x212c);
      do {
        FUN_800f6564(0x1b47);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f6564(0x1a3c);
          FUN_800f5ccc();
          iVar1 = FUN_800f5b8c(2);
          if (iVar1 != 0) {
LAB_801272f4:
            FUN_800f654c(4);
          }
        }
        else {
          FUN_800f6564(0x1a3c);
          FUN_800f5ccc();
          iVar1 = FUN_800f5b8c(0x8080);
          if (iVar1 == 0) goto LAB_801272f4;
        }
        FUN_800f8188(0x1a3c);
        FUN_801282d4();
        iVar1 = FUN_800f53c0();
      } while (iVar1 == 0);
LAB_801273a4:
      FUN_800f6564(0x1a3c);
      FUN_80127668();
      FUN_80124298();
      FUN_801280d4();
    }
    else {
      FUN_800f6630(1);
      FUN_800f4248(4);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f654c(0xf);
        FUN_800f81e8(0x212c);
        do {
          FUN_800f6564(0x1a3c);
          FUN_800f61e8();
          FUN_800f5574(5);
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) {
            FUN_800f6564(0x1b47);
          }
          FUN_800f8188(0x1a3c);
          FUN_801282d4();
          iVar1 = FUN_800f53c0();
        } while (iVar1 == 0);
        goto LAB_801273a4;
      }
    }
    FUN_800f6630(1);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      DAT_8019edc4 = 1;
      FUN_800f5410();
      FUN_80136148();
      return;
    }
  } while( true );
}



