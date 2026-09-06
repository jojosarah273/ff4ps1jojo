
uint FUN_800f7170(uint param_1)

{
  uint uVar1;
  
  uVar1 = *DAT_8019ed68 & 0x7d | *(byte *)(DAT_8019ed5c + 1) & 0x80;
  if (*DAT_8019ed54 == 0) {
    uVar1 = uVar1 | 2;
  }
  *DAT_8019ed68 = (byte)uVar1;
  return (uVar1 & param_1 & 0xff ^ (int)param_1 >> 8) & 0xff;
}



