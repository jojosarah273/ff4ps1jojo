
int StoreImage2(RECT *rect,u_long *p)

{
  int iVar1;
  undefined4 uVar2;
  
  SYS_OBJ_3E4("StoreImage",rect);
  iVar1 = VSync(-1);
  DAT_8019dc90 = iVar1 + 0xf0;
  DAT_8019dc94 = 0;
  uVar2 = *(undefined4 *)PTR_DMA_GPU_CHCR_8019dc68;
  iVar1 = SYS_OBJ_2C00();
  return iVar1;
}



