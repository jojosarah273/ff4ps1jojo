
void FUN_8013c554(void)

{
  int iVar1;
  undefined4 uVar2;
  
LAB_8013c55c:
  FUN_800f6564(0x1bb5);
  *DAT_8019ed40 = *DAT_8019ed40 << 3;
  FUN_800f5140();
  FUN_800f4f4c();
  FUN_800f4008(0x86);
  FUN_800f824c(0x46);
  FUN_800f6564(0x1bb6);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f654c(0x70);
  }
  else {
    FUN_800f654c(0);
  }
  FUN_800f824c(0x45);
  FUN_8011f6d4();
  FUN_8011f684();
  FUN_8011f884();
  do {
    FUN_800f6630(1);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_8012b168();
      return;
    }
    FUN_800f6630(0);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_8012b168();
      FUN_800f6564(0x1bb3);
      FUN_800f5140();
      FUN_800f4f4c();
      uVar2 = FUN_800f3b04(0x1bb4);
      FUN_800f3f38(uVar2);
      FUN_800f5140();
      FUN_801224d0();
      FUN_800f6564(0x1bb5);
      FUN_800f5410();
      uVar2 = FUN_800f3b04(0x1bb7);
      FUN_800f3f38(uVar2);
      FUN_800f5140();
      FUN_800f4f4c();
      uVar2 = FUN_800f3b04(0x1bb6);
      FUN_800f3f38(uVar2);
      FUN_800f5140();
      FUN_800f824c(0x43);
      FUN_800f7594(0x43);
      FUN_800f6d70(0x1440);
      FUN_800f5574(0x19);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574(200);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f5574(0xee);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) {
            FUN_800f6d70(0x1440);
            uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0xff28);
            FUN_800f54d4(uVar2);
            iVar1 = FUN_800f53d4();
            if (iVar1 == 0) {
              FUN_800f9644(0x20);
              FUN_800f6de8(0x1440);
              FUN_800f922c();
              FUN_800f6be0(0xff28);
              FUN_800f89d4(0x1440);
              FUN_800f9410();
              FUN_800f87dc(0xff28);
              FUN_800f9660(0x20);
            }
            else {
              FUN_800f6b68(0xff29);
              FUN_800f5410();
              uVar2 = FUN_800f3b04(*DAT_8019ed58 + 0x1441);
              FUN_800f3f38(uVar2);
              FUN_800f5574(100);
              iVar1 = FUN_800f53c0();
              if (iVar1 == 0) {
                FUN_800f8960(0x1441);
                FUN_800f90ec(0xff29);
              }
            }
          }
        }
      }
      FUN_8013c4b4();
      return;
    }
    FUN_800f6630(1);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6564(0x1bb6);
      FUN_800f61e8();
      FUN_800f4248(1);
      FUN_800f8188(0x1bb6);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) goto LAB_8013c69c;
LAB_8013c7cc:
      FUN_800f6564(0x1bb5);
      FUN_800f61e8();
      FUN_800f5574(5);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f8188(0x1bb5);
        goto LAB_8013c55c;
      }
      FUN_800f6564(0x1bb7);
      FUN_800f61e8();
      FUN_800f5574(0x14);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_8013c55c;
      FUN_800f8188(0x1bb7);
      FUN_800f654c(8);
      do {
        FUN_800f9644(0x20);
        FUN_800f62f0(0x9f);
        FUN_800f62f0(0x9f);
        FUN_800f9660(0x20);
        FUN_801266c8();
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(0x202);
      } while (iVar1 != 0);
    }
    else {
LAB_8013c69c:
      FUN_800f6630(1);
      FUN_800f4248(2);
      iVar1 = FUN_800f4120(2);
      if (iVar1 != 0) {
LAB_8013c6ec:
        FUN_800f6630(1);
        FUN_800f4248(8);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) goto LAB_8013c70c;
LAB_8013c7ac:
        FUN_800f6630(1);
        FUN_800f4248(4);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) goto LAB_8013c7cc;
        goto LAB_8013c55c;
      }
      FUN_800f6564(0x1bb6);
      FUN_800f61e8();
      FUN_800f4248(1);
      FUN_800f8188(0x1bb6);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) goto LAB_8013c6ec;
LAB_8013c70c:
      FUN_800f6564(0x1bb5);
      FUN_800f5ccc();
      iVar1 = FUN_800f5b8c(0x8080);
      if (iVar1 != 0) {
        FUN_800f8188(0x1bb5);
        goto LAB_8013c7ac;
      }
      FUN_800f6564(0x1bb7);
      FUN_800f5ccc();
      iVar1 = FUN_800f5b8c(0x80);
      if (iVar1 != 0) goto LAB_8013c7ac;
      FUN_800f8188(0x1bb7);
      FUN_800f654c(8);
      do {
        FUN_800f9644(0x20);
        FUN_800f5dd4(0x9f);
        FUN_800f5dd4(0x9f);
        FUN_800f9660(0x20);
        FUN_801266c8();
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(0x202);
      } while (iVar1 != 0);
    }
    FUN_8011f884();
    FUN_800f7270(2);
    FUN_800f8d6c(0);
  } while( true );
}



