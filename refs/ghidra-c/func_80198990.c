
undefined4 _err_math(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  DAT_8019ecf4 = param_1;
  DAT_8019ecf8 = param_2;
  if (param_1 == 0x21) {
    uVar1 = FERR_OBJ_4C(0xf4000002,0x301);
    return uVar1;
  }
  if (param_1 != 0x22) {
    uVar1 = FERR_OBJ_54();
    return uVar1;
  }
  DeliverEvent(0xf4000002,0x302);
  return 0;
}



