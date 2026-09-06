
void FUN_80170198(void)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  
  iVar5 = FUN_800f3c3c(0);
  iVar6 = FUN_800f3b04(0);
  iVar7 = FUN_800f3b04(0x1000);
  iVar8 = FUN_800f3b9c(0x1000,0);
  uVar3 = *DAT_8019ed58;
  uVar4 = *DAT_8019ed54;
  pbVar9 = (byte *)(iVar6 + (uint)uVar3);
  if ((*(byte *)(iVar7 + 0x6b8) & *(byte *)(iVar5 + 0x40)) == 0) {
    bVar2 = pbVar9[2] | *pbVar9;
  }
  else {
    uVar1 = *(undefined1 *)(iVar8 + 0x822);
    *(undefined1 *)(iVar5 + 0x43) = uVar1;
    uVar1 = *(undefined1 *)((uint)CONCAT11(*(undefined1 *)(iVar5 + 0x44),uVar1) + iVar7 + 0x6b9);
    *(undefined1 *)(iVar5 + 0x43) = uVar1;
    bVar2 = *(byte *)(iVar6 + ((uint)uVar3 + (uint)CONCAT11(*(undefined1 *)(iVar5 + 0x44),uVar1) &
                              0xffff));
  }
  pbVar9 = (byte *)((uint)uVar4 + iVar5);
  if ((bVar2 == 0) || (bVar2 != pbVar9[4])) {
    pbVar9[4] = bVar2;
    *pbVar9 = bVar2;
    pbVar9[8] = 0x18;
  }
  else {
    bVar2 = pbVar9[8];
    pbVar9[8] = bVar2 - 1;
    if ((byte)(bVar2 - 1) == 0) {
      pbVar9[8] = 3;
      *pbVar9 = pbVar9[4];
    }
    else {
      *pbVar9 = 0;
    }
  }
  return;
}



