
void FUN_801820f4(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  RECT local_10;
  
  if (-1 < (short)DAT_8019ee98) {
    uVar7 = 0;
    DAT_8019eea8 = (u_long *)&DAT_801e01c8;
    DAT_8019eeac = (u_long *)&DAT_801e05c8;
    DAT_8019ee96 = 0x10;
    DAT_8019ee90 = (DAT_8019ee98 & 0xf) * 8 + 0x200;
    local_10.x = (DAT_8019ee98 & 0xf) * 4 + 0x280;
    DAT_8019ee92 = (undefined2)(DAT_8019ee98 & 0xf0);
    DAT_8019ee94 = 8;
    local_10.y = (short)((DAT_8019ee98 & 0xf0) >> 1);
    local_10.w = 4;
    local_10.h = 8;
    puVar8 = &DAT_801d3a68;
    do {
      iVar6 = 0;
      iVar5 = 7;
      do {
        iVar4 = 0;
        puVar3 = (undefined2 *)(iVar6 + (int)puVar8);
        do {
          uVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          iVar2 = iVar4 + (uVar7 & 2) * 0x40 + (uVar7 & 1) * 8 + iVar6;
          iVar4 = iVar4 + 1;
          *(char *)((int)DAT_8019eea8 + iVar2) = (char)((ushort)uVar1 >> 8);
        } while (iVar4 < 8);
        iVar5 = iVar5 + -1;
        iVar6 = iVar6 + 0x10;
      } while (-1 < iVar5);
      uVar7 = uVar7 + 1 & 0xffff;
      puVar8 = puVar8 + 0x40;
    } while (uVar7 < 4);
    LoadImage((RECT *)&DAT_8019ee90,DAT_8019eea8);
    iVar5 = 0;
    do {
      uVar7 = 0;
      iVar6 = iVar5 + 1;
      do {
        iVar2 = uVar7 * 2;
        iVar4 = uVar7 + iVar5 * 8;
        uVar7 = uVar7 + 1 & 0xffff;
        *(undefined1 *)((int)DAT_8019eeac + iVar4) =
             *(undefined1 *)((int)DAT_8019eea8 + iVar2 + iVar5 * 0x20);
      } while (uVar7 < 8);
      iVar5 = iVar6;
    } while (iVar6 < 8);
    LoadImage(&local_10,DAT_8019eeac);
  }
  return;
}



