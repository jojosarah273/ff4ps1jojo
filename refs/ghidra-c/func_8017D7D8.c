
void FUN_8017d7d8(int param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  pbVar4 = *(byte **)(param_3 + 4);
  iVar6 = (int)((uint)*(ushort *)(pbVar4 + 6) << 0x10) >> 0x13;
  iVar9 = ((int)((uint)*(ushort *)(pbVar4 + 6) << 0x10) >> 0x10) + (int)*(short *)(pbVar4 + 10) +
          0x10;
  if (0xf8 < iVar9) {
    iVar9 = 0xf8;
  }
  bVar1 = *pbVar4;
  uVar2 = ((int)*(short *)(pbVar4 + 2) & 0xf8U) * 4 + iVar6 * 0x20;
  while (iVar6 < iVar9 >> 3) {
    iVar10 = iVar6 + 1;
    uVar11 = uVar2 + 0x20;
    uVar8 = uVar2 & 0x3e0;
    puVar3 = (undefined2 *)(iVar6 * 0x42 + param_1);
    iVar7 = 0x20;
    uVar5 = (uint)(bVar1 >> 3);
    do {
      iVar7 = iVar7 + -1;
      uVar2 = uVar5 & 0x1f;
      uVar5 = uVar5 + 1;
      *puVar3 = *(undefined2 *)((uVar2 | uVar8) * 2 + param_2);
      puVar3 = puVar3 + 1;
      iVar6 = iVar10;
      uVar2 = uVar11;
    } while (-1 < iVar7);
  }
  return;
}



