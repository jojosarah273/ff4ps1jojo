
/* Possible D3_003.OBJ/DsGetSector2
   Possible S_021.OBJ/CdGetSector
   Possible S_022.OBJ/CdGetSector2 */

int DsGetSector(void *madr,int size)

{
  int iVar1;
  
  iVar1 = CD_getsector();
  return (uint)(iVar1 == 0);
}



