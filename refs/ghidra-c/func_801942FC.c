
void SetDispMask(int mask)

{
  undefined4 uVar1;
  
  if (1 < DAT_8019db56) {
    (*(code *)PTR_printf_8019db50)("SetDispMask(%d)...\n",mask);
  }
  if (mask == 0) {
    SYS_OBJ_2ED8(&DAT_8019dbc0,0xffffffff,0x14);
  }
  uVar1 = 0x3000001;
  if (mask != 0) {
    uVar1 = 0x3000000;
  }
  (**(code **)(PTR_PTR_8019db4c + 0x10))(uVar1);
  return;
}



