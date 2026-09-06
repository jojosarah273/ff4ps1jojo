
int CDR_1_OBJ_934(void)

{
  int iVar1;
  int unaff_s0;
  int *unaff_s1;
  int *unaff_s2;
  int unaff_s3;
  
  while ((unaff_s3 == 0 && (((*unaff_s2 != 0 && (unaff_s0 == 0)) || (0 < unaff_s0))))) {
    iVar1 = VSync(-1);
    unaff_s0 = -1;
    if (iVar1 <= *unaff_s1 + 0x4b0) {
      if ((unaff_s1[-2] < 0) || (iVar1 = VSync(-1), unaff_s1[-1] + 0x3c < iVar1)) {
        CDR_1_OBJ_378(1);
        iVar1 = CDR_1_OBJ_934();
        return iVar1;
      }
      unaff_s0 = unaff_s1[-2];
    }
  }
  FUN_80191818(1);
  if ((*unaff_s2 != 0) && (unaff_s0 == 0)) {
    unaff_s0 = 1;
  }
  return unaff_s0;
}



