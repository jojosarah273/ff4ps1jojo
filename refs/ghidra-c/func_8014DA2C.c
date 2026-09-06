
void FUN_8014da2c(void)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  
  bVar3 = DAT_801defd2 != 0x2040 || DAT_801defd4 != 0x20f0;
  FUN_800f5140();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8f74(0xf44e);
  FUN_800f654c(1);
  FUN_800f8188(0xf261);
  FUN_800f6630(2);
  FUN_800f8188(0xf24c);
  FUN_800f824c(6);
  FUN_800f6c68(0xfd5e0);
  FUN_800f824c(2);
  FUN_800f6c68(0xfd5e1);
  FUN_800f824c(3);
  FUN_800f654c(0xf);
  FUN_800f824c(4);
  FUN_800f8188(0xf280);
  FUN_800f6630(1);
  uVar1 = FUN_800f3b04(0xf24c);
  FUN_800f78c4(uVar1);
  iVar2 = FUN_800f7918(0x202);
  if (iVar2 == 0) {
    FUN_8014e38c();
    return;
  }
  FUN_800f6630(0);
  FUN_800f8188(0xf485);
  FUN_8014d680();
  FUN_800f7270(0);
  FUN_800f8d00(0xf279);
  FUN_800f6630(1);
  FUN_800f8188(0xf281);
  FUN_800f8188(0xf284);
  FUN_800f6564(0xf2d0);
  FUN_800f5574(2);
  iVar2 = FUN_800f53d4();
  if (iVar2 == 0) {
    FUN_800f5574(3);
    iVar2 = FUN_800f53d4();
    if (iVar2 == 0) goto LAB_8014dbb8;
  }
  FUN_800f654c(0xff);
  FUN_800f8188(0xf27a);
