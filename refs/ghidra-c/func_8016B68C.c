
void FUN_8016b68c(void)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_800f3b04(0x300);
  uVar3 = 0;
  do {
    puVar2 = (undefined1 *)(iVar1 + uVar3);
    uVar3 = uVar3 + 1 & 0xffff;
    *puVar2 = 0xf0;
  } while (uVar3 != 0x118);
  return;
}



