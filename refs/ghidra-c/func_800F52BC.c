
void FUN_800f52bc(uint param_1)

{
  byte bVar1;
  
  *DAT_8019ed50 = param_1 & 0xff;
  *DAT_8019ed68 = *DAT_8019ed68 & 0x3d;
  *DAT_8019ed68 = *DAT_8019ed68 | (byte)*DAT_8019ed50 & 0xc0;
  *DAT_8019ed50 = *DAT_8019ed50 & (uint)*DAT_8019ed40;
  bVar1 = *DAT_8019ed68;
  if ((byte)*DAT_8019ed50 == 0) {
    bVar1 = bVar1 | 2;
  }
  *DAT_8019ed68 = bVar1;
  return;
}



