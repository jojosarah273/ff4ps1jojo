
void FUN_8017d898(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  puVar6 = *(ushort **)(param_3 + 4);
  iVar4 = (int)((uint)puVar6[3] << 0x10) >> 0x13;
  iVar9 = ((int)((uint)puVar6[3] << 0x10) >> 0x10) + (int)(short)puVar6[5] + 0x10;
  if (0xf8 < iVar9) {
    iVar9 = 0xf8;
  }
  uVar1 = *puVar6;
  uVar2 = ((int)(short)puVar6[1] & 0xf8U) * 4 + iVar4 * 0x20;
  while (iVar4 < iVar9 >> 3) {
    iVar11 = iVar4 + 1;
    uVar12 = uVar2 + 0x20;
    uVar10 = uVar2 & 0x3e0;
    puVar5 = (undefined2 *)(iVar4 * 0x42 + param_1);
    iVar8 = 0x20;
    uVar7 = (int)((uint)uVar1 << 0x10) >> 0x13 & 0x1f;
    do {
      iVar8 = iVar8 + -1;
      uVar2 = (int)uVar7 >> 5;
      uVar3 = uVar7 & 0x1f;
      uVar7 = uVar7 + 1;
      *puVar5 = *(undefined2 *)
                 ((uVar3 | uVar10) * 2 +
                 (((int)((uint)uVar1 << 0x10) >> 0x18 & 1U) + (uVar2 & 1) & 1) * 0x800 + param_2);
      puVar5 = puVar5 + 1;
      iVar4 = iVar11;
      uVar2 = uVar12;
    } while (-1 < iVar8);
  }
  return;
}



