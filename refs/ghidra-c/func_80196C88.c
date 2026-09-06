
int MoveImage2(RECT *rect,int x,int y)

{
  int iVar1;
  undefined4 uVar2;
  
  SYS_OBJ_3E4("MoveImage",rect);
  iVar1 = VSync(-1);
  DAT_8019dc90 = iVar1 + 0xf0;
  DAT_8019dc94 = 0;
  uVar2 = *(undefined4 *)PTR_DMA_GPU_CHCR_8019dc68;
  iVar1 = SYS_OBJ_2CF4();
  return iVar1;
}



