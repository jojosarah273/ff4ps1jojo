
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800f9868(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  
  uVar6 = (uint)(byte)(&DAT_800d4304)[param_1];
  uVar14 = (uint)*(ushort *)(&DAT_800d4302 + param_1);
  uVar9 = (uint)_DAT_800d2116;
  puVar11 = (undefined *)(uVar6 * 0x8000 + 0x7ffc8000);
  if (uVar6 == 0x7e) {
    puVar11 = (undefined *)0x800d2400;
    if (uVar14 < 0x2000) {
      puVar11 = &DAT_800d0000;
    }
  }
  else if (uVar6 < 0x7f) {
    if (uVar6 == 0x70) {
      puVar11 = &DAT_800d2200;
    }
    else {
LAB_800f98fc:
      if (uVar14 < 0x8000) {
        puVar11 = &DAT_800d0000;
      }
    }
  }
  else {
    if (uVar6 != 0x7f) goto LAB_800f98fc;
    puVar11 = (undefined *)0x800e2400;
  }
  pbVar12 = puVar11 + uVar14;
  uVar2 = *(ushort *)(&DAT_800d4305 + param_1);
  uVar6 = (uint)uVar2;
  iVar13 = 1;
  switch(DAT_800d2115 & 0xf) {
  case 1:
  case 4:
    iVar13 = 0x20;
    break;
  case 2:
  case 3:
  case 0xc:
    iVar13 = 0x80;
    break;
  case 8:
    iVar13 = 0x40;
  }
  bVar1 = (&DAT_800d4300)[param_1];
  if (bVar1 == 1) {
    uVar5 = (uint)(uVar2 >> 1);
    if (uVar5 != 0) {
      do {
        uVar3 = *(undefined2 *)pbVar12;
        pbVar12 = pbVar12 + 2;
        uVar5 = uVar5 - 1;
        uVar10 = uVar9 + iVar13 & 0xffff;
        (&DAT_801cfd68)[uVar9] = uVar3;
        uVar9 = uVar10;
      } while (uVar5 != 0);
      uVar4 = (undefined1)(uVar10 >> 8);
      goto LAB_800f9b94;
    }
  }
  else {
    uVar4 = (undefined1)(_DAT_800d2116 >> 8);
    uVar10 = uVar9;
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_800f9b94;
      if ((&DAT_800d4301)[param_1] == '\x18') {
        iVar8 = 0;
        if (uVar6 != 0) {
          do {
            pbVar7 = pbVar12 + iVar8;
            iVar8 = iVar8 + 1;
            uVar10 = uVar9 + iVar13 & 0xffff;
            (&DAT_801cfd68)[uVar9] = (&DAT_801cfd68)[uVar9] & 0xff00 | (ushort)*pbVar7;
            uVar9 = uVar10;
          } while (iVar8 < (int)uVar6);
          uVar4 = (undefined1)(uVar10 >> 8);
          goto LAB_800f9b94;
        }
      }
      else {
        iVar8 = 0;
        if (uVar6 != 0) {
          do {
            pbVar7 = pbVar12 + iVar8;
            iVar8 = iVar8 + 1;
            uVar10 = uVar9 + iVar13 & 0xffff;
            (&DAT_801cfd68)[uVar9] = CONCAT11(*pbVar7,*(undefined1 *)(&DAT_801cfd68 + uVar9));
            uVar9 = uVar10;
          } while (iVar8 < (int)uVar6);
          uVar4 = (undefined1)(uVar10 >> 8);
          goto LAB_800f9b94;
        }
      }
    }
    else if (bVar1 == 8) {
      if ((&DAT_800d4301)[param_1] == '\x18') {
        uVar5 = uVar6;
        if (uVar6 != 0) {
          do {
            uVar5 = uVar5 - 1;
            uVar10 = uVar9 + iVar13 & 0xffff;
            (&DAT_801cfd68)[uVar9] = (&DAT_801cfd68)[uVar9] & 0xff00 | (ushort)*pbVar12;
            uVar9 = uVar10;
          } while (uVar5 != 0);
          uVar4 = (undefined1)(uVar10 >> 8);
          goto LAB_800f9b94;
        }
      }
      else {
        uVar5 = uVar6;
        if (uVar6 != 0) {
          do {
            uVar5 = uVar5 - 1;
            uVar10 = uVar9 + iVar13 & 0xffff;
            (&DAT_801cfd68)[uVar9] = CONCAT11(*pbVar12,*(undefined1 *)(&DAT_801cfd68 + uVar9));
            uVar9 = uVar10;
          } while (uVar5 != 0);
          uVar4 = (undefined1)(uVar10 >> 8);
          goto LAB_800f9b94;
        }
      }
    }
    else {
      if (bVar1 != 9) goto LAB_800f9b94;
      for (uVar5 = (uint)(uVar2 >> 1); uVar5 != 0; uVar5 = uVar5 - 1) {
        (&DAT_801cfd68)[uVar9] = CONCAT11(*pbVar12,*pbVar12);
        uVar9 = uVar9 + iVar13 & 0xffff;
      }
    }
  }
  uVar4 = (undefined1)(uVar9 >> 8);
  uVar10 = uVar9;
LAB_800f9b94:
  _DAT_800d2116 = CONCAT11(uVar4,(char)uVar10);
  if (((&DAT_800d4300)[param_1] & 8) == 0) {
    (&DAT_800d4302)[param_1] = (char)(uVar14 + uVar6);
    (&DAT_800d4303)[param_1] = (char)(uVar14 + uVar6 >> 8);
  }
  return;
}



