
uint FUN_800f7ac8(uint param_1)

{
  uint uVar1;
  
  uVar1 = *DAT_8019ed68 & 0x7c;
  if ((*DAT_8019ed50 & 0x100) != 0) {
    uVar1 = uVar1 | 1;
  }
  uVar1 = uVar1 | (byte)*DAT_8019ed50 & 0x80;
  if ((byte)*DAT_8019ed50 == 0) {
    uVar1 = uVar1 | 2;
  }
  *DAT_8019ed68 = (byte)uVar1;
  return (uVar1 & param_1 & 0xff ^ (int)param_1 >> 8) & 0xff;
}



