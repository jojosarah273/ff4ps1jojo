
void FUN_80179248(undefined4 param_1,undefined2 *param_2,undefined4 param_3,undefined2 *param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  *param_6 = param_1;
  param_6[1] = param_5;
  param_6[2] = param_3;
  *(undefined2 *)(param_6 + 3) = *param_4;
  *(undefined2 *)((int)param_6 + 0xe) = param_4[1];
  *(undefined2 *)(param_6 + 4) = param_4[2];
  *(undefined2 *)((int)param_6 + 0x12) = param_4[3];
  *(undefined2 *)(param_6 + 5) = *param_2;
  *(undefined2 *)((int)param_6 + 0x16) = param_2[1];
  *(undefined2 *)(param_6 + 6) = param_2[2];
  *(undefined2 *)((int)param_6 + 0x1a) = param_2[3];
  return;
}



