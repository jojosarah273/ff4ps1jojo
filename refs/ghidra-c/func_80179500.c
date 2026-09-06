
void FUN_80179500(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = &DAT_80014000;
  uVar3 = 0;
  do {
    uVar1 = *puVar2;
    uVar3 = uVar3 + 1;
    *puVar2 = puVar2[1];
    puVar2[1] = uVar1;
    puVar2 = puVar2 + 2;
  } while (uVar3 < 0x17800);
  return;
}



