
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80109d68(void)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  
  uVar3 = _DAT_800d4302;
  uVar6 = (uint)DAT_800d4304;
  uVar13 = (uint)_DAT_800d4302;
  uVar9 = (uint)_DAT_800d2116;
  puVar10 = (undefined *)(uVar6 * 0x8000 + 0x7ffc8000);
  if (uVar6 == 0x7e) {
    puVar10 = (undefined *)0x800d2400;
    if (uVar13 < 0x2000) {
      puVar10 = &DAT_800d0000;
    }
  }
  else {
    if (uVar6 < 0x7f) {
      if (uVar6 == 0x70) {
        puVar10 = &DAT_800d2200;
        goto LAB_80109e04;
      }
    }
    else if (uVar6 == 0x7f) {
      puVar10 = (undefined *)0x800e2400;
      goto LAB_80109e04;
    }
    if (uVar13 < 0x8000) {
      puVar10 = &DAT_800d0000;
    }
  }
LAB_80109e04:
  pbVar11 = puVar10 + uVar13;
  uVar1 = CONCAT11(DAT_800d4306,DAT_800d4305);
  uVar6 = (uint)uVar1;
  iVar12 = 1;
  switch(DAT_800d2115 & 0xf) {
  case 1:
  case 4:
    iVar12 = 0x20;
    break;
  case 2:
  case 3:
  case 0xc:
    iVar12 = 0x80;
    break;
  case 8:
    iVar12 = 0x40;
  }
  if (DAT_800d4300 == 1) {
    for (uVar6 = (uint)(uVar1 >> 1); uVar6 != 0; uVar6 = uVar6 - 1) {
      uVar2 = *(undefined2 *)pbVar11;
      pbVar11 = pbVar11 + 2;
      (&DAT_801cfd68)[uVar9] = uVar2;
      uVar9 = uVar9 + iVar12 & 0xffff;
    }
  }
  else if (DAT_800d4300 < 2) {
    if (DAT_800d4300 == 0) {
      if (DAT_800d4301 == '\x18') {
        if (uVar13 - 0x774 < 0xc0) {
          iVar7 = ((int)DAT_8019ed82 % 0x60) * 0x10000 >> 0x10;
          iVar8 = (iVar7 + 1) * 0x10000 >> 0x10;
          (&DAT_8019f628)[iVar7] = &DAT_801cfd68 + uVar9;
          (&DAT_8019f628)[iVar8] = pbVar11;
          DAT_8019ed82 = (short)((uint)((iVar8 + 1) * 0x10000 + 0x10000) >> 0x10);
        }
        if (uVar13 - 0x834 < 0xc0) {
          iVar7 = ((int)DAT_8019ed80 % 0x60) * 0x10000 >> 0x10;
          iVar8 = (iVar7 + 1) * 0x10000 >> 0x10;
          (&DAT_8019f4a8)[iVar7] = &DAT_801cfd68 + uVar9;
          (&DAT_8019f4a8)[iVar8] = pbVar11;
          DAT_8019ed80 = (short)((uint)((iVar8 + 1) * 0x10000 + 0x10000) >> 0x10);
        }
        iVar7 = 0;
        if (uVar6 != 0) {
          do {
            pbVar5 = pbVar11 + iVar7;
            iVar7 = iVar7 + 1;
            uVar13 = uVar9 + iVar12 & 0xffff;
            (&DAT_801cfd68)[uVar9] = (&DAT_801cfd68)[uVar9] & 0xff00 | (ushort)*pbVar5;
            uVar9 = uVar13;
          } while (iVar7 < (int)uVar6);
        }
      }
      else {
        iVar7 = 0;
        if (uVar6 != 0) {
          do {
            pbVar5 = pbVar11 + iVar7;
            iVar7 = iVar7 + 1;
            uVar13 = uVar9 + iVar12 & 0xffff;
            (&DAT_801cfd68)[uVar9] = CONCAT11(*pbVar5,*(undefined1 *)(&DAT_801cfd68 + uVar9));
            uVar9 = uVar13;
          } while (iVar7 < (int)uVar6);
        }
      }
    }
  }
  else if (DAT_800d4300 == 8) {
    if (DAT_800d4301 == '\x18') {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        (&DAT_801cfd68)[uVar9] = (&DAT_801cfd68)[uVar9] & 0xff00 | (ushort)*pbVar11;
        uVar9 = uVar9 + iVar12 & 0xffff;
      }
    }
    else {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        (&DAT_801cfd68)[uVar9] = CONCAT11(*pbVar11,*(undefined1 *)(&DAT_801cfd68 + uVar9));
        uVar9 = uVar9 + iVar12 & 0xffff;
      }
    }
  }
  else if (DAT_800d4300 == 9) {
    for (uVar6 = (uint)(uVar1 >> 1); uVar6 != 0; uVar6 = uVar6 - 1) {
      (&DAT_801cfd68)[uVar9] = CONCAT11(*pbVar11,*pbVar11);
      uVar9 = uVar9 + iVar12 & 0xffff;
    }
  }
  uVar4 = _DAT_800d4302;
  _DAT_800d2116 = (ushort)uVar9;
  _DAT_800d4302 = uVar3 + uVar1;
  if ((DAT_800d4300 & 8) == 0) {
    uVar4 = _DAT_800d4302;
  }
  _DAT_800d4302 = uVar4;
  return;
}



