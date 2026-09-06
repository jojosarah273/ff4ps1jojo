
void FUN_801805f8(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  ushort uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  byte local_28 [32];
  
  iVar9 = 0;
  do {
    uVar6 = *(ushort *)(iVar9 * 2 + param_2) & 0xc000;
    if (uVar6 == 0x8000) {
      iVar3 = 0;
      do {
        iVar7 = 0;
        pbVar8 = local_28 + iVar3 * 4;
        iVar4 = 0x10000;
        do {
          pbVar5 = (byte *)(iVar9 * 4 + (7 - iVar3) * 0x80 + param_1 + iVar7);
          iVar7 = iVar4 >> 0x10;
          *pbVar8 = *pbVar5;
          pbVar8 = pbVar8 + 1;
          iVar4 = iVar4 + 0x10000;
        } while (iVar7 < 4);
        iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
      } while (iVar3 < 8);
    }
    else if (uVar6 < 0x8001) {
      if (uVar6 == 0x4000) {
        iVar3 = 0;
        iVar4 = 0;
        do {
          pbVar5 = local_28 + iVar3 * 4;
          pbVar8 = (byte *)(param_1 + iVar4 + 3 + iVar9 * 4);
          iVar4 = 0x10000;
          do {
            bVar1 = *pbVar8;
            pbVar8 = pbVar8 + -1;
            iVar7 = iVar4 >> 0x10;
            *pbVar5 = bVar1 >> 4 | bVar1 << 4;
            pbVar5 = pbVar5 + 1;
            iVar4 = iVar4 + 0x10000;
          } while (iVar7 < 4);
          iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
          iVar4 = iVar3 << 7;
        } while (iVar3 < 8);
      }
    }
    else if (uVar6 == 0xc000) {
      iVar3 = 0;
      iVar4 = 0;
      do {
        pbVar5 = local_28 + (7 - iVar3) * 4;
        pbVar8 = (byte *)(param_1 + iVar4 + 3 + iVar9 * 4);
        iVar4 = 0x10000;
        do {
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + -1;
          iVar7 = iVar4 >> 0x10;
          *pbVar5 = bVar1 >> 4 | bVar1 << 4;
          pbVar5 = pbVar5 + 1;
          iVar4 = iVar4 + 0x10000;
        } while (iVar7 < 4);
        iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
        iVar4 = iVar3 << 7;
      } while (iVar3 < 8);
    }
    iVar3 = 0;
    if ((*(ushort *)(iVar9 * 2 + param_2) & 0xc000) != 0) {
      do {
        iVar7 = 0;
        pbVar8 = local_28 + iVar3 * 4;
        iVar4 = 0x10000;
        do {
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          pbVar5 = (byte *)(iVar9 * 4 + iVar3 * 0x80 + param_1 + iVar7);
          iVar7 = iVar4 >> 0x10;
          *pbVar5 = bVar1;
          iVar4 = iVar4 + 0x10000;
        } while (iVar7 < 4);
        iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
      } while (iVar3 < 8);
    }
    iVar9 = (iVar9 + 1) * 0x10000 >> 0x10;
  } while (iVar9 < 0x20);
  iVar3 = 0x3ff;
  pbVar8 = (byte *)(param_1 + 0x7ff);
  iVar9 = 0x3fe0000;
  do {
    bVar1 = *(byte *)(param_1 + iVar3);
    iVar4 = iVar3;
    if (iVar3 < 0) {
      iVar4 = iVar3 + 0x7f;
    }
    iVar4 = (iVar3 + (iVar4 >> 7) * -0x80) * 0x10000 >> 0x10;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 3;
    }
    iVar3 = iVar9 >> 0x10;
    bVar2 = (byte)(*(ushort *)((iVar4 >> 2) * 2 + param_2) >> 6) & 0x70;
    *pbVar8 = bVar1 >> 4 | bVar2;
    pbVar8[-1] = bVar1 & 0xf | bVar2;
    pbVar8 = pbVar8 + -2;
    iVar9 = iVar9 + -0x10000;
  } while (-1 < iVar3);
  return;
}



