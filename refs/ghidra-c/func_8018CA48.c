
ulong SpuWritePartly(uchar *addr,ulong size)

{
  uint uVar1;
  uint uVar2;
  
  if (0x7eff0 < size) {
    size = 0x7eff0;
  }
  uVar2 = (uint)DAT_8019b12c;
  uVar1 = DAT_8019b13c & 0x1f;
  _spu_Fw(addr,size);
  DAT_8019b12c = _spu_FsetRXXa(0xffffffff,(uVar2 << uVar1) + size);
  if (DAT_8019b14c == 0) {
    DAT_8019b148 = 0;
  }
  return size;
}



