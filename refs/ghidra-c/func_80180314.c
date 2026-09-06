
void FUN_80180314(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  DAT_8019ee9a = 0;
  iVar2 = 0;
  do {
    do {
      iVar5 = 0;
      iVar6 = 0x10000;
      do {
        iVar3 = (DAT_8019eea8 + iVar2 * 0x80 + DAT_8019ee9a * 4) - iVar5;
        iVar4 = DAT_8019ee9a * 4 + iVar5;
        iVar5 = iVar6 >> 0x10;
        bVar1 = *(byte *)(iVar3 + 3);
        (&DAT_80012000)[iVar4 + (7 - iVar2) * 0x80] = bVar1 << 4 | bVar1 >> 4;
        iVar6 = iVar6 + 0x10000;
      } while (iVar5 < 4);
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < 8);
    DAT_8019ee9a = DAT_8019ee9a + 1;
    iVar2 = 0;
  } while (DAT_8019ee9a < 0x20);
  DAT_8019ee90 = DAT_8019ee9e + 0xc0;
  DAT_8019ee92 = DAT_8019eea0 + DAT_8019ee9c * 8;
  LoadImage((RECT *)&DAT_8019ee90,(u_long *)&DAT_80012000);
  return;
}



