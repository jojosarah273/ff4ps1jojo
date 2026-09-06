
void FUN_80123320(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f8ebc(0x4b);
  FUN_800f8d6c(0x48);
  FUN_800f6b68(3);
  FUN_800f52bc(0x80);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_80123aa8();
    *DAT_8019ed54 = *DAT_8019ed58;
    FUN_800f7500(DAT_801991a2);
    FUN_8011f8d4();
  }
  else {
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_800f824c(0x45);
    FUN_800f6b68(4);
    FUN_800f7c6c();
    FUN_800f7a68();
    FUN_800f7c6c();
    FUN_800f7a68();
    FUN_800f7c6c();
    FUN_800f4248(1);
    uVar2 = FUN_800f3c3c(0x45);
    FUN_800f78c4(uVar2);
    iVar1 = FUN_800f7918(2);
    if (iVar1 == 0) {
      FUN_800f9200();
      FUN_80123aa8();
      FUN_80122334();
      FUN_800f93dc();
      FUN_800f5ea0();
      FUN_800f5ea0();
      FUN_800f824c(0x45);
      FUN_800f654c(0x21);
      FUN_800f824c(0x46);
      FUN_800f9644(0x20);
      *DAT_8019ed44 = *DAT_8019ed58;
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0x29);
      FUN_800f3f94(uVar2);
      *DAT_8019ed58 = *DAT_8019ed44;
      FUN_800f9660(0x20);
      FUN_800f71dc(8);
      do {
        FUN_800f6630(0x45);
        FUN_800f52bc(0x80);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f6630(0x46);
          FUN_800f8960(0);
          *DAT_8019ed40 = (&DAT_8019931c)[*DAT_8019ed54];
          uVar2 = FUN_800f3c3c(0x34);
          FUN_800f78c4(uVar2);
          FUN_800f8960(1);
        }
        else {
          FUN_800f654c(0xff);
          FUN_800f8960(0);
        }
        FUN_800f939c();
        FUN_800f9644(0x20);
        *DAT_8019ed44 = *DAT_8019ed58;
        FUN_800f5480();
        FUN_800f80d0(0x40);
        *DAT_8019ed58 = *DAT_8019ed44;
        FUN_800f9660(0x20);
        FUN_800f654c(0xff);
        FUN_800f8960(0);
        FUN_800f960c();
        *DAT_8019ed58 = *DAT_8019ed58 + 2;
        FUN_800f62bc(0x46);
        uVar2 = FUN_800f3c3c(0x45);
        FUN_800f4f28(uVar2);
        FUN_800f5e48();
        iVar1 = FUN_800f5c64(0x202);
      } while (iVar1 != 0);
    }
    else {
      FUN_800f6564(0x1bc2);
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) {
        FUN_800f7594(0x48);
        FUN_800f6d70(1);
        FUN_800f9200();
        FUN_80123aa8();
        FUN_800f93dc();
        FUN_800f4248(0xf);
        FUN_800f9200();
        FUN_800f9644(0x20);
        *DAT_8019ed44 = *DAT_8019ed58;
        FUN_800f5410();
        uVar2 = FUN_800f3c3c(0x29);
        FUN_800f3f94(uVar2);
        *DAT_8019ed58 = *DAT_8019ed44;
        FUN_800f9660(0x20);
        FUN_800f93dc();
        FUN_800f5140();
        FUN_800f824c(0x45);
        FUN_800f5140();
        FUN_800f4f4c();
        uVar2 = FUN_800f3c3c(0x45);
        FUN_800f3f38(uVar2);
        FUN_800f824c(0x45);
        FUN_800f8fb8(0x46);
        FUN_800f7270(0x45);
        FUN_800f654c(6);
        FUN_800f824c(0x45);
        FUN_8012371c();
      }
    }
  }
  return;
}



