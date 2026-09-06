
int CdReadSync(int mode,u_char *result)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar1 = VSync(-1);
    iVar2 = -1;
    if ((iVar1 <= DAT_8019bdb0 + 0x4b0) &&
       ((DAT_8019bda8 < 0 || (iVar1 = VSync(-1), iVar2 = DAT_8019bda8, DAT_8019bdac + 0x3c < iVar1))
       )) {
      CDR_1_OBJ_378(1);
      iVar2 = CDR_1_OBJ_934();
      return iVar2;
    }
  } while ((mode == 0) && (((DAT_8019bdb8 != 0 && (iVar2 == 0)) || (0 < iVar2))));
  FUN_80191818(1,result);
  if ((DAT_8019bdb8 != 0) && (iVar2 == 0)) {
    iVar2 = 1;
  }
  return iVar2;
}



