
void FUN_8017d980(int param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  pbVar7 = *(byte **)(param_3 + 4);
  iVar9 = (int)((uint)*(ushort *)(pbVar7 + 6) << 0x10) >> 0x13;
  iVar10 = ((int)((uint)*(ushort *)(pbVar7 + 6) << 0x10) >> 0x10) + (int)*(short *)(pbVar7 + 10) +
           0x10;
  if (0xf8 < iVar10) {
    iVar10 = 0xf8;
  }
  uVar2 = *(ushort *)(pbVar7 + 2);
  bVar1 = *pbVar7;
  uVar4 = ((int)((uint)uVar2 << 0x10) >> 0xe & 0x3e0U) + iVar9 * 0x20;
  while (iVar9 < iVar10 >> 3) {
    iVar12 = iVar9 + 1;
    uVar13 = uVar4 + 0x20;
    uVar11 = uVar4 & 0x3e0;
    iVar3 = (int)uVar4 >> 10;
    puVar5 = (undefined2 *)(iVar9 * 0x42 + param_1);
    iVar6 = 0x20;
    uVar8 = (uint)(bVar1 >> 3);
    do {
      iVar6 = iVar6 + -1;
      uVar4 = uVar8 & 0x1f;
      uVar8 = uVar8 + 1;
      *puVar5 = *(undefined2 *)
                 ((uVar4 | uVar11) * 2 +
                 (iVar3 + ((int)((uint)uVar2 << 0x10) >> 0x18 & 1U) & 1) * 0x800 + param_2);
      puVar5 = puVar5 + 1;
      iVar9 = iVar12;
      uVar4 = uVar13;
    } while (-1 < iVar6);
  }
  return;
}



