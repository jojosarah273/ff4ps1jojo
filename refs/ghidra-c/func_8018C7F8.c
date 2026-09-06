
/* Possible S_W.OBJ/SpuWrite */

ulong SpuRead(uchar *addr,ulong size)

{
  if (0x7eff0 < size) {
    size = 0x7eff0;
  }
  _spu_Fw(addr,size);
  if (DAT_8019b14c == 0) {
    DAT_8019b148 = 0;
  }
  return size;
}



