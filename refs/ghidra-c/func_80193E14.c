
undefined4 FONT_OBJ_88C(uint param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  char *unaff_s3;
  char *pcVar7;
  int unaff_s4;
  uint unaff_s5;
  
  iVar5 = 0;
  do {
    do {
      pcVar7 = unaff_s0;
      iVar6 = iVar5;
      unaff_s0 = pcVar7 + -1;
      iVar5 = iVar6 + 1;
      uVar3 = (uint)((ulonglong)param_1 * (ulonglong)unaff_s5 >> 0x23);
      *unaff_s0 = (char)param_1 + (char)uVar3 * -10 + '0';
      param_1 = uVar3;
    } while (iVar5 == 0);
  } while (uVar3 != 0);
  if (param_3 != 0) {
    pcVar7[-2] = (char)param_3;
    uVar1 = FONT_OBJ_99C(0,iVar6 + 2);
    return uVar1;
  }
  do {
    if (unaff_s2 <= iVar5) goto joined_r0x80193f70;
    iVar2 = *(int *)(unaff_s1 + 0x28);
    *(undefined1 *)(*(int *)(unaff_s1 + 0x24) + iVar2) = 0x20;
    iVar2 = iVar2 + 1;
    *(int *)(unaff_s1 + 0x28) = iVar2;
    unaff_s2 = unaff_s2 + -1;
  } while (iVar2 < *(int *)(unaff_s1 + 0x1c));
FONT_OBJ_740:
  uVar1 = FONT_OBJ_A58();
  return uVar1;
joined_r0x80193f70:
  while( true ) {
    if (iVar6 == -1) {
      do {
        pcVar7 = unaff_s3 + 1;
        cVar4 = *pcVar7;
        if (cVar4 == 0) {
          *(undefined1 *)(*(int *)(unaff_s1 + 0x24) + *(int *)(unaff_s1 + 0x28)) = 0;
          return *(undefined4 *)(unaff_s1 + 0x28);
        }
        if (cVar4 == unaff_s4) {
          pcVar7 = unaff_s3 + 2;
          cVar4 = *pcVar7;
          iVar5 = (int)cVar4;
          if (iVar5 != unaff_s4) {
            uVar1 = FONT_OBJ_820(iVar5,0xffffffff,iVar5 == 0x30);
            return uVar1;
          }
        }
        iVar5 = *(int *)(unaff_s1 + 0x28);
        *(char *)(*(int *)(unaff_s1 + 0x24) + iVar5) = cVar4;
        iVar5 = iVar5 + 1;
        *(int *)(unaff_s1 + 0x28) = iVar5;
        unaff_s3 = pcVar7;
      } while (iVar5 < *(int *)(unaff_s1 + 0x1c));
      uVar1 = FONT_OBJ_A58();
      return uVar1;
    }
    iVar5 = *(int *)(unaff_s1 + 0x28);
    *(char *)(*(int *)(unaff_s1 + 0x24) + iVar5) = *unaff_s0;
    iVar5 = iVar5 + 1;
    *(int *)(unaff_s1 + 0x28) = iVar5;
    unaff_s0 = unaff_s0 + 1;
    if (*(int *)(unaff_s1 + 0x1c) <= iVar5) break;
    iVar6 = iVar6 + -1;
  }
  goto FONT_OBJ_740;
}



