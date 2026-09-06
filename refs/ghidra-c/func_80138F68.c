
void FUN_80138f68(void)

{
  int iVar1;
  
  (&DAT_800d0000)[*DAT_8019ed4c] = *DAT_8019ed68;
  *DAT_8019ed4c = *DAT_8019ed4c - 1;
  FUN_800f9644(0x20);
  FUN_800f922c();
  FUN_800f9660(0x20);
  FUN_800f926c();
  FUN_800f654c(0);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f6564(0x1e0);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    DAT_801a021e = 0x5a;
    DAT_801a0222 = DAT_801a0222 + -0x5a;
    FUN_800f8f74(0x1e0);
  }
  else {
    FUN_800f654c(0x1f);
    FUN_800f8188(0x212c);
    FUN_800f6240(0x1e0);
    DAT_801a0222 = 0xcb;
    FUN_800f6564(0x19a);
    FUN_800f3d48();
    FUN_800f6564(0x199);
    DAT_8019ee6e = *DAT_8019ed44;
  }
  FUN_800f9448();
  FUN_800f9644(0x20);
  FUN_800f9410();
  *DAT_8019ed4c = *DAT_8019ed4c + 1;
  *DAT_8019ed68 = (&DAT_800d0000)[*DAT_8019ed4c];
  return;
}



