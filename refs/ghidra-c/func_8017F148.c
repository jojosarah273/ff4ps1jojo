
void FUN_8017f148(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
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
  uint local_210 [128];
  
  iVar13 = 0;
  iVar14 = 0;
  iVar15 = 0;
  bVar1 = false;
  if (((DAT_800d2131 & 0x1f) != 0) && ((DAT_800d2130 & 2) == 0)) {
    bVar1 = true;
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
  uVar11 = 0;
  DAT_8019ed38 = 0x200;
  DAT_8019ed3a = 0x1c8;
  DAT_8019ed3c = 0x10;
  DAT_8019ed3e = 8;
  uVar12 = ((DAT_800d2100 & 0xf) * 0x100) / 0xf;
  iVar5 = 0;
  do {
    uVar3 = *(uint *)(iVar5 + param_1);
    uVar10 = uVar3 & 0x1f;
    uVar9 = uVar3 >> 5 & 0x1f;
    uVar2 = uVar3 >> 10 & 0x1f;
    uVar7 = uVar3 >> 0x10 & 0x1f;
    uVar6 = uVar3 >> 0x15 & 0x1f;
    uVar8 = uVar3 >> 0x1a & 0x1f;
    *(uint *)((int)local_210 + iVar5) = uVar3;
    if ((bVar1) && (uVar11 < 0x40)) {
      uVar3 = (int)((uVar2 + iVar13) * 0x10000) >> 0x10;
      uVar2 = uVar3;
      if ((int)uVar3 < 0) {
        uVar2 = 0;
      }
      if (0x1f < (int)uVar3) {
        uVar2 = 0x1f;
      }
      uVar3 = (int)((uVar8 + iVar13) * 0x10000) >> 0x10;
      uVar8 = uVar3;
      if ((int)uVar3 < 0) {
        uVar8 = 0;
      }
      if (0x1f < (int)uVar3) {
        uVar8 = 0x1f;
      }
      uVar3 = (int)((uVar9 + iVar14) * 0x10000) >> 0x10;
      uVar9 = uVar3;
      if ((int)uVar3 < 0) {
        uVar9 = 0;
      }
      if (0x1f < (int)uVar3) {
        uVar9 = 0x1f;
      }
      uVar3 = (int)((uVar6 + iVar14) * 0x10000) >> 0x10;
      uVar6 = uVar3;
      if ((int)uVar3 < 0) {
        uVar6 = 0;
      }
      if (0x1f < (int)uVar3) {
        uVar6 = 0x1f;
      }
      uVar3 = (int)((uVar10 + iVar15) * 0x10000) >> 0x10;
      uVar10 = uVar3;
      if ((int)uVar3 < 0) {
        uVar10 = 0;
      }
      if (0x1f < (int)uVar3) {
        uVar10 = 0x1f;
      }
      uVar3 = (int)((uVar7 + iVar15) * 0x10000) >> 0x10;
      uVar7 = uVar3;
      if ((int)uVar3 < 0) {
        uVar7 = 0;
      }
      if (0x1f < (int)uVar3) {
        uVar7 = 0x1f;
      }
    }
    uVar3 = (int)(uVar10 * uVar12 * 0x100) >> 0x10 | ((int)(uVar9 * uVar12 * 0x100) >> 0x10) << 5 |
            ((int)(uVar2 * uVar12 * 0x100) >> 0x10) << 10;
    uVar2 = uVar3 | ((int)(uVar7 * uVar12 * 0x100) >> 0x10) << 0x10 |
            ((int)(uVar6 * uVar12 * 0x100) >> 0x10) << 0x15 |
            ((int)(uVar8 * uVar12 * 0x100) >> 0x10) << 0x1a;
    if ((uVar3 & 0xffff) == 0) {
      uVar2 = uVar2 | 0x421;
    }
    if ((uVar2 & 0xffff0000) == 0) {
      uVar2 = uVar2 | 0x4210000;
    }
    local_210[uVar11] = uVar2;
    uVar11 = uVar11 + 1 & 0xffff;
    iVar5 = uVar11 << 2;
  } while (uVar11 < 0x80);
  uVar11 = 0;
  uVar12 = 0;
  do {
    uVar3 = uVar12 + 2 & 0xffff;
    iVar13 = uVar11 + 0x40;
    iVar14 = uVar11 + 0x41;
    uVar11 = uVar11 + 8 & 0xffff;
    (&DAT_8019efa8)[iVar13] = local_210[uVar12];
    (&DAT_8019efa8)[iVar14] = local_210[uVar12 + 1];
    uVar12 = uVar3;
  } while (uVar3 < 0x40);
  uVar12 = 0;
  do {
    uVar11 = uVar12 + 1 & 0xffff;
    (&DAT_8019efa8)[uVar12] = local_210[uVar12 + 0x40];
    uVar12 = uVar11;
  } while (uVar11 < 0x40);
  uVar12 = 0;
  do {
    puVar4 = &DAT_8019efa8 + uVar12;
    uVar12 = uVar12 + 8 & 0xffff;
    *puVar4 = *puVar4 & 0xffff0000;
  } while (uVar12 < 0x140);
  LoadImage((RECT *)&DAT_8019ed38,&DAT_8019efa8);
  DAT_8019ed3a = 0x1e0;
  DAT_8019ed3e = 0x20;
  LoadImage((RECT *)&DAT_8019ed38,&DAT_8019f0a8);
  return;
}



