
undefined4 ISO9660_OBJ_5BC(int param_1,char *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar3 = 0;
  pcVar5 = &DAT_801f711c;
  iVar4 = 0;
  while( true ) {
    if (*(int *)((int)&DAT_801f7114 + iVar4) == 0) {
      return 0xffffffff;
    }
    if ((*(int *)((int)&DAT_801f7114 + iVar4) == param_1) &&
       (iVar1 = strcmp(param_2,pcVar5), iVar1 == 0)) break;
    pcVar5 = pcVar5 + 0x2c;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x2c;
    if (0x7f < iVar3) {
      return 0xffffffff;
    }
  }
  uVar2 = ISO9660_OBJ_640();
  return uVar2;
}



