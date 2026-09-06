
void FUN_80183244(int param_1,uint param_2)

{
  undefined1 uVar1;
  u_short uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  void *p;
  int iVar10;
  void *ot;
  
  p = (void *)(param_1 + 0x2430);
  ot = (void *)(param_1 + 0xa4);
  if ((param_2 & 0x10000) == 0) {
    DAT_1f800024 = (short)param_2;
    if (DAT_1f800024 < 0x101) {
      iVar3 = FUN_80183048(0x1f800000);
      *(undefined1 *)(param_1 + 0x243c) = *(undefined1 *)(iVar3 + 8);
      *(undefined1 *)(param_1 + 0x243d) = *(undefined1 *)(iVar3 + 10);
      *(undefined1 *)(param_1 + 0x2444) = *(undefined1 *)(iVar3 + 0xc);
      *(undefined1 *)(param_1 + 0x2445) = *(undefined1 *)(iVar3 + 0xe);
      *(undefined1 *)(param_1 + 0x244c) = *(undefined1 *)(iVar3 + 0x10);
      *(undefined1 *)(param_1 + 0x244d) = *(undefined1 *)(iVar3 + 0x12);
      *(undefined1 *)(param_1 + 0x2454) = *(undefined1 *)(iVar3 + 0x14);
      uVar1 = *(undefined1 *)(iVar3 + 0x16);
      *(undefined2 *)(param_1 + 0x2438) = 0;
      *(undefined2 *)(param_1 + 0x243a) = 0;
      *(undefined2 *)(param_1 + 0x2440) = 0x100;
      *(undefined2 *)(param_1 + 0x2442) = 0;
      *(undefined2 *)(param_1 + 0x2448) = 0;
      *(undefined2 *)(param_1 + 0x244a) = 0xe0;
      *(undefined2 *)(param_1 + 0x2450) = 0x100;
      *(undefined2 *)(param_1 + 0x2452) = 0xe0;
      *(undefined1 *)(param_1 + 0x2455) = uVar1;
    }
    else if ((DAT_8019ee2c & 0x1000) == 0) {
      iVar3 = DAT_1f800024 + -0x100;
      if (0x100 < iVar3) {
        iVar3 = 0x100;
      }
      DAT_1f800024 = 0x100;
      iVar5 = FUN_80183048(0x1f800000);
      *(undefined1 *)(param_1 + 0x243c) = *(undefined1 *)(iVar5 + 8);
      *(undefined1 *)(param_1 + 0x243d) = *(undefined1 *)(iVar5 + 10);
      *(undefined1 *)(param_1 + 0x2444) = *(undefined1 *)(iVar5 + 0xc);
      *(undefined1 *)(param_1 + 0x2445) = *(undefined1 *)(iVar5 + 0xe);
      *(undefined1 *)(param_1 + 0x244c) = *(undefined1 *)(iVar5 + 0x10);
      *(undefined1 *)(param_1 + 0x244d) = *(undefined1 *)(iVar5 + 0x12);
      *(undefined1 *)(param_1 + 0x2454) = *(undefined1 *)(iVar5 + 0x14);
      iVar10 = iVar3 * 0x5a;
      *(undefined1 *)(param_1 + 0x2455) = *(undefined1 *)(iVar5 + 0x16);
      if (iVar10 < 0) {
        iVar10 = iVar10 + 0xff;
      }
      iVar8 = iVar3 * 0x4f;
      sVar7 = (short)((uint)iVar10 >> 8);
      *(short *)(iVar5 + 0x18) = sVar7;
      if (iVar8 < 0) {
        iVar8 = iVar8 + 0xff;
      }
      *(short *)(iVar5 + 0x1a) = (short)((uint)iVar8 >> 8);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0x1f;
      }
      sVar4 = (short)(iVar3 >> 5);
      *(short *)(iVar5 + 0x1c) = sVar4;
      *(short *)(iVar5 + 0x1e) = sVar4;
      *(short *)(param_1 + 0x2438) = sVar7 - sVar4;
      *(short *)(param_1 + 0x243a) = *(short *)(iVar5 + 0x1a) + *(short *)(iVar5 + 0x1e);
      *(ushort *)(param_1 + 0x2440) =
           ((*(ushort *)(iVar5 + 0x18) - *(short *)(iVar5 + 0x1c)) + 0x100) -
           (short)((int)((uint)*(ushort *)(iVar5 + 0x18) << 0x10) >> 0xf);
      *(short *)(param_1 + 0x2442) = *(short *)(iVar5 + 0x1a) + *(short *)(iVar5 + 0x1e);
      *(short *)(param_1 + 0x2448) = *(short *)(iVar5 + 0x18) - *(short *)(iVar5 + 0x1c);
      *(ushort *)(param_1 + 0x244a) =
           (*(ushort *)(iVar5 + 0x1a) + *(short *)(iVar5 + 0x1e) + 0xe0) -
           (short)((int)((uint)*(ushort *)(iVar5 + 0x1a) << 0x10) >> 0xf);
      *(ushort *)(param_1 + 0x2450) =
           ((*(ushort *)(iVar5 + 0x18) - *(short *)(iVar5 + 0x1c)) + 0x100) -
           (short)((int)((uint)*(ushort *)(iVar5 + 0x18) << 0x10) >> 0xf);
      *(ushort *)(param_1 + 0x2452) =
           (*(ushort *)(iVar5 + 0x1a) + *(short *)(iVar5 + 0x1e) + 0xe0) -
           (short)((int)((uint)*(ushort *)(iVar5 + 0x1a) << 0x10) >> 0xf);
    }
    else {
      DAT_1f800024 = (short)(param_2 - 0x100);
      if (0x100 < (int)((param_2 - 0x100) * 0x10000) >> 0x10) {
        DAT_1f800024 = 0x100;
      }
      iVar5 = (int)DAT_1f800024;
      iVar3 = iVar5;
      if (iVar5 < 0) {
        iVar3 = iVar5 + 7;
      }
      DAT_1f800000 = iVar3 >> 3;
      iVar5 = iVar5 * 0x38;
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xff;
      }
      DAT_1f800004 = iVar5 >> 8;
      *(undefined2 *)(param_1 + 0x2438) = 0;
      *(undefined2 *)(param_1 + 0x243a) = 0;
      *(undefined2 *)(param_1 + 0x2440) = 0x100;
      *(undefined2 *)(param_1 + 0x2442) = 0;
      *(undefined2 *)(param_1 + 0x2448) = 0;
      *(undefined2 *)(param_1 + 0x244a) = 0xe0;
      *(undefined2 *)(param_1 + 0x2450) = 0x100;
      *(undefined2 *)(param_1 + 0x2452) = 0xe0;
      *(char *)(param_1 + 0x243c) = (' ' - (char)DAT_1f800000) * '\x02';
      *(char *)(param_1 + 0x243d) = '8' - (char)DAT_1f800004;
      *(char *)(param_1 + 0x2444) = (char)DAT_1f800000 * '\x02' + -0x42;
      *(char *)(param_1 + 0x2445) = '8' - (char)DAT_1f800004;
      *(char *)(param_1 + 0x244c) = (' ' - (char)DAT_1f800000) * '\x02';
      *(char *)(param_1 + 0x244d) = (char)DAT_1f800004 + -0x5c;
      *(char *)(param_1 + 0x2454) = (char)DAT_1f800000 * '\x02' + -0x42;
      *(char *)(param_1 + 0x2455) = (char)DAT_1f800004 + -0x5c;
    }
    uVar2 = GetTPage(1,0,0x100,0);
    *(u_short *)(param_1 + 0x2446) = uVar2;
    AddPrim(ot,p);
  }
  else {
    iVar5 = 0x20 - (DAT_8019ee50 & 0xffff);
    iVar3 = 0x20 - ((int)DAT_8019ee50 >> 2);
    DAT_1f800008._2_2_ = (undefined2)iVar3;
    DAT_1f800008._0_2_ = (short)iVar5;
    iVar3 = (iVar3 * 0x10000 >> 0x10) - (iVar5 * 0x10000 >> 0x10);
    sVar7 = (short)iVar3;
    DAT_1f80000c._2_2_ = sVar7 * 3;
    if (DAT_8019ee50 == 0x10) {
      iVar5 = (iVar3 * 0x30000 >> 0x10) + 0x38;
      DAT_1f800010._2_2_ = sVar7 * -3 + 0x3c;
      DAT_1f80000c._0_2_ = 0x13;
      DAT_1f800010._0_2_ = (short)((iVar3 * 0x100) / 0xc);
      DAT_1f800014._0_2_ =
           (short)((ulonglong)((longlong)iVar5 * 0x2aaaaaab) >> 0x20) - (short)(iVar5 >> 0x1f);
      iVar3 = 0;
      do {
        iVar10 = iVar3 + 1;
        DAT_1f800014._2_2_ = DAT_1f800010._2_2_;
        iVar5 = 0;
        do {
          DAT_1f800018._0_2_ = (short)DAT_1f80000c * (short)iVar5;
          iVar9 = iVar5 + 1;
          DAT_1f800018._2_2_ = (short)DAT_1f80000c * (short)iVar9;
          iVar8 = (short)DAT_1f800010 * iVar5;
          iVar6 = (short)DAT_1f800010 * iVar9;
          if (iVar8 < 0) {
            iVar8 = iVar8 + 0xff;
          }
          DAT_1f80001c._0_2_ = (short)DAT_1f800008 + (short)((uint)iVar8 >> 8);
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0xff;
          }
          DAT_1f80001c._2_2_ = (short)DAT_1f800008 + (short)((uint)iVar6 >> 8);
          iVar5 = (int)(short)DAT_1f800014 * (int)(short)(&DAT_8019aa30)[iVar5];
          if (iVar5 < 0) {
            iVar5 = iVar5 + 0xff;
          }
          DAT_1f800020._2_2_ = (short)((uint)iVar5 >> 8);
          DAT_1f800020._0_2_ = DAT_1f800014._2_2_;
          DAT_1f800014._2_2_ = DAT_1f800014._2_2_ + DAT_1f800020._2_2_;
          p = (void *)FUN_80182e54(0x1f800000,iVar3,p,ot);
          iVar5 = iVar9;
        } while (iVar9 < 0xc);
        iVar3 = iVar10;
      } while (iVar10 < 0x10);
    }
    else {
      iVar5 = (iVar3 * 0x30000 >> 0x10) + 0x38;
      DAT_1f80000c._0_2_ = 0x26;
      DAT_1f800010._2_2_ = (sVar7 * -3 + 0x49) - (short)((int)DAT_8019ee50 >> 1);
      DAT_1f800010._0_2_ =
           (short)((ulonglong)((longlong)(iVar3 * 0x100) * 0x2aaaaaab) >> 0x20) -
           (short)(iVar3 * 0x100 >> 0x1f);
      DAT_1f800014._0_2_ =
           (short)((ulonglong)((longlong)iVar5 * 0x55555556) >> 0x20) - (short)(iVar5 >> 0x1f);
      iVar3 = 0;
      do {
        iVar10 = iVar3 + 1;
        DAT_1f800014._2_2_ = DAT_1f800010._2_2_;
        iVar5 = 0;
        do {
          DAT_1f800018._0_2_ = (short)DAT_1f80000c * (short)iVar5;
          iVar9 = iVar5 + 1;
          DAT_1f800018._2_2_ = (short)DAT_1f80000c * (short)iVar9;
          iVar8 = (short)DAT_1f800010 * iVar5;
          iVar6 = (short)DAT_1f800010 * iVar9;
          if (iVar8 < 0) {
            iVar8 = iVar8 + 0xff;
          }
          DAT_1f80001c._0_2_ = (short)DAT_1f800008 + (short)((uint)iVar8 >> 8);
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0xff;
          }
          DAT_1f80001c._2_2_ = (short)DAT_1f800008 + (short)((uint)iVar6 >> 8);
          iVar5 = (int)(short)DAT_1f800014 *
                  (int)*(short *)(&DAT_8019aa48 + (((int)DAT_8019ee50 >> 1) * 6 + iVar5) * 2);
          if (iVar5 < 0) {
            iVar5 = iVar5 + 0xff;
          }
          DAT_1f800020._2_2_ = (short)((uint)iVar5 >> 8);
          DAT_1f800020._0_2_ = DAT_1f800014._2_2_;
          DAT_1f800014._2_2_ = DAT_1f800014._2_2_ + DAT_1f800020._2_2_;
          p = (void *)FUN_80182e54(0x1f800000,iVar3,p,ot);
          iVar5 = iVar9;
        } while (iVar9 < 6);
        iVar3 = iVar10;
      } while (iVar10 < 0x10);
    }
  }
  return;
}



