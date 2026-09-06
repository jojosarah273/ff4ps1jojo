
void FUN_8018767c(short param_1)

{
  SpuVoiceAttr local_90;
  SpuVoiceAttr local_50;
  
  local_90.mask = 3;
  local_90.voice = 0x800000;
  local_90.volume.right = 0;
  local_90.volume.left = param_1;
  SpuSetVoiceAttr(&local_90);
  local_50.mask = 3;
  local_50.voice = 0x400000;
  local_50.volume.left = 0;
  local_50.volume.right = param_1;
  SpuSetVoiceAttr(&local_50);
  return;
}



