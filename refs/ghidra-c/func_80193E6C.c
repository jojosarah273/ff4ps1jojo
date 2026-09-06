
undefined4 FONT_OBJ_8E4(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *unaff_s0;
  int unaff_s1;
  int unaff_s2;
  char *unaff_s3;
  char *pcVar8;
  int unaff_s4;
  uint *in_stack_00000210;
  
  uVar5 = *in_stack_00000210;
  iVar6 = 0;
  do {
    do {
      iVar7 = iVar6;
      unaff_s0 = unaff_s0 + -1;
      uVar1 = uVar5 & 0xf;
      uVar5 = uVar5 >> 4;
      iVar6 = iVar7 + 1;
      *unaff_s0 = PTR_s_0123456789ABCDEF_8019db00[uVar1];
    } while (iVar6 == 0);
  } while (uVar5 != 0);
  if (param_3 == 0) {
    do {
      if (unaff_s2 <= iVar6) goto joined_r0x80193f70;
      iVar3 = *(int *)(unaff_s1 + 0x28);
      *(undefined1 *)(*(int *)(unaff_s1 + 0x24) + iVar3) = 0x20;
      iVar3 = iVar3 + 1;
      *(int *)(unaff_s1 + 0x28) = iVar3;
      unaff_s2 = unaff_s2 + -1;
    } while (iVar3 < *(int *)(unaff_s1 + 0x1c));
  }
  else {
    if (iVar6 < unaff_s2) {
      do {
        unaff_s0 = unaff_s0 + -1;
        iVar6 = iVar6 + 1;
                    /* Possible PsyQ macro: setPolyG3() */
        *unaff_s0 = 0x30;
      } while (iVar6 < unaff_s2);
      uVar2 = FONT_OBJ_9A0();
      return uVar2;
    }
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
              uVar2 = FONT_OBJ_820(iVar6,0xffffffff,iVar6 == 0x30);
              return uVar2;
            }
          }
          iVar6 = *(int *)(unaff_s1 + 0x28);
          *(char *)(*(int *)(unaff_s1 + 0x24) + iVar6) = cVar4;
          iVar6 = iVar6 + 1;
          *(int *)(unaff_s1 + 0x28) = iVar6;
          unaff_s3 = pcVar8;
        } while (iVar6 < *(int *)(unaff_s1 + 0x1c));
        uVar2 = FONT_OBJ_A58();
        return uVar2;
      }
      iVar6 = *(int *)(unaff_s1 + 0x28);
      *(undefined1 *)(*(int *)(unaff_s1 + 0x24) + iVar6) = *unaff_s0;
      iVar6 = iVar6 + 1;
      *(int *)(unaff_s1 + 0x28) = iVar6;
      unaff_s0 = unaff_s0 + 1;
      if (*(int *)(unaff_s1 + 0x1c) <= iVar6) break;
      iVar7 = iVar7 + -1;
    }
  }
  uVar2 = FONT_OBJ_A58();
  return uVar2;
}



