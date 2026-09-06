
void SYS_OBJ_3E4(undefined4 param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  if (DAT_8019db56 != '\x01') {
    if (DAT_8019db56 == '\x02') {
      (*(code *)PTR_printf_8019db50)(&DAT_800f3930,param_1);
      (*(code *)PTR_printf_8019db50)
                ("(%d,%d)-(%d,%d)\n",(int)*param_2,(int)param_2[1],(int)param_2[2],(int)param_2[3]);
      return;
    }
    SYS_OBJ_4F0();
    return;
  }
  iVar2 = (int)param_2[2];
  if ((iVar2 <= DAT_8019db58) && (iVar2 + *param_2 <= (int)DAT_8019db58)) {
    iVar1 = (int)param_2[1];
    if (((iVar1 <= DAT_8019db5a) &&
        (((iVar1 + param_2[3] <= (int)DAT_8019db5a && (0 < iVar2)) && (-1 < *param_2)))) &&
       ((-1 < iVar1 && (0 < param_2[3])))) {
      return;
    }
  }
  SYS_OBJ_4B4("%s:bad RECT");
  return;
}



