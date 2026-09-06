
uint FUN_800f7494(uint param_1)

{
  uint uVar1;
  
  uVar1 = *DAT_8019ed68 & 0x7d | *(byte *)(DAT_8019ed60 + 1) & 0x80;
  if (*DAT_8019ed58 == 0) {
    uVar1 = uVar1 | 2;
  }
  *DAT_8019ed68 = (byte)uVar1;
  return (uVar1 & param_1 & 0xff ^ (int)param_1 >> 8) & 0xff;
}



