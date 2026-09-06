
void FUN_800f7cc8(byte *param_1)

{
  *DAT_8019ed50 = (uint)*param_1 + (*DAT_8019ed68 & 1) * 0x100;
  *param_1 = (byte)(*DAT_8019ed50 / 2);
  return;
}



