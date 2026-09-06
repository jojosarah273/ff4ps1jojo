
void CDR_1_OBJ_2A8(void)

{
  DAT_8019bd9c = DAT_8019bd9c + DAT_8019bda4 * 4;
  DAT_8019bda8 = DAT_8019bda8 + -1;
  DAT_8019bdb4 = DAT_8019bdb4 + 1;
  if (DAT_8019bda8 == 0) {
    FUN_80191858(DAT_8019bdc0);
    if ((DAT_8019b9c8 & 1) != 0) {
      FUN_80192858(DAT_8019bdc4);
    }
    FUN_80191838(&CDR_1_OBJ_0);
    CdControlF('\t',(u_char *)0x0);
    DAT_8019bdb8 = 1;
    if (DAT_8019b9c4 != (code *)0x0) {
      (*DAT_8019b9c4)(2,DAT_8019bdc8);
    }
  }
  return;
}



