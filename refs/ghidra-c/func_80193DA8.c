
/* WARNING: Removing unreachable block (ram,0x80193e5c) */

undefined4 FONT_OBJ_820(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  int unaff_s1;
  int unaff_s2;
  char *unaff_s3;
  int unaff_s4;
  uint unaff_s5;
  uint *in_stack_00000210;
  
  while (param_1 - 0x30U < 10) {
    unaff_s2 = unaff_s2 * 10 + -0x30 + param_1;
    unaff_s3 = unaff_s3 + 1;
    param_1 = (int)*unaff_s3;
  }
  if (unaff_s2 < 1) {
    unaff_s2 = 1;
  }
  pcVar6 = &stack0x00000210;
  switch(param_1) {
  case 0x58:
  case 0x78:
    param_2 = 0;
    uVar5 = *in_stack_00000210;
    do {
      do {
        pcVar6 = pcVar6 + -1;
        uVar2 = uVar5 & 0xf;
        uVar5 = uVar5 >> 4;
        param_2 = param_2 + 1;
        *pcVar6 = PTR_s_0123456789ABCDEF_8019db00[uVar2];
      } while (param_2 == 0);
    } while (uVar5 != 0);
    if (param_3 != 0) {
      if (param_2 < unaff_s2) {
        do {
          pcVar6 = pcVar6 + -1;
          param_2 = param_2 + 1;
          *pcVar6 = '0';
        } while (param_2 < unaff_s2);
        uVar1 = FONT_OBJ_9A0();
        return uVar1;
      }
joined_r0x80193f70:
      do {
        param_2 = param_2 + -1;
        if (param_2 == -1) {
          do {
            pcVar6 = unaff_s3 + 1;
            cVar4 = *pcVar6;
            if (cVar4 == 0) {
              *(undefined1 *)(*(int *)(unaff_s1 + 0x24) + *(int *)(unaff_s1 + 0x28)) = 0;
              return *(undefined4 *)(unaff_s1 + 0x28);
            }
            if (cVar4 == unaff_s4) {
              pcVar6 = unaff_s3 + 2;
              cVar4 = *pcVar6;
              iVar3 = (int)cVar4;
              if (iVar3 != unaff_s4) {
                uVar1 = FONT_OBJ_820(iVar3,0xffffffff,iVar3 == 0x30);
                return uVar1;
              }
            }
            iVar3 = *(int *)(unaff_s1 + 0x28);
            *(char *)(*(int *)(unaff_s1 + 0x24) + iVar3) = cVar4;
            iVar3 = iVar3 + 1;
            *(int *)(unaff_s1 + 0x28) = iVar3;
            unaff_s3 = pcVar6;
          } while (iVar3 < *(int *)(unaff_s1 + 0x1c));
          uVar1 = FONT_OBJ_A58();
          return uVar1;
        }
        iVar3 = *(int *)(unaff_s1 + 0x28);
        *(char *)(*(int *)(unaff_s1 + 0x24) + iVar3) = *pcVar6;
        iVar3 = iVar3 + 1;
        *(int *)(unaff_s1 + 0x28) = iVar3;
        pcVar6 = pcVar6 + 1;
      } while (iVar3 < *(int *)(unaff_s1 + 0x1c));
      goto FONT_OBJ_740;
    }
    break;
  case 99:
    uVar1 = FONT_OBJ_99C(param_1,1);
    return uVar1;
  case 100:
    uVar5 = *in_stack_00000210;
    if ((int)uVar5 < 0) {
      uVar1 = FONT_OBJ_88C(-uVar5,param_2,0x2d);
      return uVar1;
    }
    param_2 = 0;
    do {
      do {
        pcVar6 = pcVar6 + -1;
        param_2 = param_2 + 1;
        uVar2 = (uint)((ulonglong)uVar5 * (ulonglong)unaff_s5 >> 0x23);
        *pcVar6 = (char)uVar5 + (char)uVar2 * -10 + '0';
        uVar5 = uVar2;
      } while (param_2 == 0);
    } while (uVar2 != 0);
    goto joined_r0x80193f28;
  case 0x73:
    pcVar6 = (char *)*in_stack_00000210;
    param_2 = strlen(pcVar6);
  }
joined_r0x80193f28:
  do {
    if (unaff_s2 <= param_2) goto joined_r0x80193f70;
    iVar3 = *(int *)(unaff_s1 + 0x28);
    *(undefined1 *)(*(int *)(unaff_s1 + 0x24) + iVar3) = 0x20;
    iVar3 = iVar3 + 1;
    *(int *)(unaff_s1 + 0x28) = iVar3;
    unaff_s2 = unaff_s2 + -1;
  } while (iVar3 < *(int *)(unaff_s1 + 0x1c));
FONT_OBJ_740:
  uVar1 = FONT_OBJ_A58();
  return uVar1;
}



