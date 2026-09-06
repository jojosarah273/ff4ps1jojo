
void SYS_OBJ_205C(undefined4 param_1)

{
  *(undefined4 *)PTR_GPU_REG1_8019dc5c = 0x4000002;
  *(undefined4 *)PTR_DMA_GPU_MADR_8019dc60 = param_1;
  *(undefined4 *)PTR_DMA_GPU_BCR_8019dc64 = 0;
  *(undefined4 *)PTR_DMA_GPU_CHCR_8019dc68 = 0x1000401;
  return;
}



