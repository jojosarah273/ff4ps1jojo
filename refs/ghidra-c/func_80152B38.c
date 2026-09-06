
void FUN_80152b38(void)

{
  if ((*DAT_8019ed68 & 0x20) == 0) {
    *DAT_8019ed44 = *DAT_8019ed44 >> 3;
    FUN_800f7894();
    FUN_800f77cc();
  }
  else {
    *DAT_8019ed40 = *DAT_8019ed40 >> 3;
    FUN_800f7864();
    FUN_800f76e8();
  }
  return;
}



