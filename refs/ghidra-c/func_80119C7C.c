
void FUN_80119c7c(void)

{
  undefined3 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar5 = &DAT_8019efa8;
  puVar3 = &DAT_800d0bde;
  iVar4 = 0x3f;
  do {
    puVar1 = (undefined3 *)(puVar3 + -3);
    uVar2 = *puVar3;
    puVar3 = puVar3 + 4;
    iVar4 = iVar4 + -1;
    *puVar5 = CONCAT13(uVar2,*puVar1);
    puVar5 = puVar5 + 1;
  } while (-1 < iVar4);
  iVar4 = 0x40;
  puVar5 = &DAT_8019f0a8;
  puVar3 = &DAT_800d0dde;
  do {
    puVar1 = (undefined3 *)(puVar3 + -3);
    uVar2 = *puVar3;
    puVar3 = puVar3 + 4;
    iVar4 = iVar4 + 1;
    *puVar5 = CONCAT13(uVar2,*puVar1);
    puVar5 = puVar5 + 1;
  } while (iVar4 < 0x80);
  FUN_8017f5c0(&DAT_8019efa8);
  DAT_8019ed04 = 1;
  return;
}



