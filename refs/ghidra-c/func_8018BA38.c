
/* WARNING: Removing unreachable block (ram,0x8018bd9c) */
/* WARNING: Removing unreachable block (ram,0x8018bdc0) */
/* WARNING: Removing unreachable block (ram,0x8018be38) */
/* WARNING: Removing unreachable block (ram,0x8018bea4) */
/* WARNING: Removing unreachable block (ram,0x8018bebc) */

long SpuSetReverbModeParam(SpuReverbAttr *attr)

{
  bool bVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  uint *puVar7;
  uint uVar8;
  uint local_78;
  short sStack_74;
  short sStack_72;
  undefined2 uStack_66;
  short sStack_60;
  short sStack_5e;
  short sStack_5c;
  short sStack_5a;
  short sStack_54;
  short sStack_52;
  short sStack_40;
  short sStack_3e;
  short sStack_3c;
  short sStack_3a;
  uint local_30;
  
  bVar1 = false;
  local_30 = 0;
  uVar8 = attr->mask;
  bVar3 = false;
  local_78 = 0;
  if ((uVar8 != 0) && ((uVar8 & 1) == 0)) {
    if ((((uVar8 & 8) != 0) && ((int)DAT_8019b0b8 < 9)) && (6 < (int)DAT_8019b0b8)) {
      bVar1 = true;
      puVar7 = &local_78;
      iVar4 = 0x43;
      puVar6 = &DAT_8019b704 + DAT_8019b0b8 * 0x44;
      do {
        uVar2 = *puVar6;
        puVar6 = puVar6 + 1;
        iVar4 = iVar4 + -1;
        *(undefined1 *)puVar7 = uVar2;
        puVar7 = (uint *)((int)puVar7 + 1);
      } while (iVar4 != -1);
      local_78 = 0xc011c00;
      DAT_8019b0c0 = attr->delay;
      sStack_60 = (short)((DAT_8019b0c0 * 0x2000) / 0x7f) - sStack_74;
      sStack_40 = (short)((DAT_8019b0c0 * 0x1000) / 0x7f);
      sStack_5e = sStack_40 - sStack_72;
      sStack_54 = sStack_52 + sStack_40;
      sStack_5c = sStack_5a + sStack_40;
      sStack_3e = sStack_3a + sStack_40;
      sStack_40 = sStack_3c + sStack_40;
    }
    if ((((uVar8 & 0x10) != 0) && ((int)DAT_8019b0b8 < 9)) && (6 < (int)DAT_8019b0b8)) {
      bVar3 = true;
      puVar7 = &local_78;
      if (!bVar1) {
        iVar4 = 0x43;
        puVar6 = &DAT_8019b704 + DAT_8019b0b8 * 0x44;
        do {
          uVar2 = *puVar6;
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
          *(undefined1 *)puVar7 = uVar2;
          puVar7 = (uint *)((int)puVar7 + 1);
        } while (iVar4 != -1);
        lVar5 = S_SRMP_OBJ_31C();
        return lVar5;
      }
      local_78 = local_78 | 0x80;
      DAT_8019b0c4 = attr->feedback;
      uStack_66 = (undefined2)((DAT_8019b0c4 * 0x8100) / 0x7f);
    }
    if ((uVar8 & 2) != 0) {
      *(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x184) = (attr->depth).left;
      DAT_8019b0bc = (attr->depth).left;
    }
    if ((uVar8 & 4) == 0) {
      if ((bVar1) || (bVar3)) {
        _spu_setReverbAttr(&local_78);
      }
      if (local_30 != 0) {
        SpuClearReverbWorkArea(DAT_8019b0b8);
      }
      return 0;
    }
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x186) = (attr->depth).right;
    DAT_8019b0be = (attr->depth).right;
    lVar5 = S_SRMP_OBJ_424();
    return lVar5;
  }
  uVar8 = attr->mode;
  bVar1 = (uVar8 & 0x100) != 0;
  if (bVar1) {
    uVar8 = uVar8 & 0xfffffeff;
  }
  local_30 = (uint)bVar1;
  if ((9 < uVar8) || (iVar4 = _SpuIsInAllocateArea_((&DAT_8019b6d4)[uVar8]), iVar4 != 0)) {
    lVar5 = S_SRMP_OBJ_4A4();
    return lVar5;
  }
  puVar7 = &local_78;
  iVar4 = 0x43;
  DAT_8019b0b0 = (&DAT_8019b6d4)[uVar8];
  puVar6 = &DAT_8019b704 + uVar8 * 0x44;
  do {
    uVar2 = *puVar6;
    puVar6 = puVar6 + 1;
    iVar4 = iVar4 + -1;
    *(undefined1 *)puVar7 = uVar2;
    puVar7 = (uint *)((int)puVar7 + 1);
  } while (iVar4 != -1);
  DAT_8019b0b8 = uVar8;
  if (uVar8 == 7) {
    DAT_8019b0c4 = 0x7f;
    DAT_8019b0c0 = 0x7f;
    lVar5 = S_SRMP_OBJ_168();
    return lVar5;
  }
  if (uVar8 == 8) {
    DAT_8019b0c4 = 0;
    DAT_8019b0c0 = 0x7f;
    lVar5 = S_SRMP_OBJ_168();
    return lVar5;
  }
  lVar5 = S_SRMP_OBJ_158();
  return lVar5;
}



