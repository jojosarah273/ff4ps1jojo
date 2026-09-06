
uint ADDSF3_OBJ_C4(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int in_v1;
  uint uVar2;
  uint unaff_s0;
  
  uVar2 = in_v1 + param_1;
  if ((int)uVar2 < 0) {
    uVar2 = -uVar2;
    unaff_s0 = 0x80000000;
  }
  else if (uVar2 == 0) {
    uVar2 = ADDSF3_OBJ_194();
    return uVar2;
  }
  for (; (uVar2 & 0xe0000000) == 0; uVar2 = uVar2 << 1) {
    param_3 = param_3 - 1;
  }
  if ((uVar2 & 0x40000000) != 0) {
    uVar2 = (int)uVar2 >> 1;
    param_3 = param_3 + 1;
  }
  uVar1 = uVar2 + 0x20;
  if ((uVar2 & 0x40) == 0) {
    uVar1 = uVar2 + 0x1f;
  }
  if ((uVar1 & 0x40000000) != 0) {
    uVar1 = (int)uVar1 >> 1;
    param_3 = param_3 + 1;
  }
  if (param_3 < 0xff) {
    return unaff_s0 | param_3 << 0x17 | (int)uVar1 >> 6 & 0xff7fffffU;
  }
  _err_math(0x22,10);
  uVar2 = ADDSF3_OBJ_190();
  return uVar2;
}



