
int VSync(int mode)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = *(undefined4 *)PTR_GPU_REG1_8019bdfc;
  do {
  } while (*(int *)PTR_TMR_HRETRACE_VAL_8019be00 != *(int *)PTR_TMR_HRETRACE_VAL_8019be00);
  uVar1 = *(int *)PTR_TMR_HRETRACE_VAL_8019be00 - DAT_8019be04;
  if (mode < 0) {
    iVar2 = VSYNC_OBJ_164();
    return iVar2;
  }
  if (mode != 1) {
    if (0 < mode) {
      iVar2 = VSYNC_OBJ_A4();
      return iVar2;
    }
    iVar2 = 0;
    if (0 < mode) {
      iVar2 = mode + -1;
    }
    VSYNC_OBJ_178(DAT_8019be08,iVar2);
    uVar4 = *(uint *)PTR_GPU_REG1_8019bdfc;
    VSYNC_OBJ_178(DAT_8019cf34 + 1,1);
    if (((uVar4 & 0x400000) != 0) && (-1 < (int)(uVar4 ^ *(uint *)PTR_GPU_REG1_8019bdfc))) {
      do {
      } while (((uVar4 ^ *(uint *)PTR_GPU_REG1_8019bdfc) & 0x80000000) == 0);
    }
    DAT_8019be08 = DAT_8019cf34;
    do {
      DAT_8019be04 = *(int *)PTR_TMR_HRETRACE_VAL_8019be00;
    } while (DAT_8019be04 != *(int *)PTR_TMR_HRETRACE_VAL_8019be00);
  }
  return uVar1 & 0xffff;
}



