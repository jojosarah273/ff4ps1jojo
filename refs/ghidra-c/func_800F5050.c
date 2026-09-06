
void FUN_800f5050(void)

{
  byte bVar1;
  
  bVar1 = *DAT_8019ed68 & 0x7c | 1;
  if ((*DAT_8019ed50 & 0x10000) == 0) {
    bVar1 = *DAT_8019ed68 & 0x7c;
  }
  if ((*DAT_8019ed50 & 0x8000) != 0) {
    bVar1 = bVar1 | 0x80;
  }
  if ((short)*DAT_8019ed50 == 0) {
    bVar1 = bVar1 | 2;
  }
  *DAT_8019ed68 = bVar1;
  return;
}



