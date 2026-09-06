
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void SpuStart(void)

{
  if (DAT_8019b104 == 0) {
    DAT_8019b104 = 1;
    FUN_801976e8();
    FUN_8018acf8(_spu_FiDMA);
    DAT_8019b09c = OpenEvent(0xf0000009,0x20,0x2000,(func *)0x0);
    EnableEvent(DAT_8019b09c);
    FUN_801976f8();
  }
  return;
}



