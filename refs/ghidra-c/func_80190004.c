
bool ISO9660_OBJ_8FC(int param_1,int param_2,u_long *param_3)

{
  int iVar1;
  DslLOC aDStack_18 [2];
  
  DsIntToPos(param_2,aDStack_18);
  CdControl('\x02',&aDStack_18[0].minute,(u_char *)0x0);
  CdRead(param_1,param_3,0x80);
  iVar1 = CdReadSync(0,(u_char *)0x0);
  return iVar1 == 0;
}



