
void FUN_80135574(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f7270(0x41);
  FUN_800f8d00(0x1a78);
  FUN_800f8d00(0x1a7a);
  FUN_800f8d00(0x1a7c);
  FUN_800f8d00(0x1a7e);
  FUN_80120f1c();
  FUN_800f71dc(0x1b55);
  FUN_800f8d6c(0x51);
  FUN_800f654c(0);
  FUN_800f3d48();
  FUN_800f6564(0x1a00);
  *DAT_8019ed40 = *DAT_8019ed40 << 2;
  FUN_800f5140();
  FUN_800f4f4c();
  FUN_800f9644(0x20);
  FUN_800f4064(0xa300);
  FUN_800f8274(0x5a);
  FUN_800f9660(0x20);
  FUN_800f654c(0x13);
  FUN_800f824c(0x5c);
  FUN_800f7594(0x41);
  do {
    FUN_800f8e50(0x1a80);
    FUN_800f67fc(0x5a);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
    FUN_800f824c(0x5d);
    FUN_800f8a18(0x51);
    FUN_80136174();
    FUN_800f939c();
    FUN_801224d0();
    FUN_800f6c68(0xfa450);
    iVar1 = FUN_800f6434(0x8080);
    if (iVar1 == 0) {
      FUN_800f4248(0x7f);
      DAT_800d4216 = (ushort)*DAT_8019ed40 * 0xfa;
      FUN_800f9644(0x20);
      *DAT_8019ed44 = *DAT_8019ed58;
      FUN_800f516c();
      FUN_800f5050();
      *DAT_8019ed54 = *DAT_8019ed44;
      *DAT_8019ed40 = (&DAT_80199c4c)[*DAT_8019ed54];
      DAT_8019ed40[1] = (&DAT_80199c4d)[*DAT_8019ed54];
      *DAT_8019ed58 = *DAT_8019ed44;
      FUN_800f9660(0x20);
      FUN_800f65c8(0x4216);
      FUN_800f824c(0x45);
      FUN_800f65c8(0x4217);
      FUN_800f824c(0x46);
      FUN_800f654c(0);
      FUN_800f824c(0x47);
      uVar2 = FUN_800f3c3c(0x45);
      FUN_800f7a40(uVar2);
      FUN_800f7a68();
      uVar2 = FUN_800f3c3c(0x46);
      FUN_800f7a40(uVar2);
      FUN_800f7a68();
      uVar2 = FUN_800f3c3c(0x47);
      FUN_800f7a40(uVar2);
      FUN_800f7a68();
      uVar2 = FUN_800f3c3c(0x45);
      FUN_800f7a40(uVar2);
      FUN_800f7a68();
      uVar2 = FUN_800f3c3c(0x46);
      FUN_800f7a40(uVar2);
      FUN_800f7a68();
      uVar2 = FUN_800f3c3c(0x47);
      FUN_800f7a40(uVar2);
      FUN_800f7270(0x45);
      FUN_800f9644(0x20);
      *DAT_8019ed44 = *DAT_8019ed54;
      FUN_800f8a48(0x51);
      FUN_800f62f0(0x51);
      FUN_800f62f0(0x51);
      FUN_800f9660(0x20);
      FUN_800f6630(0x47);
      FUN_800f8a18(0x51);
      FUN_80136174();
    }
    else {
      DAT_800d4216 = (ushort)*DAT_8019ed40 * 10;
      FUN_800f9644(0x20);
      *DAT_8019ed44 = *DAT_8019ed58;
      FUN_800f516c();
      *DAT_8019ed54 = *DAT_8019ed44;
      *DAT_8019ed40 = (&DAT_80199c4c)[*DAT_8019ed54];
      DAT_8019ed40[1] = (&DAT_80199c4d)[*DAT_8019ed54];
      *DAT_8019ed58 = *DAT_8019ed44;
      FUN_800f65f0(0x4216);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f8a48(0x51);
      FUN_800f62f0(0x51);
      FUN_800f62f0(0x51);
      FUN_800f9660(0x20);
      FUN_800f654c(0);
      FUN_800f8a18(0x51);
      FUN_80136174();
    }
    FUN_801376f0();
    FUN_800f9644(0x20);
    *DAT_8019ed44 = *DAT_8019ed58;
    FUN_800f5480();
    FUN_800f80d0(0x30);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f9660(0x20);
    FUN_800f7500(DAT_8019920a);
    FUN_8011f8d4();
    FUN_800f960c();
    FUN_800f6630(0x5d);
    FUN_800f939c();
    FUN_800f9644(0x20);
    *DAT_8019ed44 = *DAT_8019ed58;
    FUN_800f516c();
    *DAT_8019ed54 = *DAT_8019ed44;
    *DAT_8019ed40 = (&DAT_80199c3c)[*DAT_8019ed54];
    DAT_8019ed40[1] = (&DAT_80199c3d)[*DAT_8019ed54];
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f9660(0x20);
    FUN_800f6630(0x5d);
    FUN_80125100();
    FUN_800f960c();
    FUN_800f63bc();
    FUN_800f5a90(8);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



