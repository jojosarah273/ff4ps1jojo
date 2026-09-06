
undefined4 SYS_OBJ_28B4(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = VSync(-1);
  iVar1 = DAT_8019dc94;
  if ((iVar2 <= DAT_8019dc90) && (DAT_8019dc94 = DAT_8019dc94 + 1, iVar1 < 0xf0001)) {
    return 0;
  }
  uVar3 = *(undefined4 *)PTR_GPU_REG1_8019dc5c;
  printf("GPU timeout:que=%d,stat=%08x,chcr=%08x,madr=%08x\n",DAT_8019dc7c - DAT_8019dc80 & 0x3f,
         *(undefined4 *)PTR_GPU_REG1_8019dc5c,*(undefined4 *)PTR_DMA_GPU_CHCR_8019dc68,
         *(undefined4 *)PTR_DMA_GPU_MADR_8019dc60);
  DAT_8019dc8c = SetIntrMask(0);
  DAT_8019dc80 = 0;
  DAT_8019dc7c = 0;
  *(undefined4 *)PTR_DMA_GPU_CHCR_8019dc68 = 0x401;
  *(uint *)PTR_DMA_DPCR_8019dc78 = *(uint *)PTR_DMA_DPCR_8019dc78 | 0x800;
  *(undefined4 *)PTR_GPU_REG1_8019dc5c = 0x2000000;
  *(undefined4 *)PTR_GPU_REG1_8019dc5c = 0x1000000;
  SetIntrMask(DAT_8019dc8c);
  uVar3 = SYS_OBJ_29E8();
  return uVar3;
}



