
code * startIntrVSync(void)

{
  *(undefined4 *)PTR_TMR_HRETRACE_MODE_8019cf38 = 0x100;
  DAT_8019cf34 = 0;
  INTR_VB_OBJ_F0(&DAT_8019cf14,8);
  InterruptCallback(0,INTR_VB_OBJ_58);
  return INTR_VB_OBJ_C4;
}



