
void FUN_80181498(int param_1,undefined2 param_2,undefined2 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = 0;
  iVar9 = 0x10000;
  DAT_8019ee94 = 0x20;
  DAT_8019ee96 = 0x10;
  DAT_8019eea8 = (u_long *)&DAT_80013800;
  DAT_8019ee90 = param_2;
  DAT_8019ee92 = param_3;
  do {
    iVar5 = 0;
    iVar8 = 0x10000;
    puVar7 = (undefined1 *)(param_1 + iVar6 * 0x20);
    do {
      uVar4 = *puVar7;
      puVar1 = puVar7 + 1;
      puVar2 = puVar7 + 0x10;
      puVar3 = puVar7 + 0x11;
      puVar7 = puVar7 + 2;
      FUN_801824d8(uVar4,*puVar1,*puVar2,*puVar3,DAT_8019eea8 + iVar5 * 0x10 + iVar6);
      iVar5 = iVar8 >> 0x10;
      iVar8 = iVar8 + 0x10000;
    } while (iVar5 < 8);
    iVar6 = iVar9 >> 0x10;
    iVar9 = iVar9 + 0x10000;
  } while (iVar6 < 0x10);
  iVar6 = 0;
  do {
    iVar9 = 0;
    iVar5 = 0x10000;
    puVar7 = (undefined1 *)(param_1 + iVar6 * 0x20 + 0x200);
    do {
      uVar4 = *puVar7;
      puVar1 = puVar7 + 1;
      puVar2 = puVar7 + 0x10;
      puVar3 = puVar7 + 0x11;
      puVar7 = puVar7 + 2;
      FUN_801824d8(uVar4,*puVar1,*puVar2,*puVar3,DAT_8019eea8 + iVar9 * 0x10 + iVar6 + 0x80);
      iVar9 = iVar5 >> 0x10;
      iVar5 = iVar5 + 0x10000;
    } while (iVar9 < 8);
    iVar6 = (iVar6 + 1) * 0x10000 >> 0x10;
  } while (iVar6 < 0x10);
  LoadImage((RECT *)&DAT_8019ee90,DAT_8019eea8);
  return;
}



