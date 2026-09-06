
void FUN_80176f88(void)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  char cVar9;
  undefined1 *puVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  iVar3 = FUN_800f3c3c(0);
  iVar4 = FUN_800f3b04(0x300);
  iVar5 = FUN_800f3b9c(0x128000,0);
  iVar6 = FUN_800f3b9c(0x138000,0);
  uVar13 = (uint)*(byte *)(iVar3 + 0x4f) << 2;
  uVar14 = (uint)*(byte *)(iVar3 + 0x50) << 2;
  *(byte *)(iVar3 + 0x30) = *(byte *)(iVar3 + 0x50);
  do {
    iVar12 = uVar13 + iVar5;
    uVar2 = *(undefined1 *)(iVar12 + 0x7660);
    *(undefined1 *)(iVar3 + 0x29) = 0;
    *(undefined1 *)(iVar3 + 0x28) = uVar2;
    puVar10 = (undefined1 *)(uVar14 + iVar4);
    puVar10[1] = *(char *)(iVar12 + 0x7661) + *(char *)(iVar3 + 0x4d);
    uVar7 = (uint)*(byte *)(iVar3 + 0x28) + (uint)*(ushort *)(iVar3 + 0x4b) & 0x1ff;
    uVar2 = (undefined1)uVar7;
    *(undefined1 *)(iVar3 + 0x28) = uVar2;
    *(char *)(iVar3 + 0x29) = (char)(uVar7 >> 8);
    *puVar10 = uVar2;
    puVar10[2] = *(undefined1 *)(iVar12 + 0x7662);
    if (*(byte *)(iVar3 + 0x52) == 0) {
      bVar11 = *(byte *)(iVar12 + 0x7663);
    }
    else {
      bVar11 = *(byte *)(iVar3 + 0x52) | *(byte *)(iVar12 + 0x7663) & 0xf1;
    }
    puVar10[3] = bVar11;
    *DAT_8019ed54 = (ushort)uVar13;
    FUN_800f9330();
    bVar11 = *(byte *)(iVar3 + 0x30);
    bVar8 = bVar11 & 3;
    *(char *)(iVar3 + 0x2e) = (char)(bVar11 & 3);
    *(byte *)(iVar3 + 0x2c) = bVar11 >> 2;
    *(undefined1 *)(iVar3 + 0x2d) = *(undefined1 *)((bVar11 & 3) + iVar6 + 0x5b0c);
    while (bVar8 != 0) {
      bVar8 = *(char *)(iVar3 + 0x2e) - 1;
      *(byte *)(iVar3 + 0x2e) = bVar8;
      *(char *)(iVar3 + 0x29) = *(char *)(iVar3 + 0x29) << 2;
    }
    iVar12 = (uint)*(byte *)(iVar3 + 0x2c) + iVar4;
    *(byte *)(iVar12 + 0x200) =
         *(byte *)(iVar12 + 0x200) & *(byte *)(iVar3 + 0x2d) | *(byte *)(iVar3 + 0x29);
    FUN_800f95a0();
    uVar14 = uVar14 + 4 & 0xffff;
    uVar1 = *DAT_8019ed54;
    *(char *)(iVar3 + 0x30) = *(char *)(iVar3 + 0x30) + '\x01';
    *(char *)(iVar3 + 0x50) = *(char *)(iVar3 + 0x50) + '\x01';
    *(char *)(iVar3 + 0x4f) = *(char *)(iVar3 + 0x4f) + '\x01';
    cVar9 = *(char *)(iVar3 + 0x51) + -1;
    *(char *)(iVar3 + 0x51) = cVar9;
    uVar13 = uVar1 + 4 & 0xffff;
  } while (cVar9 != '\0');
  return;
}



