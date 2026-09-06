
void FUN_800f5b4c(void)

{
  byte bVar1;
  
  bVar1 = *DAT_8019ed68 & 0x7d | *DAT_8019ed50 & 0x80;
  if (*DAT_8019ed50 == 0) {
    bVar1 = bVar1 | 2;
  }
  *DAT_8019ed68 = bVar1;
  return;
}



