
SpuStEnv * SpuStInit(long param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_801f67d8;
  DAT_8019b584 = 0x10;
  DAT_801f67a4 = 0;
  DAT_801f67a8 = 0;
  DAT_801f67ac = 0;
  DAT_801f67b0 = 0;
  DAT_801f67b4 = 0;
  DAT_8019b588 = 0;
  DAT_8019b58c = 0;
  DAT_8019b590 = 0;
  DAT_8019b594 = 0;
  DAT_8019b598 = 0;
  DAT_8019b59c = 0;
  DAT_8019b5a0 = 0;
  DAT_8019b5a4 = 0;
  DAT_8019b5a8 = 0;
  DAT_801f67b8 = 0x18;
  DAT_801f67bc = 0x18;
  DAT_801f67c0 = 0x18;
  DAT_801f67c4 = 0x18;
  DAT_801f67c8 = 0x18;
  do {
    *puVar1 = 6;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 0x10;
  } while (iVar2 < 0x18);
  DAT_801f67d0 = 0;
  DAT_801f67d4 = 0;
  DAT_801f6958 = 0;
  DAT_801f695c = 0;
  DAT_801f6960 = 0;
  DAT_801f6964 = 0;
  return (SpuStEnv *)&DAT_801f67d0;
}



