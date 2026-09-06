
void FUN_80189790(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  SsUtReverbOff();
  SpuInitMalloc(8,&DAT_801f6698);
  SpuSetTransferMode(0);
  SpuSetTransferStartAddr(0x1010);
  SpuWrite0(0x7eff0);
  iVar2 = 7;
  puVar1 = &DAT_801f6774;
  DAT_8019ef98 = 0;
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -5;
  } while (-1 < iVar2);
  FUN_8018c438(0,0xffffff);
  FUN_8018b548(0,0xffffff);
  return;
}



