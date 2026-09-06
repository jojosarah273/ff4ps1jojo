
void FUN_800fda9c(uint param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined1 *puVar4;
  int iVar5;
  
  iVar5 = 7;
  puVar4 = &DAT_800e7c00 + *DAT_8019ed54;
  do {
    iVar5 = iVar5 + -1;
    puVar3 = &DAT_801cfd68 + (param_1 & 0xffff);
    param_1 = (param_1 & 0xffff) + 1;
    uVar2 = *puVar3;
    *puVar3 = (ushort)(byte)uVar2;
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    *puVar3 = CONCAT11(uVar1,(byte)uVar2);
  } while (-1 < iVar5);
  return;
}



