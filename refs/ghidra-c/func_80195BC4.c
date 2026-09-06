
undefined4 SYS_OBJ_1BAC(undefined2 param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  undefined4 *unaff_s1;
  undefined4 *unaff_s2;
  int unaff_s5;
  
  sVar5 = *(short *)((int)unaff_s1 + 6);
  *(undefined2 *)(unaff_s1 + 1) = param_1;
  if (*(short *)((int)unaff_s1 + 6) < 0) {
    sVar5 = 0;
  }
  else if (DAT_8019db5a < *(short *)((int)unaff_s1 + 6)) {
    uVar1 = SYS_OBJ_1BE8(DAT_8019db5a);
    return uVar1;
  }
  *(short *)((int)unaff_s1 + 6) = sVar5;
  iVar4 = (int)*(short *)(unaff_s1 + 1) * (int)sVar5 + 1;
  iVar6 = iVar4 - (iVar4 >> 0x1f) >> 5;
  if (0 < iVar4 / 2) {
    iVar4 = iVar4 / 2 + iVar6 * -0x10;
    uVar2 = *(uint *)PTR_GPU_REG1_8019dc5c;
    while( true ) {
      if ((uVar2 & 0x4000000) != 0) {
        uVar1 = 0xa0000000;
        *(undefined4 *)PTR_GPU_REG1_8019dc5c = 0x4000000;
        *(undefined4 *)PTR_GPU_REG0_8019dc58 = 0x1000000;
        if (unaff_s5 != 0) {
          uVar1 = 0xb0000000;
        }
        *(undefined4 *)PTR_GPU_REG0_8019dc58 = uVar1;
        *(undefined4 *)PTR_GPU_REG0_8019dc58 = *unaff_s1;
        *(undefined4 *)PTR_GPU_REG0_8019dc58 = unaff_s1[1];
        while (iVar4 = iVar4 + -1, iVar4 != -1) {
          uVar1 = *unaff_s2;
          unaff_s2 = unaff_s2 + 1;
          *(undefined4 *)PTR_GPU_REG0_8019dc58 = uVar1;
        }
        if (iVar6 != 0) {
          *(undefined4 *)PTR_GPU_REG1_8019dc5c = 0x4000002;
          *(undefined4 **)PTR_DMA_GPU_MADR_8019dc60 = unaff_s2;
          *(uint *)PTR_DMA_GPU_BCR_8019dc64 = iVar6 << 0x10 | 0x10;
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



