
void FUN_80189ae8(short param_1,short param_2)

{
  SpuCommonAttr local_30;
  
  local_30.mvol.left = param_1 << 7;
  local_30.mvol.right = param_2 << 7;
  local_30.mask = 0xf;
  local_30.mvolmode.left = 0;
  local_30.mvolmode.right = 0;
  SpuSetCommonAttr(&local_30);
  return;
}



