
void FUN_80138920(void)

{
  (&DAT_800d0000)[*DAT_8019ed4c] = *DAT_8019ed68;
  *DAT_8019ed4c = *DAT_8019ed4c - 1;
  FUN_800f926c();
  FUN_800f9298();
  FUN_800f71dc(0x100);
  FUN_800f9330();
  FUN_800f94b8();
  FUN_800f654c(0x7e);
  FUN_800f9200();
  FUN_800f9448();
  FUN_8016ea9c();
  FUN_800f8f74(0x1a88);
  FUN_80138a6c();
  FUN_800f971c();
  FUN_800f3d48();
  FUN_80122114();
  FUN_800f94b8();
  FUN_800f9448();
  *DAT_8019ed4c = *DAT_8019ed4c + 1;
  *DAT_8019ed68 = (&DAT_800d0000)[*DAT_8019ed4c];
  return;
}



