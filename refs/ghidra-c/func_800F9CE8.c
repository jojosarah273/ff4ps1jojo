
void FUN_800f9ce8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  while( true ) {
    FUN_800f54b8();
    FUN_800f5410();
    FUN_800f9644(0x10);
    FUN_800f9660(0x20);
    FUN_800f8f74(0x420d);
    FUN_800f8f74(0x420b);
    FUN_800f8f74(0x420c);
    FUN_800f654c(0x8f);
    FUN_800f8188(0x2100);
    FUN_800f654c(0);
    FUN_800f8188(0x4200);
    FUN_800f654c(0);
    FUN_800f3d48();
    FUN_800f654c(0);
    FUN_800f9200();
    FUN_800f9448();
    FUN_800f71dc(0x600);
    FUN_800f9330();
    FUN_800f94b8();
    FUN_800f71dc(0x2ff);
    *DAT_8019ed4c = *DAT_8019ed54;
    FUN_800fc548();
    FUN_80176060();
    FUN_801762d0();
    FUN_801690f8();
    FUN_8011eb3c();
    iVar1 = FUN_800fb430();
    if (iVar1 != 0) break;
    FUN_801798f0();
    FUN_80179670(0);
    FUN_80179930();
  }
LAB_800f9df4:
  FUN_80126bb8();
  FUN_800f6564(0x17ef);
  FUN_800f5410();
  uVar2 = FUN_800f3b04(0xfff);
  FUN_800f3f38(uVar2);
  FUN_800f8188(0x17ef);
  FUN_800f5140();
  FUN_800f8188(0x17ee);
  FUN_800f6564(0x17fb);
  FUN_800f5574(0);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_8011b874();
    goto LAB_800f9efc;
  }
  FUN_800fa834();
  FUN_800ff0ac();
  FUN_8017477c();
  FUN_80176060();
  FUN_800fa9b4();
  FUN_8011b874();
  FUN_800f654c(1);
  FUN_800f824c(0xb1);
  FUN_800f654c(1);
  FUN_800f824c(0x7d);
  FUN_800f654c(0xf);
  FUN_800f824c(0x80);
  FUN_800f654c(0x81);
  FUN_800f8188(0x4200);
  FUN_800f5448();
  FUN_800f8fb8(0xab);
  FUN_800f654c(0x10);
  FUN_801163e8();
  FUN_800f8fb8(0xb1);
LAB_800f9f74:
  do {
    FUN_800fe778();
    FUN_800f8fb8(0xe0);
    FUN_801764dc();
    FUN_800fa5b8();
    FUN_800f6630(0xe0);
    iVar1 = FUN_800f6434(2);
  } while (iVar1 == 0);
  FUN_800f6564(0x1700);
  FUN_800f5574(3);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f654c(7);
    FUN_800f8188(0x2105);
    FUN_80101350();
    FUN_800f6630(0xe0);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) goto LAB_800f9f74;
    FUN_800f6630(0xcd);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) goto LAB_800fa3a8;
    FUN_800fccdc();
    FUN_800f6630(0x85);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      iVar1 = FUN_800fc110();
joined_r0x800fa1bc:
      if (iVar1 == 0) {
LAB_800f9efc:
        FUN_80176060();
        FUN_800fa9b4();
        FUN_800f654c(1);
        FUN_800f824c(0x7d);
        FUN_800f8fb8(0xdf);
        FUN_800f8fb8(0xb1);
        goto LAB_800fa3a8;
      }
      goto LAB_800f9df4;
    }
    FUN_800f6630(0xe0);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) goto LAB_800f9f74;
    FUN_8010543c();
    FUN_800f6630(0xe0);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f8f74(0x6ab);
      goto LAB_800f9f74;
    }
    FUN_80102770();
    FUN_800fe870();
    FUN_800ff024();
    FUN_800fdafc();
    FUN_80175d90();
    FUN_800f6630(0xce);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) goto LAB_800f9f74;
    FUN_800f8fb8(0xce);
    FUN_800f6564(0x1700);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800ff1c0();
      goto LAB_800f9f34;
    }
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5574(2);
      FUN_800f53d4();
      goto LAB_800f9f74;
    }
    FUN_800ff54c();
  }
  else {
    iVar1 = FUN_80100d50();
    if (iVar1 != 0) goto LAB_800f9df4;
    FUN_800f6630(0xcd);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) goto LAB_800fa3a8;
    FUN_800fccdc();
    FUN_800f6630(0x85);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
LAB_800fa1b4:
      iVar1 = FUN_800fc1cc();
      goto joined_r0x800fa1bc;
    }
    iVar1 = FUN_800ffe0c();
    if (iVar1 != 0) goto LAB_800f9df4;
    FUN_800f6630(0x85);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) goto LAB_800fa1b4;
    FUN_800f6630(0xe0);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) goto LAB_800f9f74;
    FUN_80104934();
    FUN_8010b6ec();
    FUN_80102770();
    FUN_8010c368();
    FUN_800fe870();
    FUN_80170c14();
    FUN_8010b010();
    FUN_80175d90();
    FUN_800fcab8();
    FUN_800f6630(0xd1);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) goto LAB_800f9f74;
    FUN_800f7210(0x172c);
    FUN_800f5e48();
    FUN_800f5e48();
    FUN_800f5e48();
    FUN_800f8d00(0x172c);
    FUN_800f6b68(0x172e);
    FUN_800f5574(0xfb);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      FUN_800fd6b8();
    }
    FUN_800fec74();
    FUN_800f8fb8(0xd6);
    FUN_800f6b68(0x172e);
    FUN_800f5480();
    FUN_800f8058(0xfb);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f654c(3);
      FUN_800f8188(0x1700);
      FUN_800f6b68(0x172e);
      FUN_800f8188(0x1702);
      FUN_800f6b68(0x172f);
      FUN_800f4248(0x3f);
      FUN_800f8188(0x1706);
      FUN_800f6b68(0x172f);
      *DAT_8019ed40 = *DAT_8019ed40 >> 6;
      FUN_800f5410();
      FUN_800f4008(2);
      FUN_800f4248(3);
      FUN_800f8188(0x1705);
      FUN_800f6b68(0x1730);
      FUN_800f8188(0x1707);
    }
    else {
      FUN_800f8188(0x1700);
      FUN_800f6b68(0x172f);
      FUN_800f8188(0x1706);
      FUN_800f654c(2);
      FUN_800f8188(0x1705);
      FUN_800f6b68(0x1730);
      FUN_800f8188(0x1707);
      FUN_800f71dc(0);
      FUN_800f8d00(0x172c);
      FUN_800fd6b8();
    }
LAB_800fa3a8:
    FUN_800f6564(0x1700);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800fb09c();
    }
    else {
      FUN_800f5574(1);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574(2);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f6630(0x85);
          iVar1 = FUN_800f6434(2);
          if (iVar1 == 0) {
            FUN_800fad48();
          }
          else {
            FUN_800faa04();
          }
        }
        else {
          FUN_800fb224();
        }
      }
      else {
        FUN_800fb160();
      }
    }
    FUN_800fed3c();
  }
LAB_800f9f34:
  DAT_8019ee6c = 0;
  FUN_800f8fb8(0x79);
  FUN_800f8fb8(0x7a);
  FUN_800f8fb8(0x7b);
  FUN_800f654c(0x81);
  FUN_800f8188(0x4200);
  FUN_800fe7d8();
  FUN_800f5448();
  goto LAB_800f9f74;
}



