
void FUN_8017fa2c(int param_1,ushort param_2,ushort param_3)

{
  undefined2 uVar1;
  u_short uVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  u_short *puVar9;
  RECT local_20;
  
  DAT_8019ee94 = 0x80;
  local_20.x = param_2 + 0x80;
  DAT_8019ee96 = 8;
  local_20.w = 0x40;
  local_20.h = 4;
  DAT_8019eea8 = (u_long *)&DAT_801e01c8;
  DAT_8019eeac = (u_long *)&DAT_80012000;
  DAT_8019ee9c = 0;
  local_20.y = param_3;
  do {
    DAT_8019ee9a = 0;
    iVar8 = param_1 + DAT_8019ee9c * 0x1000;
    do {
      iVar6 = 0;
      do {
        iVar5 = 0;
        iVar7 = iVar6 + 1;
        puVar4 = (undefined2 *)(iVar6 * 0x10 + iVar8);
        do {
          uVar1 = *puVar4;
          puVar4 = puVar4 + 1;
          iVar3 = iVar5 + DAT_8019ee9a * 8 + iVar6 * 0x100;
          iVar5 = iVar5 + 1;
          *(char *)((int)DAT_8019eea8 + iVar3) = (char)((ushort)uVar1 >> 8);
        } while (iVar5 < 8);
        iVar6 = iVar7;
      } while (iVar7 < 8);
      DAT_8019ee9a = DAT_8019ee9a + 1;
      iVar8 = iVar8 + 0x80;
    } while (DAT_8019ee9a < 0x20);
    DAT_8019ee92 = param_3 + DAT_8019ee9c * 8;
    DAT_8019ee90 = param_2;
    LoadImage((RECT *)&DAT_8019ee90,DAT_8019eea8);
    iVar8 = 0;
    do {
      iVar6 = 0;
      iVar5 = iVar8 + 1;
      do {
        iVar3 = iVar6 * 2;
        iVar7 = iVar6 + iVar8 * 0x80;
        iVar6 = iVar6 + 1;
        *(undefined1 *)((int)DAT_8019eeac + iVar7) =
             *(undefined1 *)((int)DAT_8019eea8 + iVar3 + iVar8 * 0x200);
      } while (iVar6 < 0x80);
      iVar8 = iVar5;
    } while (iVar5 < 4);
    local_20.y = param_3 + DAT_8019ee9c * 4;
    LoadImage(&local_20,DAT_8019eeac);
    DAT_8019ee9c = DAT_8019ee9c + 1;
  } while (DAT_8019ee9c < 8);
  DAT_8019ee98 = 0xffff;
  puVar9 = &DAT_801a0a20;
  iVar8 = 3;
  do {
    uVar2 = GetTPage(1,0,(uint)param_2,(uint)param_3);
    *puVar9 = uVar2;
    iVar8 = iVar8 + -1;
    puVar9 = puVar9 + 1;
  } while (-1 < iVar8);
  FUN_8017f9fc();
  return;
}



