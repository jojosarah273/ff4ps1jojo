
undefined4 INTR_OBJ_624(void)

{
  undefined4 uVar1;
  
  if (DAT_8019be6c == 0) {
    HookEntryInt(&DAT_8019bea4);
    DAT_8019be6c = 1;
    *(undefined2 *)PTR_I_MASK_8019cefc = DAT_8019be9e;
    *(undefined4 *)PTR_DMA_DPCR_8019cf00 = DAT_8019bea0;
    FUN_801976f8();
    uVar1 = INTR_OBJ_68C();
    return uVar1;
  }
  return 0;
}



