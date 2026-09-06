
uint SYS_OBJ_20A4(uint param_1)

{
  *(uint *)PTR_GPU_REG1_8019dc5c = param_1 | 0x10000000;
  return *(uint *)PTR_GPU_REG0_8019dc58 & 0xffffff;
}



