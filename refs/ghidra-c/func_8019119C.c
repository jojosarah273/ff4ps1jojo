
void CD_initintr(void)

{
  DAT_8019b9f0 = 0;
  DAT_8019b9ec = 0;
  DAT_8019b9fc = 0;
  DAT_8019b9f8 = 0;
  ResetCallback();
  InterruptCallback(2,BIOS_1_OBJ_14A4);
  return;
}



