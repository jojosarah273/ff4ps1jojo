
void FUN_8010a5a0(void)

{
  byte *pbVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_800f6630(0xe9);
  iVar2 = FUN_800f6434(0x202);
  if (iVar2 != 0) {
    FUN_800f8fb8(0xe9);
    DAT_8019ee6c = 0;
    FUN_800f654c(0x80);
    FUN_800f8188(0x2115);
    DAT_801d4df0 = 0x2016;
    iVar2 = 0x10000;
    uVar6 = 0x2845;
    do {
      uVar5 = uVar6 + 1 & 0xffff;
      *DAT_8019ed40 = 0x17;
      pbVar1 = DAT_8019ed40;
      puVar3 = &DAT_801cfd68 + uVar6;
      *puVar3 = (ushort)*DAT_8019ed40;
      *pbVar1 = 0x20;
      iVar4 = iVar2 >> 0x10;
      *puVar3 = *puVar3 | (ushort)*DAT_8019ed40 << 8;
      iVar2 = iVar2 + 0x10000;
      uVar6 = uVar5;
    } while (iVar4 < 0x16);
    (&DAT_801cfd68)[uVar5] = 0x2018;
    DAT_801d4e30 = 0x2019;
    DAT_801d4e32 = 0x20ff;
    iVar2 = ((int)DAT_8019ed80 % 0x60) * 0x10000 >> 0x10;
    iVar4 = (iVar2 + 1) * 0x10000 >> 0x10;
    (&DAT_8019f4a8)[iVar2] = &DAT_801d4e34;
    (&DAT_8019f4a8)[iVar4] = &DAT_800d0834;
    DAT_8019ed80 = (short)((uint)((iVar4 + 1) * 0x10000 + 0x10000) >> 0x10);
    FUN_800f71dc(0);
    uVar6 = 0x2866;
    do {
      FUN_800f6b68(0x834);
      (&DAT_801cfd68)[uVar6] = *DAT_8019ed40 + 0x2000;
      FUN_800f6364();
      FUN_800f5958(0x14);
      iVar2 = FUN_800f53d4();
      uVar6 = uVar6 + 1 & 0xffff;
    } while (iVar2 == 0);
    DAT_801d4e70 = 0x2019;
    DAT_801d4e5c = 0x20ff;
    DAT_801d4e5e = 0x201a;
    DAT_801d4e72 = 0x20ff;
    iVar2 = ((int)DAT_8019ed80 % 0x60) * 0x10000 >> 0x10;
    iVar4 = (iVar2 + 1) * 0x10000 >> 0x10;
    (&DAT_8019f4a8)[iVar2] = &DAT_801d4e74;
    (&DAT_8019f4a8)[iVar4] = &DAT_800d0774;
    DAT_8019ed80 = (short)((uint)((iVar4 + 1) * 0x10000 + 0x10000) >> 0x10);
    FUN_800f71dc(0);
    uVar6 = 0x2886;
    do {
      FUN_800f6b68(0x774);
      (&DAT_801cfd68)[uVar6] = *DAT_8019ed40 + 0x2000;
      FUN_800f6364();
      FUN_800f5958(0x14);
      iVar2 = FUN_800f53d4();
      uVar6 = uVar6 + 1 & 0xffff;
    } while (iVar2 == 0);
    DAT_801d4e9c = 0x20ff;
    DAT_801d4e9e = 0x201a;
    FUN_800f654c(0x80);
    FUN_800f8188(0x2115);
    DAT_801d4eb0 = 0x201b;
    iVar2 = 0x10000;
    uVar6 = 0x28a5;
    do {
      uVar5 = uVar6 + 1 & 0xffff;
      *DAT_8019ed40 = 0x1c;
      pbVar1 = DAT_8019ed40;
      puVar3 = &DAT_801cfd68 + uVar6;
      *puVar3 = (ushort)*DAT_8019ed40;
      *pbVar1 = 0x20;
      iVar4 = iVar2 >> 0x10;
      *puVar3 = *puVar3 | (ushort)*DAT_8019ed40 << 8;
      iVar2 = iVar2 + 0x10000;
      uVar6 = uVar5;
    } while (iVar4 < 0x16);
    (&DAT_801cfd68)[uVar5] = 0x201d;
  }
  return;
}



