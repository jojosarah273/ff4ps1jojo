
void FUN_801668ec(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_800f3b04(0x2000);
  iVar2 = FUN_800f3b04(0x8000);
  uVar3 = 0;
  do {
    iVar4 = uVar3 + iVar2;
    iVar5 = uVar3 + iVar1;
    uVar3 = uVar3 + 1 & 0xffff;
    *(undefined1 *)(iVar4 + 0x7123) = *(undefined1 *)(iVar5 + 0x9b5);
    *(undefined1 *)(iVar5 + 0x9b5) = *(undefined1 *)(iVar4 + 0x712b);
  } while (uVar3 != 8);
  return;
}



