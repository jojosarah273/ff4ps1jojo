
void FUN_8015aacc(void)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  
  iVar3 = FUN_800f3c3c(0);
  iVar4 = FUN_800f3b04(0x2000);
  iVar5 = FUN_800f3b9c(0x138000,0);
  sVar6 = 4;
  if (*(byte *)(iVar4 + 0x197b) == 6) {
LAB_8015abb8:
    uVar2 = 0;
  }
  else {
    bVar1 = *(byte *)((uint)*(byte *)(iVar4 + 0x197b) + iVar5 + 0x7e89);
    if (bVar1 == 0) {
      FUN_8015a5b8();
    }
    if ((bVar1 & 0x80) != 0) {
      *(byte *)(iVar4 + 0x193f) = bVar1 & 0x7f;
      *(undefined1 *)(iVar4 + 0x1940) = 0;
      *(undefined1 *)(iVar4 + 0x193d) = *(undefined1 *)(iVar3 + 0xa9);
      *(undefined1 *)(iVar4 + 0x193e) = *(undefined1 *)(iVar3 + 0xaa);
      FUN_8015236c();
      *(undefined1 *)(iVar3 + 0xa9) = *(undefined1 *)(iVar4 + 0x1941);
      *(undefined1 *)(iVar3 + 0xaa) = *(undefined1 *)(iVar4 + 0x1942);
      goto LAB_8015abc4;
    }
    *(byte *)(iVar4 + 0x1947) = bVar1;
    *(undefined1 *)(iVar4 + 0x1948) = 0;
    *(undefined1 *)(iVar4 + 0x1945) = *(undefined1 *)(iVar3 + 0xa9);
    *(undefined1 *)(iVar4 + 0x1946) = *(undefined1 *)(iVar3 + 0xaa);
    FUN_8015254c();
    sVar6 = *(short *)(iVar4 + 0x1949);
    uVar2 = (undefined1)((ushort)sVar6 >> 8);
    if (sVar6 == 0) {
      sVar6 = 1;
      goto LAB_8015abb8;
    }
  }
  *(char *)(iVar3 + 0xa9) = (char)sVar6;
  *(undefined1 *)(iVar3 + 0xaa) = uVar2;
LAB_8015abc4:
  FUN_8015abec();
  FUN_8015a56c();
  return;
}



