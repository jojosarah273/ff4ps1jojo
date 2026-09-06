
void FUN_8017ffe8(int param_1,ushort param_2,ushort param_3)

{
  byte bVar1;
  int iVar2;
  u_short uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined2 *puVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  u_short *puVar14;
  uint uVar15;
  ushort local_78 [32];
  RECT local_38;
  RECT *local_30;
  ushort *local_2c;
  
  local_30 = &local_38;
  local_2c = local_78;
  DAT_8019ee94 = 0x80;
  local_38.x = param_2 + 0x80;
  DAT_8019ee96 = 8;
  local_38.w = 0x40;
  local_38.h = 4;
  DAT_8019eea8 = (u_long *)&DAT_801e01c8;
  DAT_8019eeac = (u_long *)&DAT_80012000;
  uVar11 = 0;
  DAT_8019ee90 = param_2;
  local_38.y = param_3;
  do {
    iVar13 = 0;
    uVar15 = uVar11 + 1;
    iVar10 = ((int)uVar11 / 2) * 0x10;
    puVar8 = local_78;
    do {
      if ((uVar11 & 1) == 0) {
        iVar4 = iVar10 + iVar13 / 2;
        bVar1 = (&DAT_800e6c00)[iVar4];
        pbVar5 = &DAT_800e6c80 + iVar4;
      }
      else {
        iVar4 = iVar10 + iVar13 / 2;
        bVar1 = (&DAT_800e6d00)[iVar4];
        pbVar5 = &DAT_800e6d80 + iVar4;
      }
      *puVar8 = (ushort)bVar1;
      puVar8[1] = (ushort)*pbVar5;
      iVar13 = iVar13 + 2;
      puVar8 = puVar8 + 2;
    } while (iVar13 < 0x20);
    iVar10 = 0;
    puVar8 = local_2c;
    do {
      uVar6 = *puVar8 & 0x1f;
      DAT_8019ee9c = *puVar8 >> 5;
      uVar9 = (uint)DAT_8019ee9c;
      DAT_8019ee9a = (undefined2)uVar6;
      iVar13 = 0;
      do {
        iVar4 = 0;
        iVar12 = iVar13 + 1;
        puVar7 = (undefined2 *)(iVar13 * 0x10 + param_1 + uVar9 * 0x1000 + uVar6 * 0x80);
        do {
          iVar2 = iVar4 + iVar10 * 8 + iVar13 * 0x100;
          iVar4 = iVar4 + 1;
          *(char *)((int)DAT_8019eea8 + iVar2) = (char)((ushort)*puVar7 >> 8);
          puVar7 = puVar7 + 1;
        } while (iVar4 < 8);
        iVar13 = iVar12;
      } while (iVar12 < 8);
      iVar10 = iVar10 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar10 < 0x20);
    DAT_8019ee92 = param_3 + (short)uVar11 * 8;
    iVar10 = 0;
    LoadImage((RECT *)&DAT_8019ee90,DAT_8019eea8);
    do {
      iVar13 = 0;
      do {
        iVar12 = iVar13 * 2;
        iVar4 = iVar13 + iVar10 * 0x80;
        iVar13 = iVar13 + 1;
        *(undefined1 *)((int)DAT_8019eeac + iVar4) =
             *(undefined1 *)((int)DAT_8019eea8 + iVar12 + iVar10 * 0x200);
      } while (iVar13 < 0x80);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 4);
    local_38.y = param_3 + (short)uVar11 * 4;
    LoadImage(local_30,DAT_8019eeac);
    uVar11 = uVar15;
  } while ((int)uVar15 < 0x10);
  DAT_8019ee98 = 0xffff;
  iVar13 = -0x7ff20000;
  iVar10 = 0;
  do {
    if (*(char *)(iVar13 + 0x6c00) == 'z') {
      DAT_8019ee98 = (undefined2)iVar10;
    }
    iVar4 = iVar10 + 1;
    iVar13 = iVar10 + -0x7ff1ffff;
    iVar10 = iVar4;
  } while (iVar4 < 0x80);
  if (DAT_800d1700 == '\x01') {
    FUN_8017fc50(0xe0);
  }
  else {
    FUN_8017fc50(0x80);
  }
  puVar14 = &DAT_801a0a20;
  iVar10 = 3;
  do {
    uVar3 = GetTPage(1,0,(uint)param_2,(uint)param_3);
    *puVar14 = uVar3;
    iVar10 = iVar10 + -1;
    puVar14 = puVar14 + 1;
  } while (-1 < iVar10);
  FUN_8017f9fc();
  return;
}



