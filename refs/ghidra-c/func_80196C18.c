
undefined4 SYS_OBJ_2C00(void)

{
  int iVar1;
  uint in_v0;
  uint in_v1;
  
  while (((in_v0 & in_v1) != 0 || ((*(uint *)PTR_GPU_REG1_8019dc5c & 0x4000000) == 0))) {
    iVar1 = SYS_OBJ_28B4();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    in_v0 = *(uint *)PTR_DMA_GPU_CHCR_8019dc68;
    in_v1 = 0x1000000;
  }
  DMACallback(2,_GPU_ResetCallback);
  (**(code **)(PTR_PTR_8019db4c + 0x1c))();
  return 0;
}



