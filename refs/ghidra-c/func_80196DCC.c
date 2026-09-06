
int DrawOTag2(u_long *p)

{
  int iVar1;
  undefined4 uVar2;
  
  if (1 < DAT_8019db56) {
    (*(code *)PTR_printf_8019db50)("DrawOTag(%08x)...\n",p);
  }
  iVar1 = VSync(-1);
  DAT_8019dc90 = iVar1 + 0xf0;
  DAT_8019dc94 = 0;
  uVar2 = *(undefined4 *)PTR_DMA_GPU_CHCR_8019dc68;
  iVar1 = SYS_OBJ_2E44();
  return iVar1;
}



