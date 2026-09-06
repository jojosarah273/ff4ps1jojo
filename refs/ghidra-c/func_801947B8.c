
u_long * ClearOTag(u_long *ot,int n)

{
  if (1 < DAT_8019db56) {
    (*(code *)PTR_printf_8019db50)("ClearOTag(%08x,%d)...\n",ot,n);
  }
  while (n = n + -1, n != 0) {
    *(undefined1 *)((int)ot + 3) = 0;
    *ot = *ot & 0xff000000 | (uint)(ot + 1) & 0xffffff;
    ot = ot + 1;
  }
  DAT_8019dc14 = 0x419dc00;
  *ot = 0x19dc14;
  return ot;
}



