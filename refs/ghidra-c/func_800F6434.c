
uint FUN_800f6434(uint param_1)

{
  uint uVar1;
  
  uVar1 = DAT_1f8003d3 & 0x7d | DAT_1f8003c8 & 0x80;
  if (DAT_1f8003c8 == 0) {
    uVar1 = uVar1 | 2;
  }
  *DAT_8019ed68 = (char)uVar1;
  return (uVar1 & param_1 & 0xff ^ (int)param_1 >> 8) & 0xff;
}



