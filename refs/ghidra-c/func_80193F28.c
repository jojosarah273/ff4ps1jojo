
undefined4 FONT_OBJ_9A0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int in_v0;
  int iVar2;
  char cVar3;
  undefined1 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  char *unaff_s3;
  char *pcVar4;
  int unaff_s4;
  
  if (in_v0 != 0) {
    do {
      iVar2 = *(int *)(unaff_s1 + 0x28);
      *(undefined1 *)(*(int *)(unaff_s1 + 0x24) + iVar2) = 0x20;
      iVar2 = iVar2 + 1;
      *(int *)(unaff_s1 + 0x28) = iVar2;
      unaff_s2 = unaff_s2 + -1;
      if (*(int *)(unaff_s1 + 0x1c) <= iVar2) goto FONT_OBJ_740;
    } while (param_2 < unaff_s2);
  }
  do {
    param_2 = param_2 + -1;
    if (param_2 == -1) {
      do {
        pcVar4 = unaff_s3 + 1;
        cVar3 = *pcVar4;
        if (cVar3 == 0) {
          *(undefined1 *)(*(int *)(unaff_s1 + 0x24) + *(int *)(unaff_s1 + 0x28)) = 0;
          return *(undefined4 *)(unaff_s1 + 0x28);
        }
        if (cVar3 == unaff_s4) {
          pcVar4 = unaff_s3 + 2;
          cVar3 = *pcVar4;
          iVar2 = (int)cVar3;
          if (iVar2 != unaff_s4) {
            uVar1 = FONT_OBJ_820(iVar2,0xffffffff,iVar2 == 0x30);
            return uVar1;
          }
        }
        iVar2 = *(int *)(unaff_s1 + 0x28);
        *(char *)(*(int *)(unaff_s1 + 0x24) + iVar2) = cVar3;
        iVar2 = iVar2 + 1;
        *(int *)(unaff_s1 + 0x28) = iVar2;
        unaff_s3 = pcVar4;
      } while (iVar2 < *(int *)(unaff_s1 + 0x1c));
      uVar1 = FONT_OBJ_A58();
      return uVar1;
    }
    iVar2 = *(int *)(unaff_s1 + 0x28);
    *(undefined1 *)(*(int *)(unaff_s1 + 0x24) + iVar2) = *unaff_s0;
    iVar2 = iVar2 + 1;
    *(int *)(unaff_s1 + 0x28) = iVar2;
    unaff_s0 = unaff_s0 + 1;
  } while (iVar2 < *(int *)(unaff_s1 + 0x1c));
FONT_OBJ_740:
  uVar1 = FONT_OBJ_A58();
  return uVar1;
}



