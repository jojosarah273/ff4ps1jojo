
void FUN_80152908(void)

{
  if ((*DAT_8019ed68 & 0x20) == 0) {
    *DAT_8019ed44 = *DAT_8019ed44 << 2;
    FUN_800f516c();
    FUN_800f5050();
  }
  else {
    *DAT_8019ed40 = *DAT_8019ed40 << 2;
    FUN_800f5140();
    FUN_800f4f4c();
  }
  return;
}



