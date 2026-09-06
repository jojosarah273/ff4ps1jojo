
void FUN_8016dd9c(void)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  char cVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  puVar5 = (ushort *)FUN_800f3c3c(0);
  iVar6 = FUN_800f3b04(0x2000);
  iVar7 = FUN_800f3b9c(0x138000,0);
  uVar14 = 0;
  uVar13 = 0;
  iVar8 = iVar6;
  do {
    if (*(char *)(iVar8 + 0x303) == '\0') {
      cVar4 = *(char *)(iVar8 + 0x883) + -1;
      *(char *)(iVar8 + 0x883) = cVar4;
      if (cVar4 == '\0') {
        *(undefined1 *)(iVar8 + 0x303) = 1;
LAB_8016de5c:
        iVar12 = uVar14 + iVar6;
        FUN_8016db38();
        bVar1 = *DAT_8019ed40;
        iVar10 = (uint)bVar1 << 1;
        uVar9 = bVar1 & 3;
        *(byte *)puVar5 = bVar1;
        *(char *)(iVar8 + 0x683) = (char)uVar9;
        *(byte *)((int)puVar5 + 1) = 0;
        *(char *)(iVar12 + 0x783) = (char)iVar10;
        *(char *)(iVar12 + 0x784) = (char)((uint)iVar10 >> 8);
        *(byte *)(iVar12 + 0x903) = bVar1;
        *(undefined1 *)(iVar12 + 0x904) = 0;
        *(byte *)(puVar5 + 1) = bVar1 & 0x3f;
        *(byte *)((int)puVar5 + 3) = 0;
        *(byte *)(iVar12 + 0xa03) = (bVar1 & 0x3f) + (bVar1 & 0xf);
        iVar10 = uVar9 * 2 + iVar7;
        *(undefined1 *)(iVar12 + 0xa04) = 0;
        *(undefined1 *)(iVar12 + 0xb03) = 1;
        *(undefined1 *)(iVar12 + 0xb04) = 0;
        *(undefined1 *)(iVar12 + 0x583) = *(undefined1 *)(iVar10 + 0x6c79);
        *(undefined1 *)(iVar12 + 0x584) = *(undefined1 *)(iVar10 + 0x6c7a);
        *(undefined1 *)(iVar12 + 0x585) = *(undefined1 *)(iVar10 + 0x6c7b);
        goto LAB_8016def4;
      }
    }
    else {
      if (0x13f < *(ushort *)(uVar14 + iVar6 + 0xa03)) goto LAB_8016de5c;
LAB_8016def4:
      iVar10 = uVar14 + iVar6;
      bVar1 = *(byte *)(iVar10 + 0xa03);
      *(byte *)puVar5 = bVar1;
      *(byte *)(puVar5 + 7) = bVar1;
      bVar1 = *(byte *)(iVar10 + 0xa04);
      *(byte *)((int)puVar5 + 1) = bVar1;
      *(byte *)((int)puVar5 + 0xf) = bVar1;
      sVar2 = *(short *)(iVar10 + 0x783);
      *(byte *)(puVar5 + 1) = (byte)sVar2;
      *(byte *)((int)puVar5 + 3) = (byte)((ushort)sVar2 >> 8);
      *DAT_8019ed44 = sVar2;
      FUN_8016db94();
      uVar9 = puVar5[10] + 0x70 & 0xffff;
      *(char *)(iVar10 + 0x483) = (char)uVar9;
      *(char *)(iVar10 + 0x484) = (char)(uVar9 >> 8);
      *(byte *)(puVar5 + 7) = (byte)*puVar5;
      *(byte *)((int)puVar5 + 0xf) = *(byte *)((int)puVar5 + 1);
      *DAT_8019ed44 = sVar2 + 0x80;
      FUN_8016db94();
      uVar3 = *(ushort *)(iVar10 + 0x583);
      uVar9 = puVar5[10] + 0x80 & 0xffff;
      *(char *)(iVar10 + 899) = (char)uVar9;
      *(char *)(iVar10 + 900) = (char)(uVar9 >> 8);
      *(byte *)(puVar5 + 0x4c) = (byte)uVar3;
      *(byte *)((int)puVar5 + 0x99) = (byte)(uVar3 >> 8);
      uVar9 = (uint)*(ushort *)(iVar10 + 0x903) + (uint)uVar3;
      uVar11 = uVar9 & 0xffff;
      *(char *)(iVar10 + 0x903) = (char)uVar11;
      *(char *)(iVar10 + 0x904) = (char)(uVar11 >> 8);
      uVar9 = (uint)*(ushort *)(iVar10 + 0xb03) + (uint)((uVar9 & 0x10000) != 0) * 2;
      bVar1 = (byte)(uVar9 >> 8);
      *(byte *)(iVar10 + 0xb03) = (byte)uVar9;
      *(byte *)(puVar5 + 1) = (byte)uVar9;
      *(byte *)(iVar10 + 0xb04) = bVar1;
      *(byte *)((int)puVar5 + 3) = bVar1;
      uVar9 = (uint)*puVar5 + (uVar9 & 0xffff) & 0xffff;
      *(char *)(iVar10 + 0xa03) = (char)uVar9;
      *(char *)(iVar10 + 0xa04) = (char)(uVar9 >> 8);
      bVar1 = (byte)(uVar9 >> 4);
      *(byte *)puVar5 = bVar1;
      *(byte *)((int)puVar5 + 1) = (byte)(uVar9 >> 0xc);
      *(byte *)(iVar8 + 0x703) = bVar1 & 0xf;
    }
    uVar14 = uVar14 + 2 & 0xffff;
    uVar13 = uVar13 + 1 & 0xffff;
    if (uVar13 == puVar5[0x4b]) {
      *(byte *)((int)puVar5 + 0x95) = *(byte *)((int)puVar5 + 0x95) + 1;
      return;
    }
    if ((uVar13 == 0x1b) || (iVar8 = uVar13 + iVar6, uVar13 == 0x35)) {
      FUN_80177dac();
      iVar8 = uVar13 + iVar6;
    }
  } while( true );
}



