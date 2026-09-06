
undefined4 EVENT_OBJ_90(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CD_init();
  if (iVar1 == 0) {
    CD_initvol();
    uVar2 = EVENT_OBJ_BC();
    return uVar2;
  }
  return 0;
}



