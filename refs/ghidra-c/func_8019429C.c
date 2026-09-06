
u_long DrawSyncCallback(func *func)

{
  u_long uVar1;
  
  if (1 < DAT_8019db56) {
    (*(code *)PTR_printf_8019db50)("DrawSyncCallback(%08x)...\n",func);
  }
  uVar1 = (u_long)DAT_8019db60;
  DAT_8019db60 = func;
  return uVar1;
}



