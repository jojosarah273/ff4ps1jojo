
undefined2 * INTR_OBJ_194(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = PTR_I_MASK_8019cefc;
  puVar1 = PTR_I_STAT_8019cef8;
  puVar3 = (undefined2 *)0x0;
  if (DAT_8019be6c == 0) {
    *(undefined2 *)PTR_I_MASK_8019cefc = 0;
    *(undefined2 *)puVar1 = *(undefined2 *)puVar2;
    *(undefined4 *)PTR_DMA_DPCR_8019cf00 = 0x33333333;
    INTR_OBJ_69C(&DAT_8019be6c,0x41a);
    iVar4 = setjmp(&DAT_8019bea4);
    if (iVar4 != 0) {
      INTR_OBJ_26C();
    }
    DAT_8019bea8 = &DAT_8019ce84;
    HookEntryInt(&DAT_8019bea4);
    DAT_8019be6c = 1;
    uVar5 = startIntrVSync();
    *(undefined4 *)(PTR_PTR_8019cef4 + 0x14) = uVar5;
    uVar5 = startIntrDMA();
    *(undefined4 *)(PTR_PTR_8019cef4 + 4) = uVar5;
    FUN_80197630();
    puVar3 = &DAT_8019be6c;
    FUN_801976f8();
  }
  return puVar3;
}



