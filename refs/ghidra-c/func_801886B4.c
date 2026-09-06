
void FUN_801886b4(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  SpuVoiceAttr local_58;
  
  local_58.voice = 1 << (DAT_801f6690 & 0x1f);
  local_58.mask = 3;
  local_58.volume.left = 0;
  local_58.volume.right = 0;
  SpuSetVoiceAttr(&local_58);
  if (DAT_801f668c != 0) {
    local_58.voice = 1 << (DAT_801f6691 & 0x1f);
    SpuSetVoiceAttr(&local_58);
  }
  DAT_801f6678 = 0;
  uVar3 = (uint)DAT_801f6690;
  uVar1 = (uint)DAT_801f668c;
  uVar2 = (uint)DAT_801f6691;
  FUN_80188fd0(0);
  SpuSetKey(0,1 << (uVar3 & 0x1f) | uVar1 << (uVar2 & 0x1f));
  SpuStQuit();
  SpuFree(DAT_801f667c);
  FUN_80191858(DAT_8019ef80);
  SpuStSetPreparationFinishedCallback((SpuStCallbackProc)0x0);
  SpuStSetTransferFinishedCallback((SpuStCallbackProc)0x0);
  SpuStSetStreamFinishedCallback((SpuStCallbackProc)0x0);
  return;
}



