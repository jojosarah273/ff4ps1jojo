
void FUN_80189698(void)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0x3f;
  puVar1 = (undefined2 *)(DAT_8019ed28 + 0x3f0);
  do {
    *puVar1 = 0xffff;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -8;
  } while (-1 < iVar2);
  return;
}



