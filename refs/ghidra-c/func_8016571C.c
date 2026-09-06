
void FUN_8016571c(void)

{
  int iVar1;
  
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f6b68(0x2041);
    FUN_800f8768(0x202d);
    FUN_800f6b68(0x2042);
    FUN_800f8768(0x202e);
    FUN_800f6d70(0x38bf);
    FUN_800f8768(0x2003);
    FUN_800f6d70(0x38c0);
    FUN_800f8768(0x2004);
    FUN_800f6d70(0x38c1);
    FUN_800f8768(0x2006);
    FUN_8015330c();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f5a90(0xf);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f8fb8(0xa9);
  do {
    FUN_800f8fb8(0xab);
    do {
      FUN_800f6b68(0x2000);
      FUN_800f8960(0x1000);
      FUN_800f6364();
      FUN_800f63bc();
      FUN_800f62bc(0xab);
      FUN_800f6630(0xab);
      FUN_800f5574(0x40);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f9644(0x20);
    *DAT_8019ed44 = *DAT_8019ed54;
    FUN_800f5410();
    FUN_800f4064(0x40);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f971c();
    FUN_800f9660(0x20);
    FUN_800f62bc(0xa9);
    FUN_800f6630(0xa9);
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f8d6c(0xa9);
  do {
    FUN_800f6b68(0x321b);
    FUN_800f8960(0x1440);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f5574(0x60);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_80165974;
      FUN_800f6b68(0x321c);
      FUN_800f63f8();
    }
    else {
LAB_80165974:
      FUN_800f971c();
      FUN_800f64a8();
      FUN_800f8960(0x1440);
    }
    FUN_800f8960(0x1441);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f971c();
      FUN_800f8960(0x1440);
    }
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f62bc(0xa9);
    FUN_800f6630(0xa9);
    FUN_800f5574(0x30);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6564(0x16a8);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f6564(0x2001);
        FUN_800f4248(0x7f);
        FUN_800f8188(0x2001);
        FUN_800f6564(0x2081);
        FUN_800f4248(0x7f);
        FUN_800f8188(0x2081);
        FUN_800f6564(0x2101);
        FUN_800f4248(0x7f);
        FUN_800f8188(0x2101);
        FUN_800f6564(0x2181);
        *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
        FUN_800f8188(0x2181);
        FUN_800f6564(0x2201);
        *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
        FUN_800f8188(0x2201);
      }
      else {
        FUN_800f6564(0x2001);
        *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
        FUN_800f8188(0x2001);
        FUN_800f6564(0x2081);
        *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
        FUN_800f8188(0x2081);
        FUN_800f6564(0x2101);
        *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
        FUN_800f8188(0x2101);
        FUN_800f6564(0x2181);
        FUN_800f4248(0x7f);
        FUN_800f8188(0x2181);
        FUN_800f6564(0x2201);
        FUN_800f4248(0x7f);
        FUN_800f8188(0x2201);
      }
      return;
    }
  } while( true );
}



