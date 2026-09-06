
/* Possible NEGSF2.OBJ/__negsf2 */

uint FUN_80198970(uint param_1)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 ^ 0x80000000;
  }
  return param_1;
}



