
void FUN_80148cac(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  FUN_800f9330();
  FUN_800f6240(0xf42b);
  iVar2 = 0x11;
  puVar1 = &DAT_800d0515;
  do {
    *puVar1 = 0xaa;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  FUN_80148c28();
  FUN_800f95a0();
  return;
}



