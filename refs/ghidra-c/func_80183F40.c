
void FUN_80183f40(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  u_short uVar3;
  short sVar4;
  void *ot;
  short *psVar5;
  void *p;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  
  p = (void *)(param_1 + 0x2430);
  ot = (void *)(param_1 + 0xa4);
  if (DAT_800d063d == 0x70) {
    uVar9 = (uint)CONCAT11(DAT_800d0062,DAT_800d0061);
    if (uVar9 == 0) {
      uVar9 = 1;
    }
    if (uVar9 == 0) {
      trap(7);
    }
    DAT_1f80000c._0_2_ = (short)(0x1500 / uVar9 << 1);
    DAT_1f800008._0_2_ = -DAT_8019ee60;
    DAT_1f800008._2_2_ = (0x1f - DAT_8019ee68) - (short)(0x1500 / uVar9);
    *(short *)(param_1 + 0x2438) = (short)DAT_1f800008;
    *(short *)(param_1 + 0x243a) = DAT_1f800008._2_2_;
    *(short *)(param_1 + 0x2440) = (short)DAT_1f800008 + (short)DAT_1f80000c;
    *(short *)(param_1 + 0x2442) = DAT_1f800008._2_2_;
    *(short *)(param_1 + 0x2448) = (short)DAT_1f800008;
    *(short *)(param_1 + 0x244a) = DAT_1f800008._2_2_ + (short)DAT_1f80000c;
    *(short *)(param_1 + 0x2450) = (short)DAT_1f800008 + (short)DAT_1f80000c;
    sVar10 = (short)DAT_1f80000c;
    sVar4 = DAT_1f800008._2_2_;
    *(undefined1 *)(param_1 + 0x243c) = 0;
    *(undefined1 *)(param_1 + 0x243d) = 0;
    *(undefined1 *)(param_1 + 0x2444) = 0x30;
    *(undefined1 *)(param_1 + 0x2445) = 0;
    *(undefined1 *)(param_1 + 0x244c) = 0;
                    /* Possible PsyQ macro: setPolyG3() */
    *(undefined1 *)(param_1 + 0x244d) = 0x30;
    *(undefined1 *)(param_1 + 0x2454) = 0x30;
                    /* Possible PsyQ macro: setPolyG3() */
    *(undefined1 *)(param_1 + 0x2455) = 0x30;
    *(short *)(param_1 + 0x2452) = sVar4 + sVar10;
  }
  else if (DAT_800d063d < 0x71) {
    if (DAT_800d063d != 0x6e) {
      return;
    }
    DAT_1f800010._2_2_ = 0x40;
    iVar8 = 0;
    do {
      iVar6 = 0;
      DAT_1f800014._2_2_ = DAT_1f800010._2_2_;
      psVar5 = &DAT_8019aaa8;
      DAT_1f800018._2_2_ = 0x40;
      DAT_1f800018._0_2_ = 0x30;
      DAT_1f80001c._2_2_ = 0x10;
      DAT_1f80001c._0_2_ = 0x14;
      do {
        DAT_1f800020._2_2_ = *psVar5;
        psVar5 = psVar5 + 1;
        sVar12 = (short)DAT_1f80001c + 4;
        sVar11 = DAT_1f80001c._2_2_ + 4;
        sVar10 = (short)DAT_1f800018 + -0x10;
        sVar4 = DAT_1f800018._2_2_ + -0x10;
        DAT_1f800014._2_2_ = DAT_1f800014._2_2_ - DAT_1f800020._2_2_;
        iVar6 = iVar6 + 1;
        DAT_1f800020._0_2_ = DAT_1f800014._2_2_;
        p = (void *)FUN_80182e54(0x1f800000,iVar8,p,ot);
        DAT_1f800018._2_2_ = sVar4;
        DAT_1f800018._0_2_ = sVar10;
        DAT_1f80001c._2_2_ = sVar11;
        DAT_1f80001c._0_2_ = sVar12;
      } while (iVar6 < 4);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x10);
    DAT_1f800010._2_2_ = 0xa0;
    iVar8 = 0;
    iVar6 = 1;
    do {
      psVar5 = &DAT_8019aaa8;
      iVar7 = 3;
      DAT_1f800014._2_2_ = DAT_1f800010._2_2_;
      sVar4 = 0xa0;
      sVar10 = 0xb0;
      sVar11 = 0x10;
      sVar12 = 0x14;
      do {
        DAT_1f800020._2_2_ = *psVar5;
        psVar5 = psVar5 + 1;
        DAT_1f800020._0_2_ = DAT_1f800014._2_2_;
        DAT_1f800014._2_2_ = DAT_1f800014._2_2_ + DAT_1f800020._2_2_;
        iVar7 = iVar7 + -1;
        DAT_1f800018._0_2_ = sVar4;
        DAT_1f800018._2_2_ = sVar10;
        DAT_1f80001c._0_2_ = sVar11;
        DAT_1f80001c._2_2_ = sVar12;
        p = (void *)FUN_80182e54(0x1f800000,iVar8,p,ot);
        sVar4 = sVar4 + 0x10;
        sVar10 = sVar10 + 0x10;
        sVar11 = sVar11 + 4;
        sVar12 = sVar12 + 4;
      } while (-1 < iVar7);
      bVar1 = iVar6 < 0x10;
      iVar8 = iVar6;
      iVar6 = iVar6 + 1;
    } while (bVar1);
    *(undefined2 *)((int)p + 0x10) = 0x100;
    *(undefined2 *)((int)p + 0x20) = 0x100;
    *(undefined2 *)((int)p + 8) = 0;
    *(undefined2 *)((int)p + 10) = 0x40;
    *(undefined2 *)((int)p + 0x12) = 0x40;
    *(undefined2 *)((int)p + 0x18) = 0;
    *(undefined2 *)((int)p + 0x1a) = 0xa0;
    *(undefined2 *)((int)p + 0x22) = 0xa0;
    *(undefined1 *)((int)p + 0xc) = 0;
                    /* Possible PsyQ macro: setLineF2() */
    *(undefined1 *)((int)p + 0xd) = 0x40;
    *(undefined1 *)((int)p + 0x14) = 0xff;
                    /* Possible PsyQ macro: setLineF2() */
    *(undefined1 *)((int)p + 0x15) = 0x40;
    *(undefined1 *)((int)p + 0x1c) = 0;
    *(undefined1 *)((int)p + 0x1d) = 0xa0;
    *(undefined1 *)((int)p + 0x24) = 0xff;
    *(undefined1 *)((int)p + 0x25) = 0xa0;
  }
  else {
    if (DAT_800d063d != 0x72) {
      return;
    }
    if (DAT_800da11f != '\0') {
      DAT_1f800004 = DAT_8019ee5c;
      if (DAT_8019ee58 < 0x101) {
        iVar8 = DAT_8019ee58 * 0xb5;
        if (iVar8 < 0) {
          iVar8 = iVar8 + 0xff;
        }
        DAT_1f800000 = iVar8 >> 8;
      }
      else {
        DAT_1f800000 = 0xb500 / DAT_8019ee58;
        if (DAT_8019ee58 == 0) {
          trap(7);
        }
      }
      sVar4 = FUN_80182ddc(DAT_1f800000,(int)((0xa00 - (DAT_8019ee5c & 0xffff)) * 0x10000) >> 0x10);
      DAT_1f800008._0_2_ = sVar4 + 0x80;
      sVar4 = FUN_80182e18(DAT_1f800000,(int)((0xa00 - (DAT_1f800004 & 0xffff)) * 0x10000) >> 0x10);
      DAT_1f800008._2_2_ = sVar4 + 0x80;
      sVar4 = FUN_80182ddc(DAT_1f800000,(int)((0xe00 - (DAT_1f800004 & 0xffff)) * 0x10000) >> 0x10);
      DAT_1f80000c._0_2_ = sVar4 + 0x80;
      sVar4 = FUN_80182e18(DAT_1f800000,(int)((0xe00 - (DAT_1f800004 & 0xffff)) * 0x10000) >> 0x10);
      DAT_1f80000c._2_2_ = sVar4 + 0x80;
      sVar4 = FUN_80182ddc(DAT_1f800000,(int)((0x600 - (DAT_1f800004 & 0xffff)) * 0x10000) >> 0x10);
      DAT_1f800010._0_2_ = sVar4 + 0x80;
      sVar4 = FUN_80182e18(DAT_1f800000,(int)((0x600 - (DAT_1f800004 & 0xffff)) * 0x10000) >> 0x10);
      DAT_1f800010._2_2_ = sVar4 + 0x80;
      sVar4 = FUN_80182ddc(DAT_1f800000,(int)((0x200 - (DAT_1f800004 & 0xffff)) * 0x10000) >> 0x10);
      DAT_1f800014._0_2_ = sVar4 + 0x80;
      sVar4 = FUN_80182e18(DAT_1f800000,(int)((0x200 - (DAT_1f800004 & 0xffff)) * 0x10000) >> 0x10);
      DAT_1f800014._2_2_ = sVar4 + 0x80;
      if (DAT_8019ee58 < 0x101) {
        *(undefined1 *)(param_1 + 0x243c) = (undefined1)DAT_1f800008;
        *(undefined1 *)(param_1 + 0x243d) = DAT_1f800008._2_1_;
        *(undefined1 *)(param_1 + 0x2444) = (undefined1)DAT_1f80000c;
        *(undefined1 *)(param_1 + 0x2445) = DAT_1f80000c._2_1_;
        *(undefined1 *)(param_1 + 0x244c) = (undefined1)DAT_1f800010;
        *(undefined1 *)(param_1 + 0x244d) = DAT_1f800010._2_1_;
        *(undefined1 *)(param_1 + 0x2454) = (undefined1)DAT_1f800014;
        uVar2 = DAT_1f800014._2_1_;
        *(undefined2 *)(param_1 + 0x2438) = 0;
        *(undefined2 *)(param_1 + 0x243a) = 0;
        *(undefined2 *)(param_1 + 0x2440) = 0x100;
        *(undefined2 *)(param_1 + 0x2442) = 0;
        *(undefined2 *)(param_1 + 0x2448) = 0;
        *(undefined2 *)(param_1 + 0x244a) = 0x100;
        *(undefined2 *)(param_1 + 0x2450) = 0x100;
        *(undefined2 *)(param_1 + 0x2452) = 0x100;
        *(undefined1 *)(param_1 + 0x2455) = uVar2;
      }
      else {
        *(short *)(param_1 + 0x2438) = (short)DAT_1f800008;
        *(short *)(param_1 + 0x243a) = DAT_1f800008._2_2_;
        *(short *)(param_1 + 0x2440) = (short)DAT_1f80000c;
        *(short *)(param_1 + 0x2442) = DAT_1f80000c._2_2_;
        *(short *)(param_1 + 0x2448) = (short)DAT_1f800010;
        *(short *)(param_1 + 0x244a) = DAT_1f800010._2_2_;
        *(short *)(param_1 + 0x2450) = (short)DAT_1f800014;
        sVar4 = DAT_1f800014._2_2_;
        *(undefined1 *)(param_1 + 0x243c) = 0;
        *(undefined1 *)(param_1 + 0x243d) = 0;
        *(undefined1 *)(param_1 + 0x2444) = 0xff;
        *(undefined1 *)(param_1 + 0x2445) = 0;
        *(undefined1 *)(param_1 + 0x244c) = 0;
        *(undefined1 *)(param_1 + 0x244d) = 0xff;
        *(undefined1 *)(param_1 + 0x2454) = 0xff;
        *(undefined1 *)(param_1 + 0x2455) = 0xff;
        *(short *)(param_1 + 0x2452) = sVar4;
      }
      uVar3 = GetTPage(1,0,0x100,0);
      *(u_short *)(param_1 + 0x2446) = uVar3;
      AddPrim(ot,p);
      return;
    }
    DAT_1f800010._2_2_ = 0xa0;
    iVar8 = 0;
    iVar6 = 1;
    do {
      psVar5 = &DAT_8019aaa8;
      iVar7 = 3;
      DAT_1f800014._2_2_ = DAT_1f800010._2_2_;
      sVar4 = 0xa0;
      sVar10 = 0xb0;
      sVar11 = 0x10;
      sVar12 = 0x14;
      do {
        DAT_1f800020._2_2_ = *psVar5;
        psVar5 = psVar5 + 1;
        DAT_1f800020._0_2_ = DAT_1f800014._2_2_;
        DAT_1f800014._2_2_ = DAT_1f800014._2_2_ + DAT_1f800020._2_2_;
        iVar7 = iVar7 + -1;
        DAT_1f800018._0_2_ = sVar4;
        DAT_1f800018._2_2_ = sVar10;
        DAT_1f80001c._0_2_ = sVar11;
        DAT_1f80001c._2_2_ = sVar12;
        p = (void *)FUN_80182e54(0x1f800000,iVar8,p,ot);
        sVar4 = sVar4 + 0x10;
        sVar10 = sVar10 + 0x10;
        sVar11 = sVar11 + 4;
        sVar12 = sVar12 + 4;
      } while (-1 < iVar7);
      bVar1 = iVar6 < 0x10;
      iVar8 = iVar6;
      iVar6 = iVar6 + 1;
    } while (bVar1);
    *(undefined2 *)((int)p + 0x10) = 0x100;
    *(undefined2 *)((int)p + 0x20) = 0x100;
    *(undefined2 *)((int)p + 8) = 0;
    *(undefined2 *)((int)p + 10) = 0;
    *(undefined2 *)((int)p + 0x12) = 0;
    *(undefined2 *)((int)p + 0x18) = 0;
    *(undefined2 *)((int)p + 0x1a) = 0xa0;
    *(undefined2 *)((int)p + 0x22) = 0xa0;
    *(undefined1 *)((int)p + 0xc) = 0;
    *(undefined1 *)((int)p + 0xd) = 0;
    *(undefined1 *)((int)p + 0x14) = 0xff;
    *(undefined1 *)((int)p + 0x15) = 0;
    *(undefined1 *)((int)p + 0x1c) = 0;
    *(undefined1 *)((int)p + 0x1d) = 0xa0;
    *(undefined1 *)((int)p + 0x24) = 0xff;
    *(undefined1 *)((int)p + 0x25) = 0xa0;
  }
  uVar3 = GetTPage(1,0,0x100,0);
  *(u_short *)((int)p + 0x16) = uVar3;
  AddPrim(ot,p);
  return;
}



