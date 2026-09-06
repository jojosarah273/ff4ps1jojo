
void FUN_80148c28(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined *)0x800d0040;
  iVar2 = 0x40;
  do {
    puVar1[0x300] = 0xf0;
    iVar3 = iVar2 + 1;
    puVar1 = &DAT_800d0001 + iVar2;
    iVar2 = iVar3;
  } while (iVar3 < 0x160);
  FUN_800f8f74(0xf42b);
  return;
}



