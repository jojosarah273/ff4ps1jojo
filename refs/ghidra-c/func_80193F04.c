
undefined4 FONT_OBJ_97C(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  int unaff_s1;
  int unaff_s2;
  char *unaff_s3;
  int unaff_s4;
  undefined4 *in_stack_00000210;
  
  pcVar5 = (char *)*in_stack_00000210;
  iVar2 = strlen(pcVar5);
  do {
    if (unaff_s2 <= iVar2) goto joined_r0x80193f70;
    iVar3 = *(int *)(unaff_s1 + 0x28);
    *(undefined1 *)(*(int *)(unaff_s1 + 0x24) + iVar3) = 0x20;
    iVar3 = iVar3 + 1;
    *(int *)(unaff_s1 + 0x28) = iVar3;
    unaff_s2 = unaff_s2 + -1;
  } while (iVar3 < *(int *)(unaff_s1 + 0x1c));
FONT_OBJ_740:
  uVar1 = FONT_OBJ_A58();
  return uVar1;
joined_r0x80193f70:
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 == -1) {
      do {
        pcVar5 = unaff_s3 + 1;
        cVar4 = *pcVar5;
        if (cVar4 == 0) {
          *(undefined1 *)(*(int *)(unaff_s1 + 0x24) + *(int *)(unaff_s1 + 0x28)) = 0;
          return *(undefined4 *)(unaff_s1 + 0x28);
        }
        if (cVar4 == unaff_s4) {
          pcVar5 = unaff_s3 + 2;
          cVar4 = *pcVar5;
          iVar2 = (int)cVar4;
          if (iVar2 != unaff_s4) {
            uVar1 = FONT_OBJ_820(iVar2,0xffffffff,iVar2 == 0x30);
            return uVar1;
          }
        }
        iVar2 = *(int *)(unaff_s1 + 0x28);
        *(char *)(*(int *)(unaff_s1 + 0x24) + iVar2) = cVar4;
        iVar2 = iVar2 + 1;
        *(int *)(unaff_s1 + 0x28) = iVar2;
        unaff_s3 = pcVar5;
      } while (iVar2 < *(int *)(unaff_s1 + 0x1c));
      uVar1 = FONT_OBJ_A58();
      return uVar1;
    }
    iVar3 = *(int *)(unaff_s1 + 0x28);
    *(char *)(*(int *)(unaff_s1 + 0x24) + iVar3) = *pcVar5;
    iVar3 = iVar3 + 1;
    *(int *)(unaff_s1 + 0x28) = iVar3;
    pcVar5 = pcVar5 + 1;
  } while (iVar3 < *(int *)(unaff_s1 + 0x1c));
  goto FONT_OBJ_740;
}



