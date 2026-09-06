
void FUN_8015abec(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_800f3c3c(0);
  iVar3 = FUN_800f3b04(0x2000);
  *(undefined1 *)(iVar3 + 0x193d) = *(undefined1 *)(iVar2 + 0xa9);
  uVar1 = *(undefined1 *)(iVar2 + 0xaa);
  *(undefined1 *)(iVar3 + 0x193f) = *(undefined1 *)(iVar3 + 0x1979);
  *(undefined1 *)(iVar3 + 0x1940) = *(undefined1 *)(iVar3 + 0x197a);
  *(undefined1 *)(iVar3 + 0x193e) = uVar1;
  FUN_8015236c();
  *(undefined1 *)(iVar3 + 0x1947) = 0x10;
  *(undefined1 *)(iVar3 + 0x1948) = 0;
  *(undefined1 *)(iVar3 + 0x1945) = *(undefined1 *)(iVar3 + 0x1941);
  *(undefined1 *)(iVar3 + 0x1946) = *(undefined1 *)(iVar3 + 0x1942);
  FUN_8015254c();
  *(undefined1 *)(iVar2 + 0xab) = *(undefined1 *)(iVar3 + 0x1949);
  *(undefined1 *)(iVar2 + 0xac) = *(undefined1 *)(iVar3 + 0x194a);
  return;
}



