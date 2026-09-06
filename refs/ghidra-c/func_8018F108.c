
long _card_clear(long chan)

{
  long lVar1;
  
  _new_card();
  lVar1 = _card_write(chan,0x3f,(uchar *)0x0);
  return lVar1;
}



