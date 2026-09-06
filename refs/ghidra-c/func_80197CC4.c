
undefined4 PAD_OBJ_24C(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*(uint *)(PTR_I_STAT_8019dcbc + 4) & 1) != 0) &&
     (uVar1 = 1, (*(uint *)PTR_I_STAT_8019dcbc & 1) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}



