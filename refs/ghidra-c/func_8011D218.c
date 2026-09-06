
void FUN_8011d218(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f9644(0x20);
  FUN_800f658c(0x1707);
  FUN_800f4264(0xff);
  FUN_800f5480();
  FUN_800f80d0(7);
  *DAT_8019ed44 = *DAT_8019ed44 << 4;
  FUN_800f4264(0x7ff);
  FUN_800f8274(0x5c);
  FUN_800f658c(0x1706);
  FUN_800f4264(0xff);
  FUN_800f5480();
  FUN_800f80d0(7);
  *DAT_8019ed44 = *DAT_8019ed44 << 4;
  FUN_800f4264(0x7ff);
  FUN_800f8274(0x5a);
  FUN_800f6558(0);
  FUN_800f9660(0x20);
  FUN_800f654c(0x40);
  FUN_800f824c(7);
  FUN_800f6564(0x1707);
  FUN_800f8188(0x70a);
  do {
    FUN_8011de40();
    FUN_800f6240(0x70a);
    FUN_800f5da0(7);
    iVar1 = FUN_800f5b8c(0x202);
  } while (iVar1 != 0);
  FUN_800f654c(0x40);
  FUN_800f824c(7);
  FUN_800f6564(0x1707);
  FUN_800f5480();
  FUN_800f8058(0x1f);
  FUN_800f824c(8);
  do {
    FUN_800f6630(8);
    FUN_800f4248(0x3f);
    FUN_800f824c(0x3e);
    FUN_800f6564(0x1706);
    FUN_800f5480();
    FUN_800f8058(0x1f);
    FUN_800f824c(0x3d);
    FUN_800f7270(0x3d);
    FUN_800f7500(0);
    do {
      FUN_800f7270(0x3d);
      FUN_800f6c68(0x7f5c71);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f8960(0xadb);
      FUN_800f8960(0xadc);
      FUN_800f8960(0xb5b);
      FUN_800f8960(0xb5c);
      *DAT_8019ed58 = *DAT_8019ed58 + 2;
      FUN_800f62bc(0x3d);
      FUN_800f5a90(0x80);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f8fb8(0x97);
    FUN_800f8fb8(0x98);
    FUN_800f654c(0x80);
    FUN_800f824c(0x95);
    FUN_800f8fb8(0x96);
    FUN_800f8fb8(0x9b);
    FUN_800f654c(0x80);
    FUN_800f824c(0x9f);
    FUN_800f6630(8);
    FUN_800f4248(0x3f);
    FUN_800f824c(0x9a);
    FUN_800f824c(0x9c);
    FUN_800f824c(0x9e);
    FUN_800f824c(0xa0);
    FUN_800f6564(0x1706);
    FUN_800f5480();
    FUN_800f8058(0x1f);
    FUN_800f4248(0x3f);
    FUN_800f5140();
    FUN_800f824c(0x99);
    FUN_800f5410();
    FUN_800f4008(0x80);
    FUN_800f824c(0x9d);
    FUN_800f6630(0x99);
    FUN_800f824c(0x97);
    FUN_800f654c(0x80);
    FUN_800f5480();
    uVar2 = FUN_800f3c3c(0x97);
    FUN_800f7f48(uVar2);
    FUN_800f824c(0x95);
    FUN_800f8f74(0x2115);
    FUN_800fcc84();
    FUN_800f8f74(0x4300);
    FUN_800f7270(0x99);
    FUN_800f8d00(0x2116);
    FUN_800f71dc(0xadb);
    FUN_800f8d00(0x4302);
    FUN_800f7270(0x95);
    FUN_800f8d00(0x4305);
    FUN_800fccbc();
    FUN_800f7270(0x9b);
    FUN_800f8d00(0x2116);
    FUN_800f8f74(0x420b);
    FUN_800f7270(0x97);
    iVar1 = FUN_800f7170(2);
    if (iVar1 == 0) {
      FUN_800f8d00(0x4305);
      FUN_800fccbc();
    }
    FUN_800f7270(0x9d);
    FUN_800f8d00(0x2116);
    FUN_800f8f74(0x420b);
    FUN_800f71dc(0xb5b);
    FUN_800f8d00(0x4302);
    FUN_800f7270(0x95);
    FUN_800f8d00(0x4305);
    FUN_800fccbc();
    FUN_800f7270(0x9f);
    FUN_800f8d00(0x2116);
    FUN_800f8f74(0x420b);
    FUN_800f7270(0x97);
    iVar1 = FUN_800f7170(2);
    if (iVar1 == 0) {
      FUN_800f8d00(0x4305);
      FUN_800fccbc();
    }
    FUN_800f62bc(8);
    FUN_800f5da0(7);
    iVar1 = FUN_800f5b8c(2);
  } while (iVar1 == 0);
  FUN_8017f9a8(&DAT_801cfd68,0x200,0,0);
  DAT_8019ee2c = 0x1100;
  return;
}



