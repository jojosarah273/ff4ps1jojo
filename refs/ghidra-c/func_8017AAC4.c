
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void * FUN_8017aac4(int param_1,int param_2,void *param_3,int *param_4)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  bool bVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ushort *puVar14;
  ushort *puVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  byte bVar19;
  undefined1 uVar20;
  ushort *puVar21;
  int iVar22;
  int *piVar23;
  undefined1 uVar24;
  undefined2 uVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  undefined4 *puVar29;
  uint uVar30;
  int iVar31;
  void *pvVar32;
  short sVar33;
  int iVar34;
  int iVar35;
  uint local_68;
  int local_58;
  uint local_54;
  ushort *local_50;
  
  local_58 = 0;
  local_54 = 0;
  DAT_1f800000 = (int *)(param_1 + 0x70);
  DAT_1f800008 = (int *)0x0;
  uVar1 = *(ushort *)(param_2 + 0x7fe);
  local_50 = (ushort *)0x0;
  DAT_1f800020 = (uint)DAT_800d2105;
  DAT_1f80001c = uVar1 & 0x1000;
  uVar18 = uVar1 & 0x3ff;
  if (((DAT_800d2131 & 0xf) == 0) ||
     (bVar19 = DAT_800d2131 & (DAT_800d212d ^ 0xf) & 0xf, (DAT_800d212d & 0xf) == 0)) {
    bVar19 = 0;
  }
  DAT_1f800010 = 0;
  switch(*param_4) {
  case 0:
    DAT_1f800004 = (int *)(param_1 + 0xec);
    DAT_1f800000 = (int *)(param_1 + 200);
    bVar19 = bVar19 & 1;
    break;
  case 1:
    DAT_1f800004 = (int *)(param_1 + 0xdc);
    DAT_1f800000 = (int *)(param_1 + 0xb8);
    bVar19 = bVar19 & 2;
    break;
  case 2:
    if ((DAT_800d2105 & 8) == 0) {
      DAT_1f800004 = (int *)(param_1 + 0xa4);
    }
    else {
      DAT_1f800004 = (int *)(param_1 + 0x100);
    }
    DAT_1f800000 = (int *)(param_1 + 0x80);
    bVar19 = bVar19 & 4;
    break;
  case 3:
    bVar19 = bVar19 & 8;
    DAT_1f800004 = (int *)(param_1 + 0x94);
    break;
  default:
    goto switchD_8017abc0_caseD_4;
  case 7:
    DAT_1f800000 = (int *)(param_1 + 0xa4);
    goto switchD_8017abc0_caseD_4;
  }
  if (bVar19 != 0) {
    DAT_1f800010 = 1;
  }
