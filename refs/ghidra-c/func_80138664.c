
void FUN_80138664(void)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0;
  do {
    iVar3 = 0;
    iVar4 = iVar1 + 1;
    puVar2 = &DAT_801cfd68 + iVar1 * 0x20 + 0x7834;
    do {
      iVar3 = iVar3 + 1;
      *puVar2 = *puVar2 & 0xe3ff | 0x400;
      puVar2 = puVar2 + 1;
    } while (iVar3 < 10);
    iVar1 = iVar4;
  } while (iVar4 < 8);
  return;
}



