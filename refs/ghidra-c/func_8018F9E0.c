
bool ISO9660_OBJ_2D8(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strncmp(param_1,param_2,0xc);
  return iVar1 == 0;
}



