
void FUN_8017dd08(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined2 *puVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  
  puVar6 = *(ushort **)(param_3 + 4);
  iVar19 = (int)((uint)puVar6[3] << 0x10) >> 0x13;
  iVar14 = ((int)((uint)puVar6[3] << 0x10) >> 0x10) + (int)(short)puVar6[5] + 0x10;
  if (0xf8 < iVar14) {
    iVar14 = 0xf8;
  }
  uVar16 = (int)((uint)*puVar6 << 0x10) >> 0x13 & 0x1f;
  uVar15 = (int)((uint)*puVar6 << 0x10) >> 0x18 & 1;
  uVar9 = ((int)(short)puVar6[1] & 0xf8U) * 4 + iVar19 * 0x20;
  do {
    if (iVar14 >> 3 <= iVar19) {
      return;
    }
    iVar13 = 0;
    iVar17 = iVar19 + 1;
    uVar18 = uVar9 + 0x20;
    uVar3 = uVar9 & 0x3e0;
    uVar9 = uVar16;
    do {
      iVar2 = param_2 + (uVar15 + ((int)uVar9 >> 5 & 1U) & 1) * 0x800 + (uVar9 & 0x1f | uVar3) * 2;
      if ((iVar2 + 0x7fe2aa90U & 0x1f) == 0) {
        iVar12 = 0;
        iVar7 = param_1 + iVar19 * 0x42;
        iVar11 = 8;
        piVar4 = &DAT_8019f4a8;
        iVar8 = 0;
        do {
          if (*piVar4 == iVar2) {
            piVar4[2] = iVar7 + iVar13 * 2;
            break;
          }
          if (*(int *)((int)&DAT_8019f628 + iVar8) == iVar2) {
            *(int *)((int)&DAT_8019f628 + iVar11) = iVar7 + iVar13 * 2;
            break;
          }
          iVar11 = iVar11 + 0xc;
          piVar4 = piVar4 + 3;
          iVar12 = iVar12 + 1;
          iVar8 = iVar8 + 0xc;
        } while (iVar12 < 0x20);
      }
      iVar13 = iVar13 + 1;
      uVar9 = uVar9 + 1;
    } while (iVar13 < 0x21);
    iVar13 = 0;
    puVar5 = (undefined2 *)(param_1 + iVar19 * 0x42);
    uVar10 = uVar16;
    do {
      uVar9 = (int)uVar10 >> 5;
      uVar1 = uVar10 & 0x1f;
      iVar13 = iVar13 + 1;
      uVar10 = uVar10 + 1;
      *puVar5 = *(undefined2 *)(param_2 + (uVar15 + (uVar9 & 1) & 1) * 0x800 + (uVar1 | uVar3) * 2);
      puVar5 = puVar5 + 1;
      iVar19 = iVar17;
      uVar9 = uVar18;
    } while (iVar13 < 0x21);
  } while( true );
}



