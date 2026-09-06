
undefined4 FUN_8012a190(void)

{
  char cVar1;
  int iVar2;
  
  do {
    FUN_8012c980();
    FUN_800f71dc(0x6800);
    FUN_800f8d6c(0x1d);
    FUN_800f71dc(0xa600);
    FUN_800f8d6c(0x1f);
    FUN_800f654c(0x7e);
    FUN_800f824c(0x21);
    FUN_800f71dc(0x140);
    FUN_800f8d6c(0x22);
    FUN_8011f320();
    FUN_8011ee34();
    FUN_8011f6a4();
    FUN_80126480();
    FUN_8011f884();
LAB_8012a208:
    do {
      FUN_800f6630(1);
      FUN_800f4248(2);
      iVar2 = FUN_800f4120(2);
      if (iVar2 == 0) {
        FUN_800f6564(0x1b22);
        FUN_800f61e8();
        FUN_800f4248(1);
        FUN_800f8188(0x1b22);
        iVar2 = FUN_800f4120(0x202);
        if (iVar2 == 0) goto LAB_8012a258;
LAB_8012a2c8:
        FUN_800f6564(0x1b23);
        iVar2 = FUN_800f6434(0x202);
        if (iVar2 == 0) {
          FUN_800f6564(0x1b1a);
          iVar2 = FUN_800f6434(2);
          if (iVar2 == 0) {
            FUN_800f5ccc();
            FUN_800f8188(0x1b1a);
            FUN_800f9644(0x20);
            FUN_800f7500(8);
            do {
              FUN_800f6658(0x93);
              FUN_800f5480();
              FUN_800f80d0(2);
              FUN_800f8274(0x93);
              FUN_800f9660(0x20);
              FUN_800f6564(0x1b19);
              iVar2 = FUN_800f6434(2);
              if (iVar2 == 0) {
                FUN_800f6240(0x311);
                FUN_800f6240(0x311);
              }
              FUN_800f939c();
              FUN_8012c980();
              FUN_8011f684();
              FUN_80126418();
              FUN_8016ea7c();
              FUN_800f960c();
              FUN_800f9644(0x20);
              FUN_800f5ea0();
              iVar2 = FUN_800f5c64(0x202);
            } while (iVar2 != 0);
            FUN_800f9660(0x20);
            FUN_8012a678();
            FUN_8011f7d4();
            iVar2 = FUN_800f53c0();
            if (iVar2 == 0) goto LAB_8012a208;
          }
        }
        else {
          FUN_800f5ccc();
          FUN_800f8188(0x1b23);
        }
LAB_8012a3f8:
        FUN_800f6630(1);
        FUN_800f4248(4);
        iVar2 = FUN_800f4120(2);
        if (iVar2 != 0) break;
      }
      else {
LAB_8012a258:
        FUN_800f6630(1);
        FUN_800f4248(1);
        iVar2 = FUN_800f4120(2);
        if (iVar2 != 0) {
LAB_8012a2a8:
          FUN_800f6630(1);
          FUN_800f4248(8);
          iVar2 = FUN_800f4120(2);
          if (iVar2 == 0) goto LAB_8012a2c8;
          goto LAB_8012a3f8;
        }
        FUN_800f6564(0x1b22);
        FUN_800f61e8();
        FUN_800f4248(1);
        FUN_800f8188(0x1b22);
        iVar2 = FUN_800f4120(2);
        if (iVar2 == 0) goto LAB_8012a2a8;
      }
      FUN_800f6564(0x1b23);
      FUN_800f5574(9);
      iVar2 = FUN_800f53c0();
      if (iVar2 == 0) {
        FUN_800f61e8();
        FUN_800f8188(0x1b23);
        break;
      }
      FUN_800f6564(0x1b1a);
      FUN_800f5574(0xe);
      iVar2 = FUN_800f53d4();
      if (iVar2 != 0) break;
      FUN_800f61e8();
      FUN_800f8188(0x1b1a);
      FUN_800f9644(0x20);
      FUN_800f7500(8);
      do {
        FUN_800f6658(0x93);
        FUN_800f5410();
        FUN_800f4064(2);
        FUN_800f8274(0x93);
        FUN_800f9660(0x20);
        FUN_800f6564(0x1b19);
        iVar2 = FUN_800f6434(2);
        if (iVar2 == 0) {
          FUN_800f5d24(0x311);
          FUN_800f5d24(0x311);
        }
        FUN_800f939c();
        FUN_8012c980();
        FUN_8011f684();
        FUN_80126418();
        FUN_8016ea7c();
        FUN_800f960c();
        FUN_800f9644(0x20);
        FUN_800f5ea0();
        iVar2 = FUN_800f5c64(0x202);
      } while (iVar2 != 0);
      FUN_800f9660(0x20);
      FUN_8012a678();
      FUN_8011f7d4();
      iVar2 = FUN_800f53c0();
    } while (iVar2 == 0);
    FUN_800f6630(0);
    FUN_800f4248(0x80);
    iVar2 = FUN_800f4120(2);
    if (iVar2 == 0) {
      FUN_800f6564(0x1b19);
      iVar2 = FUN_800f6434(0x202);
      if (iVar2 == 0) {
        FUN_8012b050();
      }
      else {
        cVar1 = FUN_8012b190();
        if (cVar1 == '\x01') {
          return 1;
        }
        FUN_80120fbc();
        FUN_8012aac0();
        FUN_800f8f74(0x1b19);
        FUN_8012b0b0();
        FUN_80126458();
        FUN_8011f6a4();
      }
    }
    else {
      FUN_800f6630(1);
      FUN_800f4248(0x80);
      iVar2 = FUN_800f4120(2);
      if (iVar2 == 0) {
        FUN_800f6564(0x1b19);
        iVar2 = FUN_800f6434(2);
        if (iVar2 != 0) {
          FUN_8012b0b0();
          FUN_80125a64();
          FUN_800f8fb8(0x86);
          return 0;
        }
        FUN_800f8f74(0x1b19);
        FUN_8012b0b0();
      }
    }
    FUN_8012a678();
  } while( true );
}



