
void FUN_80188ef8(u_char param_1,u_char param_2,u_char param_3,u_char param_4)

{
  DslATV local_10 [2];
  
  local_10[0].val0 = param_1;
  local_10[0].val1 = param_2;
  local_10[0].val2 = param_3;
  local_10[0].val3 = param_4;
  DsMix(local_10);
  return;
}



