
void FUN_80189b8c(long param_1,short param_2,short param_3,long param_4)

{
  SpuCommonAttr local_30;
  
  local_30.cd.volume.left = param_2 << 7;
  local_30.cd.volume.right = param_3 << 7;
  local_30.mask = 0x3c0;
  local_30.cd.reverb = param_4;
  local_30.cd.mix = param_1;
  SpuSetCommonAttr(&local_30);
  return;
}



