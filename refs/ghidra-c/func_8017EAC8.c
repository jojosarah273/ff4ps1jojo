
void FUN_8017eac8(int param_1)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint local_220 [128];
  
  iVar13 = 0;
  iVar14 = 0;
  iVar15 = 0;
  bVar1 = false;
  bVar2 = false;
  if (((DAT_800d2131 & 0x1f) != 0) && ((DAT_800d2130 & 2) == 0)) {
    bVar1 = (DAT_800d2131 & 0x10) != 0;
    bVar2 = (DAT_800d2131 & 0xf) != 0;
    if ((DAT_800d2131 & 0x80) == 0) {
      iVar15 = (int)DAT_8019ee7e;
      iVar14 = (int)DAT_8019ee7c;
      iVar13 = (int)DAT_8019ee7a;
    }
    else {
      iVar15 = (int)-DAT_8019ee7e;
      iVar14 = (int)-DAT_8019ee7c;
      iVar13 = (int)-DAT_8019ee7a;
    }
  }
  DAT_8019ed38 = 0x200;
  DAT_8019ed3a = 0x1d0;
  DAT_8019ed3c = 0x100;
  DAT_8019ed3e = 1;
  uVar12 = ((DAT_800d2100 & 0xf) * 0x100) / 0xf;
  uVar11 = 0;
  do {
    uVar10 = *(uint *)(uVar11 * 4 + param_1);
    uVar5 = uVar10 & 0x1f;
    uVar4 = uVar10 >> 5 & 0x1f;
    uVar9 = uVar10 >> 10 & 0x1f;
    uVar7 = uVar10 >> 0x10 & 0x1f;
    uVar6 = uVar10 >> 0x15 & 0x1f;
    uVar8 = uVar10 >> 0x1a & 0x1f;
    local_220[uVar11] = uVar10;
    if ((bVar2) && (uVar11 < 0x40)) {
      uVar10 = (int)((uVar9 + iVar13) * 0x10000) >> 0x10;
      uVar9 = uVar10;
      if ((int)uVar10 < 0) {
        uVar9 = 0;
      }
      if (0x1f < (int)uVar10) {
        uVar9 = 0x1f;
      }
      uVar10 = (int)((uVar8 + iVar13) * 0x10000) >> 0x10;
      uVar8 = uVar10;
      if ((int)uVar10 < 0) {
        uVar8 = 0;
      }
      if (0x1f < (int)uVar10) {
        uVar8 = 0x1f;
      }
      uVar10 = (int)((uVar4 + iVar14) * 0x10000) >> 0x10;
      uVar4 = uVar10;
      if ((int)uVar10 < 0) {
        uVar4 = 0;
      }
      if (0x1f < (int)uVar10) {
        uVar4 = 0x1f;
      }
      uVar10 = (int)((uVar6 + iVar14) * 0x10000) >> 0x10;
      uVar6 = uVar10;
      if ((int)uVar10 < 0) {
        uVar6 = 0;
      }
      if (0x1f < (int)uVar10) {
        uVar6 = 0x1f;
      }
      uVar10 = (int)((uVar5 + iVar15) * 0x10000) >> 0x10;
      uVar5 = uVar10;
      if ((int)uVar10 < 0) {
        uVar5 = 0;
      }
      if (0x1f < (int)uVar10) {
        uVar5 = 0x1f;
      }
      uVar10 = (int)((uVar7 + iVar15) * 0x10000) >> 0x10;
      uVar7 = uVar10;
      if ((int)uVar10 < 0) {
        uVar7 = 0;
      }
      if (0x1f < (int)uVar10) {
        uVar7 = 0x1f;
      }
    }
    if (bVar1) {
      iVar16 = uVar5 * uVar12;
      if (0x47 < uVar11) {
        if (uVar11 < 0x80) {
          uVar10 = (int)((uVar9 + iVar13) * 0x10000) >> 0x10;
          uVar9 = uVar10;
          if ((int)uVar10 < 0) {
            uVar9 = 0;
          }
          if (0x1f < (int)uVar10) {
            uVar9 = 0x1f;
          }
          uVar10 = (int)((uVar8 + iVar13) * 0x10000) >> 0x10;
          uVar8 = uVar10;
          if ((int)uVar10 < 0) {
            uVar8 = 0;
          }
          if (0x1f < (int)uVar10) {
            uVar8 = 0x1f;
          }
          uVar10 = (int)((uVar4 + iVar14) * 0x10000) >> 0x10;
          uVar4 = uVar10;
          if ((int)uVar10 < 0) {
            uVar4 = 0;
          }
          if (0x1f < (int)uVar10) {
            uVar4 = 0x1f;
          }
          uVar10 = (int)((uVar6 + iVar14) * 0x10000) >> 0x10;
          uVar6 = uVar10;
          if ((int)uVar10 < 0) {
            uVar6 = 0;
          }
          if (0x1f < (int)uVar10) {
            uVar6 = 0x1f;
          }
          uVar10 = (int)((uVar5 + iVar15) * 0x10000) >> 0x10;
          uVar5 = uVar10;
          if ((int)uVar10 < 0) {
            uVar5 = 0;
          }
          if (0x1f < (int)uVar10) {
            uVar5 = 0x1f;
          }
          uVar10 = (int)((uVar7 + iVar15) * 0x10000) >> 0x10;
          uVar7 = uVar10;
          if ((int)uVar10 < 0) {
            uVar7 = 0;
          }
          iVar16 = uVar5 * uVar12;
          if ((int)uVar10 < 0x20) goto LAB_8017ee48;
          uVar7 = 0x1f;
        }
        goto LAB_8017ee44;
      }
    }
    else {
LAB_8017ee44:
      iVar16 = uVar5 * uVar12;
    }
LAB_8017ee48:
    uVar10 = (iVar16 << 8) >> 0x10 | ((int)(uVar4 * uVar12 * 0x100) >> 0x10) << 5 |
             ((int)(uVar9 * uVar12 * 0x100) >> 0x10) << 10;
    uVar4 = uVar10 | ((int)(uVar7 * uVar12 * 0x100) >> 0x10) << 0x10 |
            ((int)(uVar6 * uVar12 * 0x100) >> 0x10) << 0x15 |
            ((int)(uVar8 * uVar12 * 0x100) >> 0x10) << 0x1a;
    if ((uVar10 & 0xffff) == 0) {
      uVar4 = uVar4 | 0x421;
    }
    if ((uVar4 & 0xffff0000) == 0) {
      uVar4 = uVar4 | 0x4210000;
    }
    uVar10 = uVar11 + 1 & 0xffff;
    (&DAT_8019efa8)[uVar11 + 0x80] = uVar4 | 0x80008000;
    (&DAT_8019efa8)[uVar11] = uVar4;
    uVar11 = uVar10;
    if (0x7f < uVar10) {
      uVar11 = 0;
      do {
        puVar3 = local_220 + uVar11;
        uVar10 = *puVar3;
        uVar4 = (uVar10 & 0x1f) * uVar12 >> 8 | ((uVar10 >> 5 & 0x1f) * uVar12 >> 8) << 5;
        uVar5 = (uVar10 >> 10 & 0x1f) * uVar12 >> 8;
        uVar10 = uVar4 | uVar5 << 10 | ((uVar10 >> 0x10 & 0x1f) * uVar12 >> 8) << 0x10 |
                 ((uVar10 >> 0x15 & 0x1f) * uVar12 >> 8) << 0x15 |
                 ((uVar10 >> 0x1a & 0x1f) * uVar12 >> 8) << 0x1a;
        if (uVar4 == 0 && uVar5 == 0) {
          uVar10 = uVar10 | 0x421;
        }
        if ((uVar10 & 0xffff0000) == 0) {
          uVar10 = uVar10 | 0x4210000;
        }
        uVar11 = uVar11 + 1 & 0xffff;
        *puVar3 = uVar10;
      } while (uVar11 < 0x40);
      LoadImage((RECT *)&DAT_8019ed38,&DAT_8019f1a8);
      DAT_8019ed38 = 0x200;
      DAT_8019ed3a = 0x1c0;
      LoadImage((RECT *)&DAT_8019ed38,&DAT_8019efa8);
      uVar12 = 0;
      do {
        uVar11 = uVar12 * 8;
        uVar10 = uVar12 + 1 & 0xffff;
        (&DAT_8019efa8)[uVar11 + 0x100] = local_220[uVar12 * 2];
        (&DAT_8019efa8)[uVar11 + 0x101] = *(undefined4 *)((int)local_220 + (uVar11 | 4));
        uVar12 = uVar10;
      } while (uVar10 < 8);
      uVar12 = 0;
      do {
        puVar3 = &DAT_8019efa8 + uVar12;
        uVar12 = uVar12 + 8 & 0xffff;
        *puVar3 = *puVar3 & 0xffff0000;
      } while (uVar12 < 0x140);
      DAT_8019ed3c = 0x10;
      DAT_8019ed3e = 0x28;
      LoadImage((RECT *)&DAT_8019ed38,&DAT_8019efa8);
      return;
    }
  } while( true );
}



