
undefined4 SYS_OBJ_2CF4(void)

{
  int iVar1;
  uint in_v0;
  undefined4 uVar2;
  uint in_v1;
  undefined4 *unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  
  while (((in_v0 & in_v1) != 0 || ((*(uint *)PTR_GPU_REG1_8019dc5c & 0x4000000) == 0))) {
    iVar1 = SYS_OBJ_28B4();
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    in_v0 = *(uint *)PTR_DMA_GPU_CHCR_8019dc68;
    in_v1 = 0x1000000;
  }
  DMACallback(2,_GPU_ResetCallback);
  uVar2 = 0xffffffff;
  if (*(short *)(unaff_s0 + 1) != 0) {
    if (*(short *)((int)unaff_s0 + 6) == 0) {
      uVar2 = SYS_OBJ_2D9C();
      return uVar2;
    }
    DAT_8019dbf8 = unaff_s1 << 0x10 | unaff_s2 & 0xffff;
    DAT_8019dbf4 = *unaff_s0;
    DAT_8019dbfc = unaff_s0[1];
    (**(code **)(PTR_PTR_8019db4c + 0x18))(&DAT_8019dbec);
    uVar2 = 0;
  }
  return uVar2;
}



