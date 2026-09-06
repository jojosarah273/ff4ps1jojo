
void FUN_8015c220(void)

{
  int iVar1;
  
  do {
    FUN_800f6564(0x38e8);
    iVar1 = FUN_800f6434(0x202);
  } while (iVar1 != 0);
  FUN_800f8fb8(0xdb);
  FUN_800f8fb8(0xd9);
  FUN_800f6630(0xd0);
  FUN_800f8188(0x38e9);
  FUN_80152cdc();
  FUN_800f7270(0xa6);
  FUN_800f6b68(0x2000);
  FUN_800f4248(0x1f);
  FUN_800f5574(0x15);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    while( true ) {
      FUN_800f6564(0x38a8);
      FUN_800f5140();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f6b68(0x388c);
      FUN_800f5574(0xff);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) break;
      FUN_800f8f74(0x38a8);
    }
    FUN_800f824c(0xa9);
    FUN_800f6b68(0x388d);
    FUN_800f824c(0xaa);
    FUN_800f6240(0x38a8);
  }
  else {
    while( true ) {
      FUN_800f6564(0x38a9);
      FUN_800f5140();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f6b68(0x389a);
      FUN_800f5574(0xff);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) break;
      FUN_800f8f74(0x38a9);
    }
    FUN_800f824c(0xa9);
    FUN_800f6b68(0x389b);
    FUN_800f824c(0xaa);
    FUN_800f6240(0x38a9);
  }
  FUN_800f6630(0xa9);
  FUN_800f5574(0xc0);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f654c(2);
      FUN_800f8188(0x38ea);
      FUN_800f6630(0xaa);
      FUN_800f824c(0xdc);
      FUN_800f654c(0x20);
      FUN_800f824c(0xd8);
      FUN_800f654c(0xff);
      FUN_800f824c(0xda);
    }
    else {
      FUN_800f6630(0xaa);
      FUN_800f824c(0xdc);
      FUN_800f654c(0x40);
      FUN_800f824c(0xd8);
      FUN_800f654c(0xff);
      FUN_800f824c(0xda);
    }
  }
  else {
    FUN_800f5480();
    FUN_800f8058(0xc0);
    FUN_800f824c(0xdc);
    FUN_800f8188(0x38ea);
    FUN_800f6630(0xa9);
    FUN_800f5574(0xce);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      do {
        FUN_8015316c();
        FUN_800f824c(0xa9);
        FUN_800f5410();
        FUN_800f4008(5);
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f6b68(0x3540);
        iVar1 = FUN_800f6434(0x202);
      } while (iVar1 != 0);
      FUN_800f6630(0xa9);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f971c();
      FUN_80153098();
      FUN_800f824c(0xda);
    }
    else {
      FUN_800f654c(0xff);
      FUN_800f824c(0xda);
    }
    FUN_800f654c(0x80);
    FUN_800f824c(0xd8);
  }
  FUN_800f6240(0x38e8);
  return;
}



