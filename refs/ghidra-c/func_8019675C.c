
uint SYS_OBJ_2744(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    SYS_OBJ_2880();
    uVar1 = SYS_OBJ_277C();
    return uVar1;
  }
  uVar1 = DAT_8019dc7c - DAT_8019dc80 & 0x3f;
  if (uVar1 != 0) {
    SYS_OBJ_23A8();
  }
  if ((((*(uint *)PTR_DMA_GPU_CHCR_8019dc68 & 0x1000000) != 0) ||
      ((*(uint *)PTR_GPU_REG1_8019dc5c & 0x4000000) == 0)) && (uVar1 == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}



