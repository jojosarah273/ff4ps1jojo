
void FUN_800f5574(byte param_1)

{
  byte bVar1;
  
  bVar1 = *DAT_8019ed68 & 0x7c;
  if (*DAT_8019ed40 == param_1) {
    bVar1 = bVar1 | 3;
  }
  else if (*DAT_8019ed40 < param_1) {
    bVar1 = bVar1 | 0x80;
  }
  else {
    bVar1 = bVar1 | 1;
  }
  *DAT_8019ed68 = bVar1;
  return;
}



