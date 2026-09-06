
void ST_OBJ_1174(void)

{
  SpuSetIRQ(0);
  DAT_8019b584 = 0x43;
  SpuSetIRQCallback(DAT_801f67b4);
  FUN_8018e4b8(DAT_801f67b0);
  if (DAT_801f67d4 != 0) {
    _spu_FsetPCR(1);
  }
  if ((DAT_801f67ac != (code *)0x0) && (DAT_8019b5a0 != 0)) {
    (*DAT_801f67ac)(DAT_8019b5a0,8);
  }
  DAT_8019b5a0 = 0;
  DAT_8019b5a4 = 0;
  DAT_8019b584 = 0x10;
  return;
}



