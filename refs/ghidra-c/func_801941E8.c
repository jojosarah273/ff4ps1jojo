
byte SetGraphQueue(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_8019db55;
  if (1 < DAT_8019db56) {
    (*(code *)PTR_printf_8019db50)("SetGrapQue(%d)...\n",param_1);
  }
  if (param_1 != DAT_8019db55) {
    (**(code **)(PTR_PTR_8019db4c + 0x34))(1);
    DAT_8019db55 = (byte)param_1;
    DMACallback(2,0);
  }
  return bVar1;
}



