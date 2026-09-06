
/* WARNING: Removing unreachable block (ram,0x801978cc) */
/* WARNING: Removing unreachable block (ram,0x80197904) */
/* WARNING: Removing unreachable block (ram,0x80197908) */
/* WARNING: Removing unreachable block (ram,0x80197918) */
/* WARNING: Removing unreachable block (ram,0x801978bc) */
/* WARNING: Removing unreachable block (ram,0x8019792c) */
/* WARNING: Removing unreachable block (ram,0x8019793c) */
/* WARNING: Removing unreachable block (ram,0x80197940) */

DIRENTRY * firstfile(char *param_1,DIRENTRY *param_2)

{
  char cVar1;
  int in_zero;
  int iVar2;
  DIRENTRY *pDVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = &DAT_801febc0;
  cVar1 = *param_1;
  while (':' < cVar1) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
    cVar1 = *param_1;
  }
  *pcVar5 = '\0';
  puVar6 = *(undefined4 **)(in_zero + 0x150);
  puVar4 = puVar6 + (*(uint *)(in_zero + 0x154) / 0x50) * 0x14;
  while( true ) {
    if (puVar4 <= puVar6) {
      pDVar3 = (DIRENTRY *)FIRST_OBJ_180();
      return pDVar3;
    }
    if (((char *)*puVar6 != (char *)0x0) &&
       (iVar2 = strcmp((char *)*puVar6,&DAT_801febc0), iVar2 == 0)) break;
    puVar6 = puVar6 + 0x14;
  }
  DAT_801febb8 = puVar6[0xd];
  pDVar3 = (DIRENTRY *)FIRST_OBJ_D0();
  return pDVar3;
}



