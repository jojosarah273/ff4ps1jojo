
void FUN_8016c858(void)

{
  int iVar1;
  
  FUN_800f8f74(0x2101);
  FUN_800f8f74(0x2102);
  FUN_800f8fb8(0x50);
  FUN_800f6564(0x2005);
  FUN_800f4248(1);
  FUN_800f8188(0x2100);
  FUN_800f6564(0x2001);
  FUN_800f4248(1);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_8016c280();
    FUN_800f6240(0x2101);
  }
  FUN_800f6564(0x2003);
  FUN_800f4248(1);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_8016c624();
    FUN_800f6240(0x2102);
  }
  FUN_8016bfe8();
  FUN_800f6564(0x2101);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_8016c280();
  }
  FUN_800f6564(0x2102);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_8016c624();
  }
  FUN_800f6564(0x2007);
  FUN_800f4248(1);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_8016c0a8();
    FUN_8016c128();
  }
  else {
    FUN_8016c128();
    FUN_8016c0a8();
  }
  FUN_800f6564(0x2100);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_8016aacc();
  }
  else {
    FUN_8016aa84();
  }
  FUN_8016b470();
  FUN_800f71dc(0);
  FUN_800f7500(0xffff);
  FUN_8016be1c();
  FUN_800f71dc(2);
  FUN_800f7500(0xffff);
  FUN_8016be1c();
  FUN_800f6564(0x2100);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6c68(0x13e3b1);
  FUN_800f824c(0x28);
  FUN_800f6630(0x4a);
  FUN_800f4370(0x28);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_800f71dc(4);
    FUN_800f7500(0xffff);
    FUN_8016be1c();
    FUN_800f71dc(6);
    FUN_800f7500(0xffff);
    FUN_8016be1c();
    FUN_800f71dc(8);
    FUN_800f7500(0xffff);
    FUN_8016be1c();
  }
  return;
}



