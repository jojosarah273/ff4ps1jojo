
int FntOpen(int x,int y,int w,int h,int isbg,int n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RECT local_30;
  
  if (7 < DAT_8019d0f4) {
    iVar1 = FONT_OBJ_370();
    return iVar1;
  }
  if (DAT_8019d0f4 == 0) {
    DAT_8019dafc = 0;
  }
  iVar1 = DAT_8019dafc;
  iVar2 = DAT_8019d0f4 * 0x30;
  *(uint *)(&DAT_8019cfa0 + iVar2) = (uint)(w == 0);
  if (0x400 < iVar1 + n) {
    n = 0x400 - iVar1;
  }
  local_30.w = 0x100;
  local_30.h = 0x100;
  local_30.x = 0;
  local_30.y = 0;
  SetDrawMode((DR_MODE *)(&UNK_8019cf84 + iVar2),0,0,(uint)DAT_801fd350,&local_30);
  if (isbg != 0) {
    FUN_80197398(&DAT_8019cf74 + DAT_8019d0f4 * 0x30);
    (&DAT_8019cf78)[DAT_8019d0f4 * 0x30] = 0;
    (&DAT_8019cf79)[DAT_8019d0f4 * 0x30] = 0;
    (&DAT_8019cf7a)[DAT_8019d0f4 * 0x30] = 0;
    FUN_801972d8(&DAT_8019cf74 + DAT_8019d0f4 * 0x30,isbg == 2);
  }
  iVar1 = DAT_8019dafc;
  iVar2 = DAT_8019d0f4 * 0x30;
  iVar3 = DAT_8019dafc + DAT_8019d0f4;
  *(short *)(&DAT_8019cf7c + iVar2) = (short)x;
  *(short *)(&DAT_8019cf7e + iVar2) = (short)y;
  *(short *)(&DAT_8019cf80 + iVar2) = (short)w;
  *(short *)(&DAT_8019cf82 + iVar2) = (short)h;
  *(undefined **)(&DAT_8019cf98 + iVar2) = &DAT_801f8f48 + iVar3;
  *(int *)(&DAT_8019cf90 + iVar2) = n;
  *(undefined **)(&DAT_8019cf94 + iVar2) = &DAT_801f9350 + iVar1 * 0x10;
  *(undefined4 *)(&DAT_8019cf9c + iVar2) = 0;
  **(undefined1 **)(&DAT_8019cf98 + iVar2) = 0;
  iVar1 = *(int *)(&DAT_8019cf94 + DAT_8019d0f4 * 0x30);
  iVar2 = 0;
  if (0 < n) {
    do {
      FUN_80197358(iVar1);
      iVar2 = iVar2 + 1;
      *(undefined2 *)(iVar1 + 0xe) = DAT_801fd352;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < n);
  }
  iVar1 = DAT_8019d0f4;
  DAT_8019dafc = DAT_8019dafc + n;
  DAT_8019d0f4 = DAT_8019d0f4 + 1;
  return iVar1;
}



