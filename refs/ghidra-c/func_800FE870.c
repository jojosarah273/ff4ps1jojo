
void FUN_800fe870(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0x1fc;
  puVar1 = &DAT_800d04fd;
  do {
    *puVar1 = 0xf0;
    iVar2 = iVar2 + -4;
    puVar1 = puVar1 + -4;
  } while (-1 < iVar2);
  iVar2 = 0x1f;
  puVar1 = &DAT_800d051f;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  return;
}



