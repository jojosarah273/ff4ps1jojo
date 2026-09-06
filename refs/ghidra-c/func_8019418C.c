
int SetGraphDebug(int level)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_8019db56;
  DAT_8019db56 = (byte)level;
  if ((level & 0xffU) != 0) {
    (*(code *)PTR_printf_8019db50)
              ("SetGraphDebug:level:%d,type:%d reverse:%d\n",level & 0xff,DAT_8019db54,DAT_8019db57)
    ;
  }
  return uVar1;
}



