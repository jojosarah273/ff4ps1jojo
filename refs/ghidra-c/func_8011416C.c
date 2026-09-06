
void FUN_8011416c(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 7;
  puVar1 = &DAT_800d0507;
  do {
    *puVar1 = 0xaa;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  return;
}



