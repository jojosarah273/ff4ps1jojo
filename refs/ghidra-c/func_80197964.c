
void FIRST_OBJ_19C(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int in_zero;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*param_1 == 0) {
    *param_1 = 1;
  }
  pcVar1 = DAT_801febb8;
  puVar4 = *(undefined4 **)(in_zero + 0x150);
  puVar3 = puVar4 + (*(uint *)(in_zero + 0x154) / 0x50) * 0x14;
  while( true ) {
    if (puVar3 <= puVar4) {
      (*DAT_801febb8)(param_1,param_2,param_3);
      return;
    }
    if (((char *)*puVar4 != (char *)0x0) &&
       (iVar2 = strcmp((char *)*puVar4,&DAT_801febc0), iVar2 == 0)) break;
    puVar4 = puVar4 + 0x14;
  }
  puVar4[0xd] = pcVar1;
  FIRST_OBJ_25C();
  return;
}



