
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int FntPrint(void)

{
  int iVar1;
  char cVar2;
  char *in_a0;
  int iVar3;
  char *in_a1;
  char *pcVar4;
  char *local_res0;
  
  if ((((-1 < (int)in_a0) && (pcVar4 = in_a1, local_res0 = in_a0, (int)in_a0 < DAT_8019d0f4)) ||
      (local_res0 = DAT_8019d0f8, pcVar4 = in_a0,
      *(int *)(&DAT_8019cf98 + (int)DAT_8019d0f8 * 0x30) != 0)) &&
     (iVar1 = (int)local_res0 * 0x30,
     *(int *)(&DAT_8019cf9c + iVar1) < *(int *)(&DAT_8019cf90 + iVar1))) {
    cVar2 = *pcVar4;
    while( true ) {
      if (cVar2 == '\0') {
        *(undefined1 *)(*(int *)(&DAT_8019cf98 + iVar1) + *(int *)(&DAT_8019cf9c + iVar1)) = 0;
        return *(int *)(&DAT_8019cf9c + iVar1);
      }
      if (cVar2 == '%') {
        pcVar4 = pcVar4 + 1;
        cVar2 = *pcVar4;
        iVar3 = (int)cVar2;
        if (iVar3 != 0x25) {
          iVar1 = FONT_OBJ_820(iVar3,in_a1,iVar3 == 0x30);
          return iVar1;
        }
      }
      iVar3 = *(int *)(&DAT_8019cf9c + iVar1);
      *(char *)(*(int *)(&DAT_8019cf98 + iVar1) + iVar3) = cVar2;
      iVar3 = iVar3 + 1;
      *(int *)(&DAT_8019cf9c + iVar1) = iVar3;
      pcVar4 = pcVar4 + 1;
      if (*(int *)(&DAT_8019cf90 + iVar1) <= iVar3) break;
      cVar2 = *pcVar4;
    }
    iVar1 = FONT_OBJ_A58();
    return iVar1;
  }
  iVar1 = FONT_OBJ_A58();
  return iVar1;
}



