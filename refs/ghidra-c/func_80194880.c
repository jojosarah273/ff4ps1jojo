
u_long * ClearOTagR(u_long *ot,int n)

{
  if (1 < DAT_8019db56) {
    (*(code *)PTR_printf_8019db50)("ClearOTagR(%08x,%d)...\n",ot,n);
  }
  (**(code **)(PTR_PTR_8019db4c + 0x2c))(ot,n);
  DAT_8019dc14 = 0x419dc00;
  *ot = 0x19dc14;
  return ot;
}



