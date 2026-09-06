
void FUN_80178988(char *param_1,u_long *param_2)

{
  CdlFILE *pCVar1;
  int iVar2;
  uint uVar3;
  CdlFILE CStack_68;
  undefined2 local_50 [32];
  
  local_50[0] = DAT_8019ed0c;
  strcat((char *)local_50,param_1);
  strcat((char *)local_50,";1");
  do {
    pCVar1 = CdSearchFile(&CStack_68,(char *)local_50);
  } while (pCVar1 == (CdlFILE *)0x0);
  do {
    uVar3 = CStack_68.size + 0x7ff;
    CdControl('\x02',(u_char *)&CStack_68,(u_char *)0x0);
    CdRead(uVar3 >> 0xb,param_2,0x80);
    while (iVar2 = CdReadSync(1,(u_char *)0x0), 0 < iVar2) {
      VSync(0);
    }
  } while (iVar2 != 0);
  return;
}



