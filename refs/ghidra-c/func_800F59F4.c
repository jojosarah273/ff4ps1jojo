
void FUN_800f59f4(uint param_1)

{
  *DAT_8019ed50 = param_1 & 0xff;
  *DAT_8019ed68 = *DAT_8019ed68 & 0x7c;
  if (*DAT_8019ed60 == (byte)*DAT_8019ed50) {
    *DAT_8019ed68 = *DAT_8019ed68 | 3;
    return;
  }
  if (*DAT_8019ed60 < (byte)*DAT_8019ed50) {
    *DAT_8019ed68 = *DAT_8019ed68 | 0x80;
    return;
  }
  *DAT_8019ed68 = *DAT_8019ed68 | 1;
  return;
}



