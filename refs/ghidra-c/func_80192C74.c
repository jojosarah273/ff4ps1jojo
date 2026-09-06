
undefined2 SetIntrMask(undefined2 param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)PTR_I_MASK_8019cefc;
  *(undefined2 *)PTR_I_MASK_8019cefc = param_1;
  return uVar1;
}



