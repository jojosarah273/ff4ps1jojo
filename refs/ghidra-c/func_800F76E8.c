
void FUN_800f76e8(void)

{
  byte bVar1;
  
  bVar1 = *DAT_8019ed68 & 0x7c | (byte)*DAT_8019ed50 & 1;
  if ((*DAT_8019ed50 & 0xfe) == 0) {
    bVar1 = bVar1 | 2;
  }
  *DAT_8019ed68 = bVar1;
  return;
}



