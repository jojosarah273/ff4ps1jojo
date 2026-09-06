
/* Possible NESF2.OBJ/__nesf2 */

undefined4 __eqsf2(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == param_2) ||
     ((uVar1 = 1, (param_1 & 0x7fffffff) == 0 && (uVar1 = 1, (param_2 & 0x7fffffff) == 0)))) {
    uVar1 = 0;
  }
  return uVar1;
}



