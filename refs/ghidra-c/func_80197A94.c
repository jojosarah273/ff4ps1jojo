
void PAD_init(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  _remove_ChgclrPAD();
  FUN_801976e8();
  _patch_pad();
  FUN_801976f8();
  ChangeClearPAD(0);
  PAD_OBJ_16C();
  PAD_init2(param_1,param_2,param_3,param_4);
  DAT_8019dcb4 = 1;
  return;
}



