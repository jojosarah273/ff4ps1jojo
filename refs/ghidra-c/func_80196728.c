
undefined4 SYS_OBJ_2710(void)

{
  undefined4 uVar1;
  uint unaff_s0;
  
  SetIntrMask(DAT_8019dc8c);
  uVar1 = 0;
  if ((unaff_s0 & 7) == 0) {
    uVar1 = SYS_OBJ_29F8();
  }
  return uVar1;
}



