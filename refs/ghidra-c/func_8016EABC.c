
void FUN_8016eabc(void)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  FUN_800f926c();
  cVar3 = '\x04';
  FUN_800f9330();
  FUN_800f939c();
  FUN_800f9298();
  FUN_800f654c(0);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f71dc(0x100);
  FUN_800f9330();
  FUN_800f94b8();
  iVar4 = FUN_800f3c3c(0);
  iVar5 = FUN_800f3b04(0x1000);
  iVar6 = FUN_800f3b9c(0,0);
  *(undefined1 *)(iVar4 + 0xec) = 0;
  FUN_800f7500(0x4218);
  FUN_800f71dc(4);
  do {
    FUN_800f939c();
    FUN_80170198();
    FUN_800f960c();
    FUN_800f6364();
    FUN_800f63bc();
    cVar3 = cVar3 + -1;
  } while (cVar3 != '\0');
  bVar2 = *(byte *)(iVar5 + 0xa64) & 1;
  *(byte *)(iVar4 + 0x1d) = bVar2 << 2;
  cVar3 = (bVar2 * '\b' + *(char *)(iVar4 + 0x1d)) * '\x02';
  *(char *)(iVar4 + 0x43) = cVar3;
  uVar1 = CONCAT11(*(undefined1 *)(iVar4 + 0x44),cVar3);
  uVar9 = (uint)uVar1;
  FUN_800f9644(0x20);
  *(undefined1 *)(iVar4 + 0x1d) = *(undefined1 *)(iVar4 + 4);
  *(undefined1 *)(iVar4 + 0x1e) = *(undefined1 *)(iVar4 + 5);
  uVar10 = 0;
  *DAT_8019ed54 = uVar1;
  FUN_800f9330();
  sVar8 = 0xc;
  do {
    if ((*(ushort *)(iVar4 + 0x1d) & 0x8000) != 0) {
      uVar10 = uVar10 | *(ushort *)(uVar9 + iVar6 + 0x1a05);
    }
    iVar5 = (*(ushort *)(iVar4 + 0x1d) & 0x7fff) << 1;
    uVar9 = uVar9 + 2 & 0xffff;
    sVar8 = sVar8 + -1;
    *(char *)(iVar4 + 0x1d) = (char)iVar5;
    *(char *)(iVar4 + 0x1e) = (char)((uint)iVar5 >> 8);
  } while (sVar8 != 0);
  FUN_800f95a0();
  sVar8 = 0xc;
  uVar9 = (uint)*DAT_8019ed54;
  *(char *)(iVar4 + 0x1f) = (char)uVar10;
  uVar11 = 0;
  *(char *)(iVar4 + 0x20) = (char)(uVar10 >> 8);
  *(undefined1 *)(iVar4 + 0x1d) = *(undefined1 *)(iVar4 + 8);
  *(undefined1 *)(iVar4 + 0x1e) = *(undefined1 *)(iVar4 + 9);
  do {
    if ((*(ushort *)(iVar4 + 0x1d) & 0x8000) != 0) {
      uVar11 = uVar11 | *(ushort *)(uVar9 + iVar6 + 0x1a05);
    }
    iVar5 = (*(ushort *)(iVar4 + 0x1d) & 0x7fff) << 1;
    uVar9 = uVar9 + 2 & 0xffff;
    sVar8 = sVar8 + -1;
    *(char *)(iVar4 + 0x1d) = (char)iVar5;
    *(char *)(iVar4 + 0x1e) = (char)((uint)iVar5 >> 8);
  } while (sVar8 != 0);
  FUN_800f94b8();
  puVar7 = (undefined1 *)FUN_800f3c3c(0);
  puVar7[2] = (char)uVar11;
  puVar7[3] = (char)(uVar11 >> 8);
  *puVar7 = *(undefined1 *)(iVar6 + 0x11f);
  puVar7[1] = *(undefined1 *)(iVar6 + 0x120);
  FUN_800f9660(0x20);
  FUN_800f960c();
  FUN_800f95a0();
  FUN_800f9448();
  return;
}



