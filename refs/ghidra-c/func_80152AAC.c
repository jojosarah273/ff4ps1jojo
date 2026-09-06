
void FUN_80152aac(void)

{
  if ((*DAT_8019ed68 & 0x20) == 0) {
    *DAT_8019ed44 = *DAT_8019ed44 >> 4;
    FUN_800f7894();
    FUN_800f77cc();
  }
  else {
    *DAT_8019ed40 = *DAT_8019ed40 >> 4;
    FUN_800f7864();
    FUN_800f76e8();
  }
  return;
}



