
uint FUN_800f73e0(uint param_1)

{
  uint uVar1;
  
  uVar1 = *DAT_8019ed68 & 0x7d | *DAT_8019ed60 & 0x80;
  if (*DAT_8019ed60 == 0) {
    uVar1 = uVar1 | 2;
  }
  *DAT_8019ed68 = (byte)uVar1;
  return (uVar1 & param_1 & 0xff ^ (int)param_1 >> 8) & 0xff;
}



