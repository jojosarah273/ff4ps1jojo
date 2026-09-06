
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

long SpuStQuit(void)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  
  lVar1 = -3;
  if (DAT_8019b584 == 0x10) {
    iVar3 = 0;
    puVar2 = &DAT_801f67d8;
    DAT_8019b584 = 0;
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
      *puVar2 = 6;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)(puVar2 + 0xc) = 0;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x10;
    } while (iVar3 < 0x18);
    lVar1 = 1;
    DAT_801f67d0 = 0;
    DAT_801f67d4 = 0;
    DAT_801f6958 = 0;
    DAT_801f695c = 0;
    DAT_801f6960 = 0;
    DAT_801f6964 = 0;
  }
  return lVar1;
}



