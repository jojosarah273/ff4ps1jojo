
/* WARNING: Removing unreachable block (ram,0x80195cc8) */

undefined4 SYS_OBJ_1B44(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  short sVar6;
  int iVar7;
  
  SYS_OBJ_2880();
  uVar5 = *(undefined2 *)(param_1 + 1);
  if (*(short *)(param_1 + 1) < 0) {
    uVar5 = 0;
  }
  else if (DAT_8019db58 < *(short *)(param_1 + 1)) {
    uVar1 = SYS_OBJ_1BAC(DAT_8019db58);
    return uVar1;
  }
  sVar6 = *(short *)((int)param_1 + 6);
  *(undefined2 *)(param_1 + 1) = uVar5;
  if (*(short *)((int)param_1 + 6) < 0) {
    sVar6 = 0;
  }
  else if (DAT_8019db5a < *(short *)((int)param_1 + 6)) {
    uVar1 = SYS_OBJ_1BE8(DAT_8019db5a);
    return uVar1;
  }
  *(short *)((int)param_1 + 6) = sVar6;
  iVar4 = (int)*(short *)(param_1 + 1) * (int)sVar6 + 1;
  iVar7 = iVar4 - (iVar4 >> 0x1f) >> 5;
  if (0 < iVar4 / 2) {
    iVar4 = iVar4 / 2 + iVar7 * -0x10;
    uVar2 = *(uint *)PTR_GPU_REG1_8019dc5c;
    while( true ) {
      if ((uVar2 & 0x4000000) != 0) {
        *(undefined4 *)PTR_GPU_REG1_8019dc5c = 0x4000000;
        *(undefined4 *)PTR_GPU_REG0_8019dc58 = 0x1000000;
        *(undefined4 *)PTR_GPU_REG0_8019dc58 = 0xa0000000;
        *(undefined4 *)PTR_GPU_REG0_8019dc58 = *param_1;
        *(undefined4 *)PTR_GPU_REG0_8019dc58 = param_1[1];
        while (iVar4 = iVar4 + -1, iVar4 != -1) {
          uVar1 = *param_2;
          param_2 = param_2 + 1;
          *(undefined4 *)PTR_GPU_REG0_8019dc58 = uVar1;
        }
        if (iVar7 != 0) {
          *(undefined4 *)PTR_GPU_REG1_8019dc5c = 0x4000002;
          *(undefined4 **)PTR_DMA_GPU_MADR_8019dc60 = param_2;
          *(uint *)PTR_DMA_GPU_BCR_8019dc64 = iVar7 << 0x10 | 0x10;
          *(undefined4 *)PTR_DMA_GPU_CHCR_8019dc68 = 0x1000201;
        }
        return 0;
      }
      iVar3 = SYS_OBJ_28B4();
      if (iVar3 != 0) break;
      uVar2 = *(uint *)PTR_GPU_REG1_8019dc5c;
    }
    return 0xffffffff;
  }
  uVar1 = SYS_OBJ_1D5C();
  return uVar1;
}



