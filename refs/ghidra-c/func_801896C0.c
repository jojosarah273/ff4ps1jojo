
int FUN_801896c0(int param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  
  DAT_8019ed28 = param_2;
  DAT_8019ef50 = FUN_80191838(0);
  DAT_8019ef58 = FUN_801928a8(0);
  DAT_8019ef54 = FUN_80191858(&LAB_8018960c);
  iVar1 = param_1;
  puVar2 = DAT_8019ed28;
  if (0 < param_1) {
    do {
      *puVar2 = 0xffff;
      iVar1 = iVar1 + -1;
      puVar2 = puVar2 + 8;
    } while (iVar1 != 0);
  }
  DAT_8019ef40 = param_1 + -1;
  DAT_8019ef88 = 0;
  DAT_8019ef8c = 0;
  DAT_8019ef44 = 3;
  DAT_801f6678 = 0;
  return param_1;
}



