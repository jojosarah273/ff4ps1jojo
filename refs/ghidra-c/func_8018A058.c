
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _SpuInit(void)

{
  undefined2 *puVar1;
  int iVar2;
  int in_a0;
  
  ResetCallback();
  _spu_init();
  if (in_a0 == 0) {
    iVar2 = 0x17;
    puVar1 = &DAT_8019b0fe;
    do {
      *puVar1 = 0xc000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -1;
    } while (-1 < iVar2);
  }
  SpuStart();
  DAT_8019b0a8 = 0;
  DAT_8019b0ac = 0;
  DAT_8019b0b8 = 0;
  DAT_8019b0bc = 0;
  DAT_8019b0be = 0;
  DAT_8019b0c0 = 0;
  DAT_8019b0c4 = 0;
  DAT_8019b0b0 = DAT_8019b6d4;
  _spu_FsetRXX(0xd1,DAT_8019b6d4,0);
  DAT_8019b174 = 0;
  DAT_8019b178 = 0;
  DAT_8019b17c = 0;
  DAT_8019b0a4 = 0;
  DAT_8019b130 = 0;
  DAT_8019b0a0 = 0;
  DAT_8019b0cc = 0;
  DAT_8019b0c8 = 0;
  DAT_8019b100 = 0;
  return;
}



