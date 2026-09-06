
void FUN_8016eedc(void)

{
  FUN_800f9644(0x10);
  FUN_800f9660(0x20);
  (&DAT_800d0000)[*DAT_8019ed4c] = *DAT_8019ed68;
  *DAT_8019ed4c = *DAT_8019ed4c - 1;
  FUN_800f926c();
  FUN_800f9298();
  FUN_800f654c(0);
  FUN_800f81e8(100);
  FUN_800f654c(0x50);
  FUN_800f81e8(0x6a);
  FUN_800f654c(0x13);
  FUN_800f81e8(0x6b);
  FUN_8016ef88();
  return;
}



