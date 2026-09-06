
void FUN_800f7a68(void)

{
  byte bVar1;
  
  if ((*DAT_8019ed50 & 0x100) == 0) {
    bVar1 = *DAT_8019ed68 & 0x7c;
  }
  else {
    bVar1 = *DAT_8019ed68 & 0x7c | 1;
  }
  bVar1 = bVar1 | (byte)*DAT_8019ed50 & 0x80;
  if ((byte)*DAT_8019ed50 == 0) {
    bVar1 = bVar1 | 2;
  }
  *DAT_8019ed68 = bVar1;
  return;
}



