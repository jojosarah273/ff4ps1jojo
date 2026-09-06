
undefined2 * INTR_OBJ_584(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)0x0;
  if (DAT_8019be6c != 0) {
    FUN_801976e8();
    puVar2 = PTR_I_MASK_8019cefc;
    puVar1 = PTR_I_STAT_8019cef8;
    DAT_8019be9e = *(undefined2 *)PTR_I_MASK_8019cefc;
    DAT_8019bea0 = *(undefined4 *)PTR_DMA_DPCR_8019cf00;
    *(undefined2 *)PTR_I_MASK_8019cefc = 0;
    *(undefined2 *)puVar1 = *(undefined2 *)puVar2;
    *(uint *)PTR_DMA_DPCR_8019cf00 = *(uint *)PTR_DMA_DPCR_8019cf00 & 0x77777777;
    ResetEntryInt();
    DAT_8019be6c = 0;
    puVar3 = &DAT_8019be6c;
  }
  return puVar3;
}