switchD_8017abc0_caseD_4:
  if ((DAT_800d0203 == '\x02') && ((DAT_800d004a == '\x0f' || (DAT_8019ee84 != 0)))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  uVar8 = (uint)*(ushort *)(param_4[1] + 6);
  uVar27 = (uVar8 & 0xf8) << 0x10;
  iVar35 = (int)uVar27 >> 0x10;
  local_68 = (int)((uVar8 + *(ushort *)(param_4[1] + 10) + 0x10) * 0x10000) >> 0x10;
  if (0xf8 < (int)local_68) {
    local_68 = 0xf8;
  }
  uVar27 = uVar27 >> 0x13;
  local_68 = local_68 & 0xf8;
  uVar27 = uVar27 << 5 | uVar27;
  if ((DAT_800d2105 & 7) == 0) {
    DAT_1f800014 = *param_4 * 8 + 0x20;
  }
  else if (*param_4 == 2) {
    DAT_1f800014 = 0x20;
  }
  else {
    DAT_1f800014 = 0;
  }
  DAT_1f80000c = param_2;
  DAT_1f800018 = param_4;
  if ((uVar1 & 0x1000) == 0) {
    if ((DAT_800d0203 == '\x02') && (*param_4 == 1)) {
      param_3 = (void *)FUN_80179fbc(param_3,0x1f800000,uVar27,uVar18,iVar35,local_68);
    }
    else {
      uVar8 = ((ushort *)param_4[1])[1] & 7;
      iVar17 = (int)((iVar35 - uVar8) * 0x10000) >> 0x10;
      iVar12 = (int)((local_68 - uVar8) * 0x10000) >> 0x10;
      uVar8 = *(ushort *)param_4[1] & 7;
      iVar35 = (int)((0x108 - uVar8) * 0x10000) >> 0x10;
      if ((void *)((int)param_3 +
                  (short)((short)(iVar12 - iVar17 >> 3) * (short)((int)(iVar35 + uVar8) >> 3)) *
                  0x14) < DAT_8019ee88) {
        if (iVar17 < iVar12) {
          iVar9 = uVar8 * -0x10000;
          do {
            iVar11 = 0;
            sVar5 = (short)iVar17;
            puVar29 = &DAT_8019f4b0;
            puVar28 = &DAT_8019f630;
            uVar26 = DAT_1f80000c + uVar27 * 2;
            iVar34 = 0x10000;
            do {
              uVar13 = *puVar28;
              if (uVar26 <= uVar13) {
                iVar10 = iVar35 + uVar8;
                if (iVar10 < 0) {
                  iVar10 = iVar10 + 7;
                }
                if (uVar13 <= uVar26 + (iVar10 >> 3) * 2) {
                  local_58 = iVar11;
                  local_54 = uVar13;
                }
              }
              puVar21 = (ushort *)*puVar29;
              puVar14 = (ushort *)(DAT_1f80000c + uVar27 * 2);
              puVar15 = local_50;
              if (puVar21 < puVar14) {
LAB_8017afc4:
                local_50 = puVar15;
              }
              else {
                iVar11 = iVar35 + uVar8;
                if (iVar11 < 0) {
                  iVar11 = iVar11 + 7;
                }
                puVar15 = puVar21;
                if (puVar21 <= puVar14 + (iVar11 >> 3)) goto LAB_8017afc4;
              }
              puVar29 = puVar29 + 3;
              iVar11 = iVar34 >> 0x10;
              puVar28 = puVar28 + 3;
              iVar34 = iVar34 + 0x10000;
            } while (iVar11 < 0x20);
            iVar34 = iVar9 >> 0x10;
            bVar6 = false;
            if (iVar34 < iVar35) {
              bVar2 = 0x8c < iVar17;
              do {
                iVar17 = uVar27 * 2;
                puVar15 = (ushort *)(DAT_1f80000c + iVar17);
                if ((puVar15 < local_50) || (local_50 + 0x18 <= puVar15)) {
                  uVar26 = (uint)*(ushort *)(iVar17 + DAT_1f80000c);
                }
                else {
                  uVar26 = *puVar15 | 0xff;
                }
                if ((uVar26 & 0x3ff) != uVar18) {
                  sVar33 = (short)iVar34;
                  if (local_54 == DAT_1f80000c + iVar17) {
                    uVar13 = uVar26 & 0xff00;
                    iVar17 = 0;
                    iVar34 = 0;
                    do {
                      uVar1 = *(ushort *)((&DAT_8019f628)[local_58 * 3] + iVar34 * 2);
                      iVar11 = (uVar1 & 0x1f) * 8;
                      uVar30 = uVar1 >> 2 & 0xf8;
                      uVar16 = uVar1 & 0xff;
                      if (uVar16 - 0x42 < 0x34) {
                        iVar10 = uVar16 - 0x42;
LAB_8017b110:
                        iVar22 = iVar10 * 4;
                        iVar31 = (int)*(short *)(&DAT_8019a840 + (iVar22 + 2) * 2);
                        uVar25 = *(undefined2 *)(&DAT_8019a840 + (iVar22 + 3) * 2);
                        iVar11 = (int)((iVar11 + (uint)*(ushort *)(&DAT_8019a840 + iVar10 * 8)) *
                                      0x10000) >> 0x10;
                        uVar30 = (int)((uVar30 + *(ushort *)(&DAT_8019a840 + (iVar22 + 1) * 2)) *
                                      0x10000) >> 0x10;
                      }
                      else {
                        if (uVar16 - 0x80 < 10) {
                          iVar10 = uVar16 - 0x4c;
                          goto LAB_8017b110;
                        }
                        if (uVar16 == 0xff) {
                          iVar31 = 4;
                        }
                        else {
                          iVar31 = 8;
                        }
                        uVar25 = 8;
                      }
                      *(short *)((int)param_3 + 0x10) = (short)iVar31;
                      *(undefined2 *)((int)param_3 + 0x12) = uVar25;
                      *(char *)((int)param_3 + 0xc) = (char)iVar11;
                      *(char *)((int)param_3 + 0xd) = (char)uVar30;
                      sVar7 = sVar33 + (short)iVar17;
                      if (bVar6) {
                        sVar7 = sVar7 + -8;
                      }
                      *(short *)((int)param_3 + 8) = sVar7;
                      *(short *)((int)param_3 + 10) = sVar5;
                      if (DAT_1f800014 == 0) {
                        if (DAT_1f800010 == 0) {
                          uVar16 = uVar26 >> 9 & 0xe;
                        }
                        else {
                          uVar16 = ((uVar26 >> 10 & 7) + 0x10) * 2;
                        }
                      }
                      else {
                        uVar16 = ((uVar26 >> 10 & 7) + DAT_1f800014) * 2;
                      }
                      *(undefined2 *)((int)param_3 + 0xe) =
                           *(undefined2 *)((int)&DAT_801dfd68 + uVar16);
                      iVar17 = (iVar17 + iVar31) * 0x10000 >> 0x10;
                      if ((bVar4) && (bVar2)) {
                        uVar26 = uVar26 & 0xdfff;
                      }
                      piVar23 = DAT_1f800000;
                      if ((uVar26 & 0x2000) != 0) {
                        piVar23 = DAT_1f800004;
                      }
                      DAT_1f800008 = piVar23 + (uVar26 >> 0xe);
                      AddPrim(DAT_1f800008,param_3);
                      iVar34 = (iVar34 + 1) * 0x10000 >> 0x10;
                      param_3 = (void *)((int)param_3 + 0x14);
                    } while (iVar34 < 0x18);
                    iVar34 = 0;
                    do {
                      uVar16 = (uint)*(byte *)(iVar34 * 2 + (&DAT_8019f628)[local_58 * 3] + -0x40);
                      iVar11 = (uVar16 & 0x1f) * 8;
                      uVar30 = (uVar13 | uVar16) >> 2 & 0xf8;
                      if (uVar16 - 0x42 < 0x34) {
                        iVar10 = uVar16 - 0x42;
LAB_8017b34c:
                        iVar22 = iVar10 * 4;
                        iVar31 = (int)*(short *)(&DAT_8019a840 + (iVar22 + 2) * 2);
                        uVar25 = *(undefined2 *)(&DAT_8019a840 + (iVar22 + 3) * 2);
                        iVar11 = (int)((iVar11 + (uint)*(ushort *)(&DAT_8019a840 + iVar10 * 8)) *
                                      0x10000) >> 0x10;
                        uVar30 = (int)((uVar30 + *(ushort *)(&DAT_8019a840 + (iVar22 + 1) * 2)) *
                                      0x10000) >> 0x10;
                      }
                      else {
                        if (uVar16 - 0x80 < 10) {
                          iVar10 = uVar16 - 0x4c;
                          goto LAB_8017b34c;
                        }
                        if ((uVar16 == 0xff) || (uVar16 == 0x8f)) {
                          iVar31 = 4;
                        }
                        else {
                          iVar31 = 8;
                        }
                        uVar25 = 8;
                      }
                      *(short *)((int)param_3 + 0x10) = (short)iVar31;
                      *(undefined2 *)((int)param_3 + 0x12) = uVar25;
                      *(char *)((int)param_3 + 0xc) = (char)iVar11;
                      *(char *)((int)param_3 + 0xd) = (char)uVar30;
                      sVar7 = sVar33 + (short)iVar17;
                      if (bVar6) {
                        sVar7 = sVar7 + -8;
                      }
                      *(short *)((int)param_3 + 8) = sVar7;
                      *(short *)((int)param_3 + 10) = sVar5;
                      if (DAT_1f800014 == 0) {
                        if (DAT_1f800010 == 0) {
                          uVar16 = uVar26 >> 9 & 0xe;
                        }
                        else {
                          uVar16 = ((uVar26 >> 10 & 7) + 0x10) * 2;
                        }
                      }
                      else {
                        uVar16 = ((uVar26 >> 10 & 7) + DAT_1f800014) * 2;
                      }
                      *(undefined2 *)((int)param_3 + 0xe) =
                           *(undefined2 *)((int)&DAT_801dfd68 + uVar16);
                      iVar11 = (iVar17 + iVar31) * 0x10000;
                      iVar17 = iVar11 >> 0x10;
                      if (bVar6) {
                        if (0xd4 < iVar17) {
LAB_8017b488:
                          iVar17 = (int)(short)((short)((uint)iVar11 >> 0x10) - (short)iVar31);
                          break;
                        }
                      }
                      else if (0xc0 < iVar17) goto LAB_8017b488;
                      uVar16 = uVar26 & 0x2000;
                      if ((bVar4) && (bVar2)) {
                        uVar26 = uVar26 & 0xdfff;
                        uVar16 = 0;
                      }
                      piVar23 = DAT_1f800000;
                      if (uVar16 != 0) {
                        piVar23 = DAT_1f800004;
                      }
                      DAT_1f800008 = piVar23 + (uVar26 >> 0xe);
                      AddPrim(DAT_1f800008,param_3);
                      iVar34 = (iVar34 + 1) * 0x10000 >> 0x10;
                      param_3 = (void *)((int)param_3 + 0x14);
                    } while (iVar34 < 0x18);
                    if (iVar17 < 0xc0) {
                      *(short *)((int)param_3 + 0x10) = 0xc0 - (short)iVar17;
                      *(undefined2 *)((int)param_3 + 0x12) = 8;
                      *(undefined1 *)((int)param_3 + 0xc) = 0xf8;
                      *(byte *)((int)param_3 + 0xd) = (byte)((uVar13 | 0xff) >> 2) & 0xf8;
                      sVar7 = sVar33 + (short)iVar17;
                      if (bVar6) {
                        sVar7 = sVar7 + -8;
                      }
                      *(short *)((int)param_3 + 8) = sVar7;
                      *(short *)((int)param_3 + 10) = sVar5;
                      if (DAT_1f800014 == 0) {
                        if (DAT_1f800010 == 0) {
                          uVar13 = uVar26 >> 9 & 0xe;
                        }
                        else {
                          uVar13 = ((uVar26 >> 10 & 7) + 0x10) * 2;
                        }
                      }
                      else {
                        uVar13 = ((uVar26 >> 10 & 7) + DAT_1f800014) * 2;
                      }
                      *(undefined2 *)((int)param_3 + 0xe) =
                           *(undefined2 *)((int)&DAT_801dfd68 + uVar13);
                      uVar13 = uVar26 & 0x2000;
                      if ((bVar4) && (bVar2)) {
                        uVar26 = uVar26 & 0xdfff;
                        uVar13 = 0;
                      }
                      piVar23 = DAT_1f800000;
                      if (uVar13 != 0) {
                        piVar23 = DAT_1f800004;
                      }
                      DAT_1f800008 = piVar23 + (uVar26 >> 0xe);
                      AddPrim(DAT_1f800008,param_3);
                      param_3 = (void *)((int)param_3 + 0x14);
                    }
                    iVar34 = (int)(short)(sVar33 + 0xb8);
                    uVar27 = (uint)(short)((short)uVar27 + 0x17);
                    if (!bVar6) goto LAB_8017b9c0;
                    *(undefined2 *)((int)param_3 + 0x10) = 8;
                    *(undefined2 *)((int)param_3 + 0x12) = 8;
                    *(undefined1 *)((int)param_3 + 0xc) = 0xf8;
                    /* Possible PsyQ macro: setPolyG4() */
                    *(undefined1 *)((int)param_3 + 0xd) = 0x38;
                    if (DAT_1f800014 == 0) {
                      if (DAT_1f800010 == 0) {
                        *(undefined2 *)((int)param_3 + 0xe) = DAT_801dfd68;
                      }
                      else {
                        *(undefined2 *)((int)param_3 + 0xe) = DAT_801dfd88;
                      }
                    }
                    else {
                      *(undefined2 *)((int)param_3 + 0xe) = (&DAT_801dfd68)[DAT_1f800014];
                    }
                    *(undefined2 *)((int)param_3 + 8) = 0xd8;
                    *(short *)((int)param_3 + 10) = sVar5;
                    bVar3 = true;
                    if ((bVar4) && (bVar2)) {
                      bVar3 = false;
                    }
                    uVar26 = 0;
                    piVar23 = DAT_1f800004;
                    if (!bVar3) goto LAB_8017b97c;
                  }
                  else {
                    *(undefined2 *)((int)param_3 + 0x10) = 8;
                    *(undefined2 *)((int)param_3 + 0x12) = 8;
                    *(char *)((int)param_3 + 0xc) = (char)(uVar26 << 3);
                    *(byte *)((int)param_3 + 0xd) = (byte)(uVar26 >> 2) & 0xf8;
                    if (DAT_1f800014 == 0) {
                      if (DAT_1f800010 == 0) {
                        uVar13 = uVar26 >> 9 & 0xe;
                      }
                      else {
                        uVar13 = ((uVar26 >> 10 & 7) + 0x10) * 2;
                      }
                    }
                    else {
                      uVar13 = ((uVar26 >> 10 & 7) + DAT_1f800014) * 2;
                    }
                    *(undefined2 *)((int)param_3 + 0xe) =
                         *(undefined2 *)((int)&DAT_801dfd68 + uVar13);
                    if ((uVar26 == 0x20ff) && (iVar34 == 0x18)) {
                      bVar6 = true;
                    }
                    if (bVar6) {
                      if (iVar34 == 0x18) goto LAB_8017b9c0;
                      if (iVar34 != 0xe0) goto LAB_8017b93c;
                      *(undefined2 *)((int)param_3 + 8) = 0x18;
                      *(short *)((int)param_3 + 10) = sVar5;
                      uVar13 = uVar26 & 0x2000;
                      if ((bVar4) && (bVar2)) {
                        uVar26 = uVar26 & 0xdfff;
                        uVar13 = 0;
                      }
                      piVar23 = DAT_1f800000;
                      if (uVar13 != 0) {
                        piVar23 = DAT_1f800004;
                      }
                      DAT_1f800008 = piVar23 + (uVar26 >> 0xe);
                      AddPrim(DAT_1f800008,param_3);
                      pvVar32 = (void *)((int)param_3 + 0x14);
                      *(undefined2 *)((int)param_3 + 0x24) = 8;
                      *(undefined2 *)((int)param_3 + 0x26) = 8;
                      *(char *)((int)param_3 + 0x20) = (char)(uVar26 << 3);
                      *(byte *)((int)param_3 + 0x21) = (byte)(uVar26 >> 2) & 0xf8;
                      if (DAT_1f800014 == 0) {
                        if (DAT_1f800010 == 0) {
                          uVar13 = uVar26 >> 9 & 0xe;
                        }
                        else {
                          uVar13 = ((uVar26 >> 10 & 7) + 0x10) * 2;
                        }
                      }
                      else {
                        uVar13 = ((uVar26 >> 10 & 7) + DAT_1f800014) * 2;
                      }
                      *(undefined2 *)((int)param_3 + 0x22) =
                           *(undefined2 *)((int)&DAT_801dfd68 + uVar13);
                      *(undefined2 *)((int)param_3 + 0x1c) = 0xe0;
                      *(short *)((int)param_3 + 0x1e) = sVar5;
                      uVar13 = uVar26 & 0x2000;
                      param_3 = pvVar32;
                      piVar23 = DAT_1f800004;
                      if ((bVar4) && (bVar2)) {
                        uVar26 = uVar26 & 0xdfff;
                        uVar13 = 0;
                      }
                    }
                    else {
LAB_8017b93c:
                      *(short *)((int)param_3 + 8) = sVar33;
                      *(short *)((int)param_3 + 10) = sVar5;
                      uVar13 = uVar26 & 0x2000;
                      piVar23 = DAT_1f800004;
                      if ((bVar4) && (bVar2)) {
                        uVar26 = uVar26 & 0xdfff;
                        uVar13 = 0;
                      }
                    }
                    DAT_1f800004 = piVar23;
                    if (uVar13 == 0) {
LAB_8017b97c:
                      piVar23 = DAT_1f800000;
                    }
                  }
                  DAT_1f800008 = piVar23 + (uVar26 >> 0xe);
                  AddPrim(DAT_1f800008,param_3);
                  param_3 = (void *)((int)param_3 + 0x14);
                }
LAB_8017b9c0:
                iVar34 = (iVar34 + 8) * 0x10000 >> 0x10;
                uVar27 = (int)((uVar27 + 1) * 0x10000) >> 0x10;
              } while (iVar34 < iVar35);
            }
            iVar17 = (int)(short)(sVar5 + 8);
          } while (iVar17 < iVar12);
        }
      }
      else {
        DAT_8019ee70 = 300;
      }
    }
  }
  else {
    uVar8 = ((ushort *)param_4[1])[1] & 0xf;
    iVar17 = (int)((iVar35 - uVar8) * 0x10000) >> 0x10;
    iVar12 = (int)((local_68 - uVar8) * 0x10000) >> 0x10;
    uVar8 = *(ushort *)param_4[1] & 0xf;
    iVar35 = 0x108 - uVar8;
    if (iVar17 < iVar12) {
      iVar9 = uVar8 * -0x10000;
      do {
        iVar34 = iVar9;
        while (iVar11 = iVar34 >> 0x10, iVar11 < iVar35 * 0x10000 >> 0x10) {
          uVar1 = *(ushort *)(uVar27 * 2 + DAT_1f80000c);
          uVar26 = (uint)uVar1;
          if ((uVar26 & 0x3ff) != uVar18) {
            iVar10 = (uVar26 & 0xf) << 4;
            if (DAT_1f800010 == 0) {
              *(undefined2 *)((int)param_3 + 0xe) = DAT_801dfd68;
            }
            else {
              *(undefined2 *)((int)param_3 + 0xe) = DAT_801dfd88;
            }
            uVar20 = (undefined1)iVar10;
            uVar24 = (undefined1)(uVar26 & 0xf0);
            uVar25 = (undefined2)((uint)iVar34 >> 0x10);
            if ((uVar1 & 0x3c00) == 0) {
              *(undefined2 *)((int)param_3 + 0x10) = 0x10;
              *(undefined2 *)((int)param_3 + 0x12) = 0x10;
              *(undefined1 *)((int)param_3 + 0xc) = uVar20;
              *(undefined1 *)((int)param_3 + 0xd) = uVar24;
              *(undefined2 *)((int)param_3 + 8) = uVar25;
              *(short *)((int)param_3 + 10) = (short)iVar17;
              DAT_1f800008 = DAT_1f800000;
            }
            else {
              if ((uVar26 & 0x3c00) != 0x3c00) {
                FUN_8017ccb0(param_3,iVar10,uVar26 & 0xf0,iVar11,iVar17,0x1f800000,uVar26 & 0x3c00,
                             *(undefined2 *)((int)param_3 + 0xe),uVar8);
                param_3 = (void *)((int)param_3 + 0x50);
                goto LAB_8017bb8c;
              }
              *(undefined2 *)((int)param_3 + 0x10) = 0x10;
              *(undefined2 *)((int)param_3 + 0x12) = 0x10;
              *(undefined1 *)((int)param_3 + 0xc) = uVar20;
              *(undefined1 *)((int)param_3 + 0xd) = uVar24;
              *(undefined2 *)((int)param_3 + 8) = uVar25;
              *(short *)((int)param_3 + 10) = (short)iVar17;
              DAT_1f800008 = DAT_1f800004;
            }
            AddPrim(DAT_1f800008,param_3);
            param_3 = (void *)((int)param_3 + 0x14);
          }
LAB_8017bb8c:
          uVar27 = (int)((uVar27 + 2) * 0x10000) >> 0x10;
          iVar34 = (iVar11 + 0x10) * 0x10000;
        }
        iVar17 = (iVar17 + 0x10) * 0x10000 >> 0x10;
        uVar27 = (int)((uVar27 + 0x20) * 0x10000) >> 0x10;
      } while (iVar17 < iVar12);
    }
  }
  *(undefined1 *)(DAT_1f800018[1] + 0xd) = 0;
  if (DAT_1f800008 != (int *)0x0) {
    *(undefined1 *)(DAT_1f800018[1] + 0xd) = 1;
    iVar35 = 0;
    if (*DAT_1f800008 != *(int *)(param_1 + 0x70)) {
      piVar23 = (int *)(param_1 + 0x74);
      iVar12 = 0x10000;
      do {
        iVar35 = iVar12 >> 0x10;
        if (0x28 < iVar35) break;
        iVar17 = *piVar23;
        piVar23 = piVar23 + 1;
        iVar12 = iVar12 + 0x10000;
      } while (*DAT_1f800008 != iVar17);
    }
    switch(*DAT_1f800018) {
    case 0:
      if (iVar35 < 0x1f) {
        *(undefined1 *)(DAT_1f800018[1] + 0xc) = 0x16;
        return param_3;
      }
      iVar35 = DAT_1f800018[1];
      uVar20 = 0x1f;
      break;
    case 1:
      if (iVar35 < 0x1b) {
        *(undefined1 *)(DAT_1f800018[1] + 0xc) = 0x12;
        return param_3;
      }
      iVar35 = DAT_1f800018[1];
      uVar20 = 0x1b;
      break;
    case 2:
      if (iVar35 < 0x24) {
        *(undefined1 *)(DAT_1f800018[1] + 0xc) = 4;
        return param_3;
      }
      iVar35 = DAT_1f800018[1];
      uVar20 = 0x24;
      break;
    case 3:
      if (iVar35 < 9) {
        *(undefined1 *)(DAT_1f800018[1] + 0xc) = 0;
        return param_3;
      }
      iVar35 = DAT_1f800018[1];
      uVar20 = 9;
      break;
    default:
      goto switchD_8017bcb8_caseD_4;
    case 7:
      iVar35 = DAT_1f800018[1];
      uVar20 = 0xd;
    }
    *(undefined1 *)(iVar35 + 0xc) = uVar20;
  }
switchD_8017bcb8_caseD_4:
  return param_3;
}



