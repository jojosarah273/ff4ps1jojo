
void * FUN_8017a208(int param_1,int param_2,void *param_3,int *param_4)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  undefined1 uVar8;
  int iVar9;
  int *piVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined2 uVar15;
  int iVar16;
  int iVar17;
  
  DAT_1f800000 = (int *)(param_1 + 0x70);
  DAT_1f800008 = (int *)0x0;
  uVar1 = *(ushort *)(param_2 + 0x7fe);
  DAT_1f800020 = (uint)DAT_800d2105;
  DAT_1f80001c = uVar1 & 0x1000;
  uVar6 = uVar1 & 0x3ff;
  if (((DAT_800d2131 & 0xf) == 0) ||
     (bVar7 = DAT_800d2131 & (DAT_800d212d ^ 0xf) & 0xf, (DAT_800d212d & 0xf) == 0)) {
    bVar7 = 0;
  }
  DAT_1f800010 = 0;
  switch(*param_4) {
  case 0:
    DAT_1f800004 = (int *)(param_1 + 0xec);
    DAT_1f800000 = (int *)(param_1 + 200);
    bVar7 = bVar7 & 1;
    break;
  case 1:
    DAT_1f800004 = (int *)(param_1 + 0xdc);
    DAT_1f800000 = (int *)(param_1 + 0xb8);
    bVar7 = bVar7 & 2;
    break;
  case 2:
    if ((DAT_800d2105 & 8) == 0) {
      DAT_1f800004 = (int *)(param_1 + 0xa4);
    }
    else {
      DAT_1f800004 = (int *)(param_1 + 0x100);
    }
    DAT_1f800000 = (int *)(param_1 + 0x80);
    bVar7 = bVar7 & 4;
    break;
  case 3:
    bVar7 = bVar7 & 8;
    DAT_1f800004 = (int *)(param_1 + 0x94);
    break;
  default:
    goto switchD_8017a2f8_caseD_4;
  case 7:
    DAT_1f800000 = (int *)(param_1 + 0xa4);
    goto switchD_8017a2f8_caseD_4;
  }
  if (bVar7 != 0) {
    DAT_1f800010 = 1;
  }
