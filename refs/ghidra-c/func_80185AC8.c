
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80185ac8(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  bVar2 = DAT_800d420c;
  uVar10 = 0;
  if (DAT_800d0203 == '\x02') {
    if ((DAT_800d420c & 1) != 0) {
      uVar9 = 0;
      pbVar4 = (byte *)FUN_800f3b9c((int)_DAT_800d4302 | (uint)DAT_800d4304 << 0x10,0);
      bVar1 = *pbVar4;
      uVar10 = bVar1 & 0x7f;
      iVar5 = FUN_800f3b9c((uint)CONCAT12(DAT_800d4307,*(undefined2 *)(pbVar4 + 1)),0);
      if ((bVar1 & 0x7f) != 0) {
        do {
          iVar6 = uVar9 * 4;
          pbVar7 = (byte *)(iVar6 + iVar5);
          bVar1 = *pbVar7;
          *(ushort *)(iVar6 + 0x1f800000) = (ushort)bVar1;
          *(ushort *)(iVar6 + 0x1f800000) = CONCAT11(pbVar7[1],bVar1);
          bVar1 = pbVar7[2];
          *(ushort *)((int)&DAT_1f800000 + iVar6 + 2) = (ushort)bVar1;
          uVar9 = uVar9 + 1 & 0xffff;
          *(ushort *)((int)&DAT_1f800000 + iVar6 + 2) = CONCAT11(pbVar7[3],bVar1);
        } while (uVar9 < uVar10);
      }
      uVar10 = uVar10 + (pbVar4[3] & 0x7f);
      iVar5 = FUN_800f3b9c((uint)CONCAT12(DAT_800d4307,*(undefined2 *)(pbVar4 + 4)),0);
      uVar8 = 0;
      for (; uVar9 < uVar10; uVar9 = uVar9 + 1 & 0xffff) {
        iVar6 = uVar9 * 4;
        pbVar4 = (byte *)(uVar8 * 4 + iVar5);
        bVar1 = *pbVar4;
        *(ushort *)(iVar6 + 0x1f800000) = (ushort)bVar1;
        *(ushort *)(iVar6 + 0x1f800000) = CONCAT11(pbVar4[1],bVar1);
        bVar1 = pbVar4[2];
        *(ushort *)((int)&DAT_1f800000 + iVar6 + 2) = (ushort)bVar1;
        uVar8 = uVar8 + 1 & 0xffff;
        *(ushort *)((int)&DAT_1f800000 + iVar6 + 2) = CONCAT11(pbVar4[3],bVar1);
      }
      FUN_80185764(0x1f800000,0,0);
    }
    if ((bVar2 & 2) != 0) {
      pbVar4 = (byte *)FUN_800f3b9c((int)DAT_800d4312 | (uint)DAT_800d4314 << 0x10,0);
      uVar11 = *pbVar4 & 0x7f;
      DAT_8019eeb4 = FUN_800f3b9c((uint)CONCAT12(DAT_800d4317,*(undefined2 *)(pbVar4 + 1)),0);
      uVar10 = uVar11 + (pbVar4[3] & 0x7f);
      iVar5 = FUN_800f3b9c((uint)CONCAT12(DAT_800d4317,*(undefined2 *)(pbVar4 + 4)),0);
      uVar8 = 0;
      for (uVar9 = uVar11; uVar9 < uVar10; uVar9 = uVar9 + 1 & 0xffff) {
        iVar6 = uVar9 * 4;
        pbVar4 = (byte *)(uVar8 * 4 + iVar5);
        bVar1 = *pbVar4;
        *(ushort *)(iVar6 + 0x1f800000) = (ushort)bVar1;
        *(ushort *)(iVar6 + 0x1f800000) = CONCAT11(pbVar4[1],bVar1);
        bVar1 = pbVar4[2];
        *(ushort *)((int)&DAT_1f800000 + iVar6 + 2) = (ushort)bVar1;
        uVar8 = uVar8 + 1 & 0xffff;
        *(ushort *)((int)&DAT_1f800000 + iVar6 + 2) = CONCAT11(pbVar4[3],bVar1);
      }
      FUN_80185764(0x1f800000,1,uVar11);
    }
    if ((bVar2 & 4) != 0) {
      uVar9 = 0;
      pbVar4 = (byte *)FUN_800f3b9c((int)DAT_800d4322 | (uint)DAT_800d4324 << 0x10,0);
      bVar2 = *pbVar4;
      iVar5 = FUN_800f3b9c((uint)CONCAT12(DAT_800d4327,*(undefined2 *)(pbVar4 + 1)),0);
      if (uVar10 != 0) {
        do {
          iVar6 = uVar9 * 4;
          pbVar7 = (byte *)(iVar6 + iVar5);
          bVar1 = *pbVar7;
          *(ushort *)(iVar6 + 0x1f800000) = (ushort)bVar1;
          *(ushort *)(iVar6 + 0x1f800000) = CONCAT11(pbVar7[1],bVar1);
          bVar1 = pbVar7[2];
          *(ushort *)((int)&DAT_1f800000 + iVar6 + 2) = (ushort)bVar1;
          uVar9 = uVar9 + 1 & 0xffff;
          *(ushort *)((int)&DAT_1f800000 + iVar6 + 2) = CONCAT11(pbVar7[3],bVar1);
        } while (uVar9 < uVar10);
      }
      bVar1 = pbVar4[3];
      iVar5 = FUN_800f3b9c((uint)CONCAT12(DAT_800d4327,*(undefined2 *)(pbVar4 + 4)),0);
      uVar10 = 0;
      for (; uVar9 < (bVar2 & 0x7f) + (bVar1 & 0x7f); uVar9 = uVar9 + 1 & 0xffff) {
        iVar6 = uVar9 * 4;
        pbVar4 = (byte *)(uVar10 * 4 + iVar5);
        bVar3 = *pbVar4;
        *(ushort *)(iVar6 + 0x1f800000) = (ushort)bVar3;
        *(ushort *)(iVar6 + 0x1f800000) = CONCAT11(pbVar4[1],bVar3);
        bVar3 = pbVar4[2];
        *(ushort *)((int)&DAT_1f800000 + iVar6 + 2) = (ushort)bVar3;
        uVar10 = uVar10 + 1 & 0xffff;
        *(ushort *)((int)&DAT_1f800000 + iVar6 + 2) = CONCAT11(pbVar4[3],bVar3);
      }
      FUN_80185764(0x1f800000,2,0);
    }
  }
  return;
}



