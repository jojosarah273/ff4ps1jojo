
uint DIVSF3_OBJ_F0(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint unaff_s0;
  
  if (0xfe < param_4) {
    _err_math(0x22,0xe);
    uVar1 = DIVSF3_OBJ_130();
    return uVar1;
  }
  return unaff_s0 | param_4 << 0x17 | param_1 & 0xff7fffff;
}



