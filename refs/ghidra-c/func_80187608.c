
void FUN_80187608(void)

{
  SpuCommonAttr local_30;
  
  FUN_80188c58(1);
  local_30.mask = 0x3cf;
  local_30.mvol.left = 0x3f80;
  local_30.mvol.right = 0x3f80;
  local_30.mvolmode.left = 0;
  local_30.mvolmode.right = 0;
  local_30.cd.volume.left = 0x3f80;
  local_30.cd.volume.right = 0x3f80;
  local_30.cd.reverb = 0;
  local_30.cd.mix = 1;
  SpuSetCommonAttr(&local_30);
  FUN_80188c58(0);
  FUN_80188ef8(0xff,0,0xff,0);
  return;
}



