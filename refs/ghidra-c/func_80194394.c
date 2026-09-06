
int DrawSync(int mode)

{
  int iVar1;
  
  if (1 < DAT_8019db56) {
    (*(code *)PTR_printf_8019db50)("DrawSync(%d)...\n",mode);
  }
  iVar1 = (**(code **)(PTR_PTR_8019db4c + 0x3c))(mode);
  return iVar1;
}



