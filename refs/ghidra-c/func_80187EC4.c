
int FUN_80187ec4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SpuStEnv *pSVar4;
  undefined2 *puVar5;
  SpuVoiceAttr local_50;
  
  if (DAT_801f6678 < 1) {
    iVar3 = FUN_80188ae8(8);
    iVar2 = -1;
    iVar1 = DAT_8019ef8c;
    if (((iVar3 == 0) && (iVar2 = -1, 1 < DAT_801f6684)) && (iVar2 = -1, 1 < DAT_801f6688)) {
      SpuSetTransferMode(0);
      DAT_801f667c = SpuMallocWithStartAddr(DAT_801f667c,(uint)DAT_801f668c * 0x4000 + 0x4000);
      if (DAT_801f667c == 0xffffffff) {
        iVar2 = -2;
        iVar1 = DAT_8019ef8c;
      }
      else {
        pSVar4 = SpuStInit(0);
        DAT_8019ef5c = pSVar4;
        pSVar4->size = 0x4000;
        pSVar4->voice[DAT_801f6690].buf_addr = DAT_801f667c;
        if (DAT_801f668c != 0) {
          pSVar4->voice[DAT_801f6691].buf_addr = DAT_801f667c + 0x4000;
        }
        SpuStSetPreparationFinishedCallback((SpuStCallbackProc)&LAB_80188360);
        SpuStSetTransferFinishedCallback((SpuStCallbackProc)&LAB_80188448);
        SpuStSetStreamFinishedCallback(FUN_801886b4);
        DAT_8019ef80 = FUN_80191858(&LAB_801887a8);
        local_50.voice = 1 << (DAT_801f6690 & 0x1f);
        local_50.mask = 0xdf93;
        local_50.volume.left = (ushort)DAT_801f6692 << 7;
        if (DAT_801f668c == 0) {
          local_50.volume.right = (ushort)DAT_801f6693 << 7;
        }
        else {
          local_50.volume.right = 0;
        }
        local_50.pitch = 0x1000;
        local_50.r_mode = 3;
        local_50.s_mode = 3;
        local_50.a_mode = 3;
        local_50.rr = 0;
        local_50.sr = 0;
        local_50.dr = 0;
        local_50.ar = 0;
        local_50.sl = 0xf;
        local_50.addr = DAT_8019ef5c->voice[DAT_801f6690].buf_addr;
        SpuSetVoiceAttr(&local_50);
        if (DAT_801f668c != 0) {
          local_50.volume.left = 0;
          local_50.voice = 1 << (DAT_801f6691 & 0x1f);
          local_50.volume.right = (ushort)DAT_801f6693 << 7;
          local_50.addr = DAT_8019ef5c->voice[DAT_801f6691].buf_addr;
          SpuSetVoiceAttr(&local_50);
        }
        DAT_8019ed94 = 0;
        DAT_801f6678 = 2;
        FUN_80188c58(1);
        iVar1 = DAT_801f6684 * (4 << (DAT_801f668c & 0x1f));
        iVar2 = DsPosToInt(DAT_801f6694);
        DAT_8019ef78 = 0;
        FUN_801890e4(DAT_801f6680,iVar1,DAT_801f6694);
        iVar3 = DAT_8019ef40;
        DAT_8019ef68 = iVar2 + iVar1;
        DAT_8019ef74 = DAT_801f6684 / 2;
        DAT_8019ef6c = iVar2 + (DAT_801f6688 << (DAT_801f668c & 0x1f));
        if (DAT_801f668e != 0) {
          DAT_8019ef70 = iVar2 + (DAT_801f668e - 1 << (DAT_801f668c & 0x1f));
        }
        iVar2 = 0;
        puVar5 = (undefined2 *)(DAT_8019ef8c * 0x10 + DAT_8019ed28);
        *puVar5 = 0x201;
        *(int **)(puVar5 + 6) = &DAT_801f6678;
        iVar1 = iVar2;
        if (DAT_8019ef8c != iVar3) {
          iVar2 = DAT_8019ef8c + 1;
          iVar1 = iVar2;
        }
      }
    }
  }
  else {
    iVar2 = -3;
    iVar1 = DAT_8019ef8c;
  }
  DAT_8019ef8c = iVar1;
  return iVar2;
}



