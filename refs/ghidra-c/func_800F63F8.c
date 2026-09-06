
void FUN_800f63f8(void)

{
  byte bVar1;
  
  bVar1 = DAT_1f8003d3 & 0x7d | DAT_1f8003c8 & 0x80;
  if (DAT_1f8003c8 == 0) {
    bVar1 = bVar1 | 2;
  }
  *DAT_8019ed68 = bVar1;
  return;
}



