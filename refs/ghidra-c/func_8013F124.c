
void FUN_8013f124(void)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  pbVar3 = (byte *)FUN_800f3c3c(0);
  iVar4 = FUN_800f3b04(0x8000);
  *pbVar3 = 0xfd;
  pbVar3[1] = 0x6c;
  pbVar3[2] = 0x12;
  pbVar3[3] = 0;
  if (*(byte *)(iVar4 + 0x7411) != 0) {
    iVar4 = (*(byte *)(iVar4 + 0x7411) & 0x7f) * 2;
    pbVar3[6] = (byte)iVar4;
    FUN_800f5410();
    iVar4 = (uint)*pbVar3 + iVar4;
    pbVar3[4] = (byte)iVar4;
    uVar9 = 0x40 - pbVar3[6] & 0xffff;
    pbVar3[5] = pbVar3[1] + (char)((uint)iVar4 >> 8);
    pbVar3[6] = (byte)uVar9;
    pbVar3[7] = (byte)(uVar9 >> 8);
    do {
      uVar5 = FUN_800f3a70(0);
      iVar4 = FUN_800f3b04(uVar5);
      uVar5 = FUN_800f3a70(4);
      iVar6 = FUN_800f3b04(uVar5);
      uVar9 = 0;
      uVar2 = *(ushort *)(pbVar3 + 6);
      if (uVar2 != 0) {
        do {
          puVar7 = (undefined1 *)(iVar6 + uVar9);
          puVar8 = (undefined1 *)(iVar4 + uVar9);
          *puVar8 = *puVar7;
          uVar9 = uVar9 + 2 & 0xffff;
          puVar8[1] = puVar7[1];
        } while (uVar9 != uVar2);
      }
      for (; uVar9 != 0x40; uVar9 = uVar9 + 2 & 0xffff) {
        *(undefined1 *)(iVar4 + uVar9) = 0;
        ((undefined1 *)(iVar4 + uVar9))[1] = 0x22;
      }
      bVar1 = pbVar3[2];
      uVar9 = *(ushort *)(pbVar3 + 4) + 0x40 & 0xffff;
      pbVar3[5] = (byte)(uVar9 >> 8);
      pbVar3[2] = bVar1 - 1;
      pbVar3[4] = (byte)uVar9;
      uVar9 = CONCAT11(pbVar3[1],*pbVar3) + 0x40 & 0xffff;
      *pbVar3 = (byte)uVar9;
      pbVar3[1] = (byte)(uVar9 >> 8);
    } while ((byte)(bVar1 - 1) != 0);
  }
  FUN_8013efd8();
  return;
}



