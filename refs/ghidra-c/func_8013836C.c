
void FUN_8013836c(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar1 = &DAT_800d1000;
  puVar2 = &DAT_801cf568;
  iVar3 = 0x7ff;
  do {
    if (param_1 == 0) {
      *puVar2 = *puVar1;
    }
    else {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (-1 < iVar3);
  return;
}