LAB_8014dbb8:
  FUN_800f7270(2);
  *DAT_8019ed54 = *DAT_8019ed54 + 2;
  FUN_800f8d00(0xf27c);
  FUN_800f6ea8(2);
  FUN_800f4248(0xf0);
  *DAT_8019ed40 = *DAT_8019ed40 >> 3;
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6c68(0xdff3e);
  FUN_800f8188(0xf24d);
  FUN_800f6c68(0xdff3f);
  FUN_800f8188(0xf24e);
  FUN_800f6ea8(2);
  FUN_800f4248(0xf);
  FUN_800f61e8();
  FUN_800f8188(0xf27b);
  FUN_8014ca24();
  FUN_800f7500(0);
  do {
    FUN_800f66d8(8);
    FUN_800f5410();
    uVar1 = FUN_800f3c3c(0x2c);
    FUN_800f3f38(uVar1);
    FUN_800f8960(0xf251);
    FUN_800f63bc();
    FUN_800f66d8(8);
    FUN_800f5410();
    uVar1 = FUN_800f3c3c(0x2d);
    FUN_800f3f38(uVar1);
    FUN_800f8960(0xf251);
    FUN_800f63bc();
    FUN_800f5a90(0x10);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  FUN_800f71dc(0);
  do {
    FUN_800f90ec(0xf268);
    FUN_800f6364();
    FUN_800f5958(0x10);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  FUN_8014cfc4();
  FUN_800f7500(1);
  FUN_800f67fc(2);
  FUN_800f4248(0x18);
  *DAT_8019ed40 = *DAT_8019ed40 >> 3;
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6c68(0xdffd9);
  FUN_800f8188(0xf29f);
  FUN_800f7500(1);
  FUN_800f67fc(2);
  iVar2 = FUN_800f6434(0x8080);
  if (iVar2 == 0) {
    FUN_800f8f74(0xf261);
  }
  FUN_800f67fc(2);
  FUN_800f4248(7);
  FUN_800f8188(0xf249);
  FUN_800f654c(0x10);
  FUN_800f8188(0xf24f);
  FUN_800f8188(0xf250);
  FUN_80148cac();
  FUN_800f8f74(0xf27e);
  FUN_800f8f74(0xf27f);
  FUN_800f8f74(0xf24a);
  FUN_800f8f74(0xf24b);
  FUN_8014d080();
  FUN_800f71dc(0);
  FUN_800f8d00(0xf281);
LAB_8014de20:
  do {
    if (bVar3 == 1) {
LAB_8014de54:
      FUN_8007259c();
    }
    else if (bVar3 < 2) {
      if (bVar3 == 0) {
        bVar3 = 2;
        goto LAB_8014de54;
      }
    }
    else if (bVar3 == 2) {
      bVar3 = 0;
    }
    FUN_8014d98c();
    FUN_800f6564(0xf27e);
    FUN_800f4280(0xf29f);
    iVar2 = FUN_800f4120(0x202);
    if (iVar2 == 0) {
      FUN_800f6564(0xf2a0);
      FUN_800f5574(3);
      iVar2 = FUN_800f53d4();
      if (iVar2 != 0) {
        FUN_8013e73c();
      }
    }
    FUN_800f6564(0xf2a0);
    FUN_800f5574(4);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) {
      FUN_8014588c();
    }
    FUN_800f6564(0xf281);
    iVar2 = FUN_800f6434(2);
    if (iVar2 == 0) {
      FUN_800f5574(3);
      iVar2 = FUN_800f53d4();
      if (iVar2 == 0) {
        FUN_800f5574(1);
        iVar2 = FUN_800f53d4();
        if (iVar2 == 0) {
          FUN_800f654c(4);
        }
        else {
          FUN_800f654c(2);
        }
        FUN_800f824c(0);
        FUN_800f6564(0x1813);
        FUN_800f4370(0);
        iVar2 = FUN_800f4120(2);
        if (iVar2 == 0) {
          FUN_8014d394();
        }
        else {
          FUN_8014d31c();
        }
      }
    }
    FUN_800f6564(0xf2d0);
    iVar2 = FUN_800f6434(2);
    if (iVar2 == 0) {
      FUN_800f5574(1);
      iVar2 = FUN_800f53d4();
      if (iVar2 == 0) {
        FUN_800f5574(5);
        iVar2 = FUN_800f53d4();
        if (iVar2 != 0) {
          FUN_80141da0();
        }
      }
      else {
        FUN_800f6564(0xf27e);
        FUN_800f4248(7);
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f6564(0xf279);
        iVar2 = FUN_800f6434(0x202);
        if (iVar2 == 0) {
          FUN_800f6c68(0xdffdd);
          FUN_800f8188(0xf268);
          FUN_8014cf14();
          FUN_8014ea0c();
        }
        else {
          FUN_8014d4d4();
        }
      }
    }
    FUN_800f6240(0xf27e);
    while( true ) {
      FUN_800f7534(0xf27c);
      FUN_800f8ebc(2);
      FUN_800f6564(0xf280);
      FUN_800f824c(4);
      FUN_800f6564(0xf27f);
      *DAT_8019ed58 = *DAT_8019ed44;
      FUN_800f67fc(2);
      FUN_800f5574(0xff);
      iVar2 = FUN_800f53d4();
      if (iVar2 != 0) break;
      FUN_800f67fc(2);
      iVar2 = FUN_800f6434(0x80);
      if (iVar2 == 0) {
        FUN_800f4248(0x7f);
        FUN_800f8188(0xf248);
        FUN_800f6564(0xf27a);
        FUN_800f8188(0xf262);
        FUN_800f654c(1);
        FUN_800f8188(0xf247);
        FUN_800f6564(0xf27e);
        FUN_800f4280(0xf29f);
        iVar2 = FUN_800f4120(0x202);
        if (iVar2 == 0) {
          FUN_800f6240(0xf27f);
        }
        goto LAB_8014de20;
      }
      FUN_800f824c(6);
      FUN_800f5574(0x88);
      iVar2 = FUN_800f53d4();
      if (iVar2 == 0) {
        FUN_800f4248(8);
        iVar2 = FUN_800f4120(2);
        if (iVar2 == 0) {
          FUN_800f4248(4);
          iVar2 = FUN_800f4120(2);
          if (iVar2 == 0) {
            FUN_8014d31c();
          }
          else {
            FUN_800f6630(6);
            FUN_800f9200();
            *DAT_8019ed40 = *DAT_8019ed40 >> 4;
            FUN_800f4248(7);
            FUN_8014d14c();
            FUN_800f93dc();
            FUN_800f4248(3);
            FUN_800f8188(0xf281);
            FUN_8014d394();
          }
        }
        else {
          FUN_800f6630(6);
          *DAT_8019ed40 = *DAT_8019ed40 >> 4;
          FUN_800f4248(7);
          FUN_800f5140();
          *DAT_8019ed54 = *DAT_8019ed44;
          FUN_800f6630(6);
          FUN_800f4248(7);
          FUN_800f61e8();
          FUN_800f824c(8);
          FUN_8014eae4();
          FUN_800f6564(0xf24a);
          FUN_800f5410();
          uVar1 = FUN_800f3c3c(6);
          FUN_800f3f38(uVar1);
          FUN_800f8188(0xf24a);
          FUN_800f6564(0xf24b);
          FUN_800f5410();
          uVar1 = FUN_800f3c3c(7);
          FUN_800f3f38(uVar1);
          FUN_800f8188(0xf24b);
        }
      }
      else {
        FUN_800f6240(0xf27f);
        FUN_800f63bc();
        FUN_800f67fc(2);
        FUN_800f6240(0xf44e);
        FUN_8014d780();
      }
      FUN_800f6240(0xf27f);
    }
    FUN_800f8f74(0xf27f);
    FUN_800f6564(0xf2a0);
    iVar2 = FUN_800f6434(2);
    if (iVar2 == 0) {
      FUN_8014e424();
    }
    FUN_800f5d24(0xf27b);
    iVar2 = FUN_800f5b8c(2);
    if (iVar2 != 0) {
      FUN_800f6564(0xf285);
      iVar2 = FUN_800f6434(0x202);
      if (iVar2 == 0) {
        FUN_8014d31c();
      }
      FUN_8014e38c();
      FUN_800f6564(0xf284);
      FUN_800f8188(0xf467);
      FUN_8009b8e4();
      FUN_800f971c();
      FUN_8014d500();
      return;
    }
  } while( true );
}



