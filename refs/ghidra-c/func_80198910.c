
void __subsf3(uint param_1,uint param_2)

{
  if ((param_2 & 0x7fffffff) == 0) {
    SUBSF3_OBJ_50();
    return;
  }
  if ((param_1 & 0x7fffffff) != 0) {
    __addsf3(param_1,param_2 ^ 0x80000000);
    SUBSF3_OBJ_50();
    return;
  }
  FUN_80198970(param_2);
  return;
}



