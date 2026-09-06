
/* WARNING: Removing unreachable block (ram,0x80193e5c) */

undefined4 FONT_OBJ_864(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  char *unaff_s3;
  char *pcVar8;
  int unaff_s4;
  uint unaff_s5;
  uint *in_stack_00000210;
  
  uVar5 = *in_stack_00000210;
  if ((int)uVar5 < 0) {
    uVar1 = FONT_OBJ_88C(-uVar5,param_2,0x2d);
    return uVar1;
  }
  iVar6 = 0;
  do {
    do {
      iVar7 = iVar6;
      unaff_s0 = unaff_s0 + -1;
      iVar6 = iVar7 + 1;
      uVar3 = (uint)((ulonglong)uVar5 * (ulonglong)unaff_s5 >> 0x23);
      *unaff_s0 = (char)uVar5 + (char)uVar3 * -10 + '0';
      uVar5 = uVar3;
    } while (iVar6 == 0);
  } while (uVar3 != 0);
  do {
    if (unaff_s2 <= iVar6) goto joined_r0x80193f70;
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
    if (iVar7 == -1) {
      do {
        pcVar8 = unaff_s3 + 1;
        cVar4 = *pcVar8;
        if (cVar4 == 0) {
          *(undefined1 *)(*(int *)(unaff_s1 + 0x24) + *(int *)(unaff_s1 + 0x28)) = 0;
          return *(undefined4 *)(unaff_s1 + 0x28);
        }
        if (cVar4 == unaff_s4) {
          pcVar8 = unaff_s3 + 2;
          cVar4 = *pcVar8;
          iVar6 = (int)cVar4;
          if (iVar6 != unaff_s4) {
            uVar1 = FONT_OBJ_820(iVar6,0xffffffff,iVar6 == 0x30);
            return uVar1;
          }
        }
        iVar6 = *(int *)(unaff_s1 + 0x28);
        *(char *)(*(int *)(unaff_s1 + 0x24) + iVar6) = cVar4;
        iVar6 = iVar6 + 1;
        *(int *)(unaff_s1 + 0x28) = iVar6;
        unaff_s3 = pcVar8;
      } while (iVar6 < *(int *)(unaff_s1 + 0x1c));
      uVar1 = FONT_OBJ_A58();
      return uVar1;
    }
    iVar6 = *(int *)(unaff_s1 + 0x28);
    *(char *)(*(int *)(unaff_s1 + 0x24) + iVar6) = *unaff_s0;
    iVar6 = iVar6 + 1;
    *(int *)(unaff_s1 + 0x28) = iVar6;
    unaff_s0 = unaff_s0 + 1;
    if (*(int *)(unaff_s1 + 0x1c) <= iVar6) break;
    iVar7 = iVar7 + -1;
  }
  goto FONT_OBJ_740;
}



