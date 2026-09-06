
void FUN_801383b8(void)

{
  bool bVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 1;
  do {
    iVar3 = 0xb;
    puVar2 = &DAT_801cfd68 + iVar4 * 0x20 + 0x6953;
    do {
      *puVar2 = 0x2000;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 1;
    } while (-1 < iVar3);
    bVar1 = iVar5 < 4;
    iVar4 = iVar5;
    iVar5 = iVar5 + 1;
  } while (bVar1);
  return;
}



