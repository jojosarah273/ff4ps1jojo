
void VSYNC_OBJ_A4(void)

{
  uint uVar1;
  
  VSYNC_OBJ_178();
  uVar1 = *(uint *)PTR_GPU_REG1_8019bdfc;
  VSYNC_OBJ_178(DAT_8019cf34 + 1,1);
  if (((uVar1 & 0x400000) != 0) && (-1 < (int)(uVar1 ^ *(uint *)PTR_GPU_REG1_8019bdfc))) {
    do {
    } while (((uVar1 ^ *(uint *)PTR_GPU_REG1_8019bdfc) & 0x80000000) == 0);
  }
  DAT_8019be08 = DAT_8019cf34;
  do {
    DAT_8019be04 = *(int *)PTR_TMR_HRETRACE_VAL_8019be00;
  } while (*(int *)PTR_TMR_HRETRACE_VAL_8019be00 != *(int *)PTR_TMR_HRETRACE_VAL_8019be00);
  return;
}



