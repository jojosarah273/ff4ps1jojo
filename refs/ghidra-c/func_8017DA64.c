
void FUN_8017da64(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  
  puVar5 = *(ushort **)(param_3 + 4);
  iVar7 = (int)((uint)puVar5[3] << 0x10) >> 0x13;
  iVar11 = ((int)((uint)puVar5[3] << 0x10) >> 0x10) + (int)(short)puVar5[5] + 0x10;
  if (0xf8 < iVar11) {
    iVar11 = 0xf8;
  }
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = ((int)((uint)uVar2 << 0x10) >> 0xe & 0x3e0U) + iVar7 * 0x20;
  while (iVar7 < iVar11 >> 3) {
    iVar14 = iVar7 + 1;
    uVar13 = uVar3 + 0x20;
    uVar10 = ((int)uVar3 >> 9 & 2U) +
             ((int)((uint)uVar1 << 0x10) >> 0x18 & 1U) + ((int)((uint)uVar2 << 0x10) >> 0x17 & 2U);
    uVar12 = uVar3 & 0x3e0;
    puVar8 = (undefined2 *)(iVar7 * 0x42 + param_1);
    iVar9 = 0x20;
    uVar6 = (int)((uint)uVar1 << 0x10) >> 0x13 & 0x1f;
    do {
      if ((uVar10 & 1) == 0) {
        uVar3 = (int)uVar6 >> 5 & 1;
      }
      else {
        uVar3 = -((int)uVar6 >> 5 & 1U);
      }
      iVar9 = iVar9 + -1;
      uVar4 = uVar6 & 0x1f;
      uVar6 = uVar6 + 1;
      *puVar8 = *(undefined2 *)((uVar4 | uVar12) * 2 + (uVar10 + uVar3 & 3) * 0x800 + param_2);
      puVar8 = puVar8 + 1;
      iVar7 = iVar14;
      uVar3 = uVar13;
    } while (-1 < iVar9);
  }
  return;
}