switchD_8017a2f8_caseD_4:
  bVar2 = false;
  if (((DAT_800d0203 == '\x02') && (bVar2 = true, DAT_800d004a != '\x0f')) && (DAT_8019ee84 == 0)) {
    bVar2 = false;
  }
  uVar3 = (uint)*(ushort *)(param_4[1] + 6);
  uVar13 = (uVar3 & 0xf8) << 0x10;
  uVar3 = (int)((uVar3 + *(ushort *)(param_4[1] + 10) + 0x10) * 0x10000) >> 0x10;
  iVar17 = (int)uVar13 >> 0x10;
  if (0xf8 < (int)uVar3) {
    uVar3 = 0xf8;
  }
  uVar3 = uVar3 & 0xf8;
  uVar13 = uVar13 >> 0x13;
  uVar13 = uVar13 << 5 | uVar13;
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
      param_3 = (void *)FUN_80179fbc(param_3,0x1f800000,uVar13,uVar6,iVar17,uVar3);
    }
    else {
      uVar14 = ((ushort *)param_4[1])[1] & 7;
      iVar17 = (int)((iVar17 - uVar14) * 0x10000) >> 0x10;
      iVar12 = (int)((uVar3 - uVar14) * 0x10000) >> 0x10;
      uVar3 = *(ushort *)param_4[1] & 7;
      iVar5 = (int)((0x108 - uVar3) * 0x10000) >> 0x10;
      if ((void *)((int)param_3 +
                  (short)((short)(iVar12 - iVar17 >> 3) * (short)((int)(iVar5 + uVar3) >> 3)) * 0x14
                  ) < DAT_8019ee88) {
        for (; iVar17 < iVar12; iVar17 = (iVar17 + 8) * 0x10000 >> 0x10) {
          for (iVar16 = (int)(short)-(short)uVar3; iVar16 < iVar5;
              iVar16 = (iVar16 + 8) * 0x10000 >> 0x10) {
            uVar1 = *(ushort *)(uVar13 * 2 + DAT_1f80000c);
            uVar14 = (uint)uVar1;
            if ((uVar14 & 0x3ff) != uVar6) {
              *(undefined2 *)((int)param_3 + 0x10) = 8;
              *(undefined2 *)((int)param_3 + 0x12) = 8;
              *(char *)((int)param_3 + 0xc) = (char)uVar1 << 3;
              *(byte *)((int)param_3 + 0xd) = (byte)(uVar1 >> 2) & 0xf8;
              if (DAT_1f800014 == 0) {
                if (DAT_1f800010 == 0) {
                  uVar4 = uVar1 >> 9 & 0xe;
                }
                else {
                  uVar4 = ((uVar1 >> 10 & 7) + 0x10) * 2;
                }
              }
              else {
                uVar4 = ((uVar1 >> 10 & 7) + DAT_1f800014) * 2;
              }
              *(undefined2 *)((int)param_3 + 0xe) = *(undefined2 *)((int)&DAT_801dfd68 + uVar4);
              *(short *)((int)param_3 + 8) = (short)iVar16;
              *(short *)((int)param_3 + 10) = (short)iVar17;
              if ((bVar2) && (0x8c < iVar17)) {
                uVar14 = uVar14 & 0xdfff;
              }
              piVar10 = DAT_1f800000;
              if ((uVar14 & 0x2000) != 0) {
                piVar10 = DAT_1f800004;
              }
              DAT_1f800008 = piVar10 + (uVar14 >> 0xe);
              AddPrim(DAT_1f800008,param_3);
              param_3 = (void *)((int)param_3 + 0x14);
            }
            uVar13 = (int)((uVar13 + 1) * 0x10000) >> 0x10;
          }
        }
      }
      else {
        DAT_8019ee70 = 300;
      }
    }
  }
  else {
    uVar14 = ((ushort *)param_4[1])[1] & 0xf;
    iVar17 = (int)((iVar17 - uVar14) * 0x10000) >> 0x10;
    iVar12 = (int)((uVar3 - uVar14) * 0x10000) >> 0x10;
    uVar3 = *(ushort *)param_4[1] & 0xf;
    if (iVar17 < iVar12) {
      do {
        iVar5 = uVar3 * -0x10000;
        while (iVar16 = iVar5 >> 0x10, iVar16 < (int)((0x108 - uVar3) * 0x10000) >> 0x10) {
          uVar1 = *(ushort *)(uVar13 * 2 + DAT_1f80000c);
          uVar14 = (uint)uVar1;
          if ((uVar14 & 0x3ff) != uVar6) {
            iVar9 = (uVar14 & 0xf) << 4;
            if (DAT_1f800010 == 0) {
              *(undefined2 *)((int)param_3 + 0xe) = DAT_801dfd68;
            }
            else {
              *(undefined2 *)((int)param_3 + 0xe) = DAT_801dfd88;
            }
            uVar8 = (undefined1)iVar9;
            uVar11 = (undefined1)(uVar14 & 0xf0);
            uVar15 = (undefined2)((uint)iVar5 >> 0x10);
            if ((uVar1 & 0x3c00) == 0) {
              *(undefined2 *)((int)param_3 + 0x10) = 0x10;
              *(undefined2 *)((int)param_3 + 0x12) = 0x10;
              *(undefined1 *)((int)param_3 + 0xc) = uVar8;
              *(undefined1 *)((int)param_3 + 0xd) = uVar11;
              *(undefined2 *)((int)param_3 + 8) = uVar15;
              *(short *)((int)param_3 + 10) = (short)iVar17;
              DAT_1f800008 = DAT_1f800000;
            }
            else {
              if ((uVar14 & 0x3c00) != 0x3c00) {
                FUN_8017ccb0(param_3,iVar9,uVar14 & 0xf0,iVar16,iVar17,0x1f800000,uVar14 & 0x3c00,
                             *(undefined2 *)((int)param_3 + 0xe));
                param_3 = (void *)((int)param_3 + 0x50);
                goto LAB_8017a8c8;
              }
              *(undefined2 *)((int)param_3 + 0x10) = 0x10;
              *(undefined2 *)((int)param_3 + 0x12) = 0x10;
              *(undefined1 *)((int)param_3 + 0xc) = uVar8;
              *(undefined1 *)((int)param_3 + 0xd) = uVar11;
              *(undefined2 *)((int)param_3 + 8) = uVar15;
              *(short *)((int)param_3 + 10) = (short)iVar17;
              DAT_1f800008 = DAT_1f800004;
            }
            AddPrim(DAT_1f800008,param_3);
            param_3 = (void *)((int)param_3 + 0x14);
          }
LAB_8017a8c8:
          uVar13 = (int)((uVar13 + 2) * 0x10000) >> 0x10;
          iVar5 = (iVar16 + 0x10) * 0x10000;
        }
        uVar13 = (int)((uVar13 + 0x20) * 0x10000) >> 0x10;
        iVar17 = (iVar17 + 0x10) * 0x10000 >> 0x10;
      } while (iVar17 < iVar12);
    }
  }
  *(undefined1 *)(DAT_1f800018[1] + 0xd) = 0;
  if (DAT_1f800008 != (int *)0x0) {
    *(undefined1 *)(DAT_1f800018[1] + 0xd) = 1;
    iVar17 = 0;
    if (*DAT_1f800008 != *(int *)(param_1 + 0x70)) {
      iVar12 = 0x10000;
      piVar10 = (int *)(param_1 + 0x74);
      do {
        iVar17 = iVar12 >> 0x10;
        iVar12 = iVar12 + 0x10000;
        if (0x28 < iVar17) break;
        iVar5 = *piVar10;
        piVar10 = piVar10 + 1;
      } while (*DAT_1f800008 != iVar5);
    }
    switch(*DAT_1f800018) {
    case 0:
      if (iVar17 < 0x1f) {
        *(undefined1 *)(DAT_1f800018[1] + 0xc) = 0x16;
        return param_3;
      }
      iVar17 = DAT_1f800018[1];
      uVar8 = 0x1f;
      break;
    case 1:
      if (iVar17 < 0x1b) {
        *(undefined1 *)(DAT_1f800018[1] + 0xc) = 0x12;
        return param_3;
      }
      iVar17 = DAT_1f800018[1];
      uVar8 = 0x1b;
      break;
    case 2:
      if (iVar17 < 0x24) {
        *(undefined1 *)(DAT_1f800018[1] + 0xc) = 4;
        return param_3;
      }
      iVar17 = DAT_1f800018[1];
      uVar8 = 0x24;
      break;
    case 3:
      if (iVar17 < 9) {
        *(undefined1 *)(DAT_1f800018[1] + 0xc) = 0;
        return param_3;
      }
      iVar17 = DAT_1f800018[1];
      uVar8 = 9;
      break;
    default:
      goto switchD_8017a9ec_caseD_4;
    case 7:
      iVar17 = DAT_1f800018[1];
      uVar8 = 0xd;
    }
    *(undefined1 *)(iVar17 + 0xc) = uVar8;
  }
switchD_8017a9ec_caseD_4:
  return param_3;
}



