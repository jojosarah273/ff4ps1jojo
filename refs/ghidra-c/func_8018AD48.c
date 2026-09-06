
/* Possible S_Q.OBJ/SpuQuit */

void FUN_8018ad48(void)

{
  if (DAT_8019b104 == 1) {
    DAT_8019b104 = 0;
    FUN_801976e8();
    DAT_8019b14c = 0;
    DAT_8019b150 = 0;
    FUN_8018acf8(0);
    CloseEvent(DAT_8019b09c);
    DisableEvent(DAT_8019b09c);
    FUN_801976f8();
  }
  return;
}



