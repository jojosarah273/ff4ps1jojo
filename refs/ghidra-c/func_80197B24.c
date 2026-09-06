
long InitPAD(char *param_1,long param_2,char *param_3,long param_4)

{
  _remove_ChgclrPAD();
  FUN_801976e8();
  _patch_pad();
  FUN_801976f8();
  ChangeClearPAD(0);
  PAD_OBJ_16C();
  InitPAD2(param_1,param_2,param_3,param_4);
  DAT_8019dcb4 = 1;
  return 1;
}



