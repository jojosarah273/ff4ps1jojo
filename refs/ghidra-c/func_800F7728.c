
uint FUN_800f7728(uint param_1)

{
  uint uVar1;
  
  uVar1 = *DAT_8019ed68 & 0x7c | (byte)*DAT_8019ed50 & 1;
  if ((*DAT_8019ed50 & 0xfe) == 0) {
    uVar1 = uVar1 | 2;
  }
  *DAT_8019ed68 = (byte)uVar1;
  return (uVar1 & param_1 & 0xff ^ (int)param_1 >> 8) & 0xff;
}



