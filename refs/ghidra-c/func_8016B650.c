
void FUN_8016b650(void)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  iVar1 = FUN_800f3b04(0x2ff);
  uVar3 = 0x220;
  do {
    puVar2 = (undefined1 *)(iVar1 + uVar3);
    uVar3 = uVar3 - 1 & 0xffff;
    *puVar2 = 0;
  } while (uVar3 != 0);
  return;
}



