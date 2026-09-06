
uint FUN_800f6180(uint param_1)

{
  uint uVar1;
  
  uVar1 = *DAT_8019ed68 & 0x7d;
  if ((*DAT_8019ed50 & 0x8000) != 0) {
    uVar1 = uVar1 | 0x80;
  }
  if ((short)*DAT_8019ed50 == 0) {
    uVar1 = uVar1 | 2;
  }
  *DAT_8019ed68 = (byte)uVar1;
  return (uVar1 & param_1 & 0xff ^ (int)param_1 >> 8) & 0xff;
}



