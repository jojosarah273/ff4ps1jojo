
void FUN_80180414(void)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  DAT_8019ee9a = 0;
  iVar2 = 0;
  do {
    do {
      iVar4 = 0;
      iVar5 = 0x10000;
      do {
        iVar3 = DAT_8019ee9a * 4 + iVar4;
        puVar1 = (undefined1 *)(DAT_8019ee9a * 4 + (7 - iVar2) * 0x80 + DAT_8019eea8 + iVar4);
        iVar4 = iVar5 >> 0x10;
        (&DAT_80012800)[iVar3 + iVar2 * 0x80] = *puVar1;
        iVar5 = iVar5 + 0x10000;
      } while (iVar4 < 4);
      iVar2 = (iVar2 + 1) * 0x10000 >> 0x10;
    } while (iVar2 < 8);
    DAT_8019ee9a = DAT_8019ee9a + 1;
    iVar2 = 0;
  } while (DAT_8019ee9a < 0x20);
  DAT_8019ee90 = DAT_8019ee9e + 0x80;
  DAT_8019ee92 = DAT_8019eea0 + DAT_8019ee9c * 8;
  LoadImage((RECT *)&DAT_8019ee90,(u_long *)&DAT_80012800);
  return;
}



