
void FUN_800f77cc(void)

{
  byte bVar1;
  
  bVar1 = *DAT_8019ed68 & 0x7c | (byte)*DAT_8019ed50 & 1;
  if ((*DAT_8019ed50 & 0xfffe) == 0) {
    bVar1 = bVar1 | 2;
  }
  *DAT_8019ed68 = bVar1;
  return;
}



