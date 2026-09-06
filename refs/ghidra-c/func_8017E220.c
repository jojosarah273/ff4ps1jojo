
void FUN_8017e220(int param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  short sVar8;
  uint uVar9;
  char cVar10;
  undefined2 *puVar11;
  byte bVar12;
  ushort uVar13;
  uint uVar14;
  ushort uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  void *p;
  ushort *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  
  if ((param_3 & 0x10) == 0) {
    return;
  }
  iVar21 = 0;
  iVar22 = 0;
  p = (void *)(param_1 + 0x1030);
  DAT_1f800000 = param_1 + 0x70;
  bVar12 = DAT_800d2105 & 7;
  bVar3 = DAT_8019ee2e != -1;
  bVar2 = false;
  if ((DAT_800d06a1 == '\x02') && ((DAT_800d06a2 & 8) != 0)) {
    bVar2 = bVar12 == 1;
  }
  switch(DAT_800d2101 >> 5) {
  case 0:
    iVar22 = 8;
    iVar21 = 0x10;
    break;
  case 1:
    iVar22 = 8;
    iVar21 = 0x20;
    break;
  case 2:
    iVar22 = 8;
    goto LAB_8017e33c;
  case 3:
    iVar22 = 0x10;
    iVar21 = 0x20;
    break;
  case 4:
    iVar22 = 0x10;
    goto LAB_8017e33c;
  case 5:
    iVar22 = 0x20;
LAB_8017e33c:
    iVar21 = 0x40;
  }
  uVar20 = 0;
  puVar19 = param_2;
  do {
    uVar15 = *puVar19;
    uVar1 = puVar19[1];
    uVar9 = (int)(uint)param_2[((int)uVar20 >> 3) + 0x100] >> ((uVar20 & 7) << 1);
    uVar13 = uVar15 >> 8;
    uVar14 = (uint)uVar13;
    iVar17 = iVar22;
    if ((uVar9 & 2) != 0) {
      iVar17 = iVar21;
    }
    if (uVar14 < 0xf0) {
LAB_8017e3b4:
      sVar8 = uVar13 + 1;
      if ((uVar9 & 1) == 0) {
        uVar15 = uVar15 & 0xff;
      }
      else {
        uVar15 = uVar15 | 0xff00;
      }
      uVar13 = uVar1 >> 0xe;
      sVar4 = (short)iVar17;
      if (uVar13 == 1) {
        *(ushort *)((int)p + 8) = uVar15 + sVar4;
        *(short *)((int)p + 10) = sVar8;
        *(ushort *)((int)p + 0x10) = uVar15;
        *(short *)((int)p + 0x12) = sVar8;
        *(ushort *)((int)p + 0x18) = uVar15 + sVar4;
        *(short *)((int)p + 0x1a) = sVar8 + sVar4;
        *(ushort *)((int)p + 0x20) = uVar15;
        *(short *)((int)p + 0x22) = sVar8 + sVar4;
      }
      else if (uVar13 < 2) {
        if (uVar13 == 0) {
          *(ushort *)((int)p + 8) = uVar15;
          *(short *)((int)p + 10) = sVar8;
          *(ushort *)((int)p + 0x10) = uVar15 + sVar4;
          *(short *)((int)p + 0x12) = sVar8;
          *(ushort *)((int)p + 0x18) = uVar15;
          *(short *)((int)p + 0x1a) = sVar8 + sVar4;
          *(ushort *)((int)p + 0x20) = uVar15 + sVar4;
          *(short *)((int)p + 0x22) = sVar8 + sVar4;
        }
      }
      else {
        if (uVar13 == 2) {
          *(ushort *)((int)p + 8) = uVar15;
          *(short *)((int)p + 10) = sVar8 + sVar4;
          *(ushort *)((int)p + 0x10) = uVar15 + sVar4;
          *(short *)((int)p + 0x12) = sVar8 + sVar4;
          *(ushort *)((int)p + 0x18) = uVar15;
          *(short *)((int)p + 0x1a) = sVar8;
          *(ushort *)((int)p + 0x20) = uVar15 + sVar4;
        }
        else {
          if (uVar13 != 3) goto LAB_8017e4c4;
          *(ushort *)((int)p + 8) = uVar15 + sVar4;
          *(short *)((int)p + 10) = sVar8 + sVar4;
          *(ushort *)((int)p + 0x10) = uVar15;
          *(short *)((int)p + 0x12) = sVar8 + sVar4;
          *(ushort *)((int)p + 0x18) = uVar15 + sVar4;
          *(short *)((int)p + 0x1a) = sVar8;
          *(ushort *)((int)p + 0x20) = uVar15;
        }
        *(short *)((int)p + 0x22) = sVar8;
      }
LAB_8017e4c4:
      iVar16 = (uVar1 & 0xf) * 8;
      uVar9 = uVar1 >> 1 & 0xf8;
      *(undefined2 *)((int)p + 0x16) = DAT_8019ee10;
      iVar18 = iVar17;
      if ((int)(((uint)*(ushort *)((int)p + 0x20) - (uint)*(ushort *)((int)p + 8)) * 0x10000) < 0) {
        iVar16 = iVar16 + -1;
        if (iVar16 < 0) {
          iVar16 = 0;
          iVar18 = (iVar17 + -1) * 0x10000 >> 0x10;
        }
      }
      if (((int)(((uint)*(ushort *)((int)p + 0x22) - (uint)*(ushort *)((int)p + 10)) * 0x10000) < 0)
         && (uVar9 = (int)((uVar9 - 1) * 0x10000) >> 0x10, (int)uVar9 < 0)) {
        uVar9 = 0;
        iVar17 = (iVar17 + -1) * 0x10000 >> 0x10;
      }
      if (0xff < iVar16 + iVar18) {
        iVar18 = (iVar18 + -1) * 0x10000 >> 0x10;
      }
      cVar5 = (char)iVar16;
      cVar10 = cVar5 + (char)iVar18;
      if (0xff < (int)(uVar9 + iVar17)) {
        iVar17 = (iVar17 + -1) * 0x10000 >> 0x10;
      }
      cVar6 = (char)uVar9;
      cVar7 = cVar6 + (char)iVar17;
      *(char *)((int)p + 0x14) = cVar10;
      *(char *)((int)p + 0x24) = cVar10;
      uVar15 = uVar1 >> 0xc;
      *(char *)((int)p + 0xc) = cVar5;
      *(char *)((int)p + 0xd) = cVar6;
      *(char *)((int)p + 0x15) = cVar6;
      *(char *)((int)p + 0x1c) = cVar5;
      *(char *)((int)p + 0x1d) = cVar7;
      *(char *)((int)p + 0x25) = cVar7;
      if ((bVar12 == 7 && bVar3) && ((uVar15 & 3) != 0)) {
        puVar11 = &DAT_801dfd68 + (uVar1 >> 9 & 7) + 8;
        DAT_1f800004 = (void *)(DAT_1f800000 + 0x90);
LAB_8017e6d0:
        *(undefined2 *)((int)p + 0xe) = *puVar11;
      }
      else {
        uVar13 = uVar15 & 3;
        if (uVar13 == 1) {
          puVar11 = &DAT_801dfd68 + (uVar1 >> 9 & 7) + 8;
          DAT_1f800004 = (void *)(DAT_1f800000 + 0x44);
          goto LAB_8017e6d0;
        }
        if (1 < uVar13) {
          if (uVar13 == 2) {
            puVar11 = &DAT_801dfd68 + (uVar1 >> 9 & 7) + 8;
            DAT_1f800004 = (void *)(DAT_1f800000 + 0x68);
          }
          else {
            if (uVar13 != 3) goto LAB_8017e6e4;
            puVar11 = &DAT_801dfd68 + (uVar1 >> 9 & 7) + 8;
            DAT_1f800004 = (void *)(DAT_1f800000 + 0x8c);
          }
          goto LAB_8017e6d0;
        }
        if ((uVar15 & 3) == 0) {
          if (bVar2) {
            puVar11 = &DAT_801dfd68 + (uVar1 >> 9 & 7) + 0x18;
            DAT_1f800004 = (void *)(DAT_1f800000 + 0x68);
          }
          else {
            puVar11 = &DAT_801dfd68 + (uVar1 >> 9 & 7) + 8;
            DAT_1f800004 = (void *)(DAT_1f800000 + 0x20);
          }
          goto LAB_8017e6d0;
        }
      }
LAB_8017e6e4:
      AddPrim(DAT_1f800004,p);
    }
    else if (0xff < uVar14 + iVar17) {
      uVar13 = (ushort)((uVar14 - 0x100) * 0x10000 >> 0x10);
      goto LAB_8017e3b4;
    }
    puVar19 = puVar19 + 2;
    uVar20 = (int)((uVar20 + 1) * 0x10000) >> 0x10;
    p = (void *)((int)p + 0x28);
    if (0x7f < (int)uVar20) {
      return;
    }
  } while( true );
}



