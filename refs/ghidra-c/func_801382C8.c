
void FUN_801382c8(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  FUN_800f6564(0x1a3c);
  FUN_800f5ccc();
  iVar3 = 0;
  puVar1 = &DAT_8019f7e8;
  puVar2 = &DAT_800d2200 + (*DAT_8019ed40 & 0x1f) * 0x800;
  do {
    if (param_1 == 0) {
      *puVar1 = *puVar2;
    }
    else {
      *puVar2 = *puVar1;
      (&DAT_800d1000)[iVar3] = *puVar1;
    }
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar3 < 0x800);
  return;
}



