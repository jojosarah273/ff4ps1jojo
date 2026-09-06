
void FUN_800f7968(byte *param_1)

{
  *DAT_8019ed40 = *DAT_8019ed40 | *param_1;
  DAT_8019ed40[1] = DAT_8019ed40[1] | param_1[1];
  return;
}



