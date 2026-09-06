
int MoveImage(RECT *rect,int x,int y)

{
  int iVar1;
  
  SYS_OBJ_3E4("MoveImage",rect);
  iVar1 = -1;
  if (rect->w != 0) {
    if (rect->h == 0) {
      iVar1 = SYS_OBJ_788();
      return iVar1;
    }
    DAT_8019dbf8 = y << 0x10 | x & 0xffffU;
    DAT_8019dbf4._0_2_ = rect->x;
    DAT_8019dbf4._2_2_ = rect->y;
    DAT_8019dbfc._0_2_ = rect->w;
    DAT_8019dbfc._2_2_ = rect->h;
    iVar1 = (**(code **)(PTR_PTR_8019db4c + 8))
                      (*(undefined4 *)(PTR_PTR_8019db4c + 0x18),&DAT_8019dbec,0x14,0);
  }
  return iVar1;
}



