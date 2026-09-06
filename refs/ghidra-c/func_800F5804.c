
void FUN_800f5804(byte *param_1)

{
  *DAT_8019ed50 = (uint)*param_1;
  *DAT_8019ed50 = *DAT_8019ed50 | (uint)param_1[1] << 8;
  *DAT_8019ed68 = *DAT_8019ed68 & 0x7c;
  if (*DAT_8019ed58 == (ushort)*DAT_8019ed50) {
    *DAT_8019ed68 = *DAT_8019ed68 | 3;
    return;
  }
  if (*DAT_8019ed58 < (ushort)*DAT_8019ed50) {
    *DAT_8019ed68 = *DAT_8019ed68 | 0x80;
    return;
  }
  *DAT_8019ed68 = *DAT_8019ed68 | 1;
  return;
}



