
undefined4 SYS_OBJ_2608(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  DAT_8019dc8c = SetIntrMask(0);
  DAT_8019dc80 = 0;
  DAT_8019dc7c = 0;
  uVar2 = param_1 & 7;
  if (uVar2 != 1) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        uVar1 = SYS_OBJ_2710();
        return uVar1;
      }
SYS_OBJ_2678:
      *(undefined4 *)PTR_DMA_GPU_CHCR_8019dc68 = 0x401;
      *(uint *)PTR_DMA_DPCR_8019dc78 = *(uint *)PTR_DMA_DPCR_8019dc78 | 0x800;
      *(undefined4 *)PTR_GPU_REG1_8019dc5c = 0;
      SYS_OBJ_2ED8(&DAT_801fd3a8,0,0x1800);
      uVar1 = SYS_OBJ_2710();
      return uVar1;
    }
    if (uVar2 != 3) {
      if (uVar2 == 5) goto SYS_OBJ_2678;
      goto code_r0x80196728;
    }
  }
  *(undefined4 *)PTR_DMA_GPU_CHCR_8019dc68 = 0x401;
  *(uint *)PTR_DMA_DPCR_8019dc78 = *(uint *)PTR_DMA_DPCR_8019dc78 | 0x800;
  *(undefined4 *)PTR_GPU_REG1_8019dc5c = 0x2000000;
  *(undefined4 *)PTR_GPU_REG1_8019dc5c = 0x1000000;
code_r0x80196728:
  SetIntrMask(DAT_8019dc8c);
  uVar1 = 0;
  if ((param_1 & 7) == 0) {
    uVar1 = SYS_OBJ_29F8(param_1);
  }
  return uVar1;
}



