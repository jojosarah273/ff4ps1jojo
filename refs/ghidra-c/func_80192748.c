
/* Possible D3_002.OBJ/DsGetSector
   Possible D3_003.OBJ/DsGetSector2
   Possible S_021.OBJ/CdGetSector
   Possible S_022.OBJ/CdGetSector2 */

bool FUN_80192748(void)

{
  int iVar1;
  
  iVar1 = CD_getsector2();
  return iVar1 == 0;
}



