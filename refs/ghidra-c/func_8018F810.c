
undefined4 ISO9660_OBJ_108(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 *unaff_s1;
  int unaff_s2;
  int iVar8;
  undefined4 *unaff_s6;
  char in_stack_00000010;
  
  if (unaff_s2 < 8) {
    if (in_stack_00000010 == '\0') {
      if (0 < DAT_8019b9f4) {
        uVar1 = ISO9660_OBJ_2A4("%s: dir was not found\n");
        return uVar1;
      }
    }
    else {
      *unaff_s1 = 0;
      iVar2 = ISO9660_OBJ_660();
      if (iVar2 == 0) {
        if (0 < DAT_8019b9f4) {
          printf("CdSearchFile: disc error\n");
          uVar1 = ISO9660_OBJ_2B0();
          return uVar1;
        }
      }
      else {
        if (1 < DAT_8019b9f4) {
          printf("CdSearchFile: searching %s...\n",&stack0x00000010);
        }
        iVar8 = 0;
        puVar3 = &DAT_801f6b18;
        puVar7 = &DAT_801f6b10;
        iVar2 = 0;
        do {
          if (*(char *)((int)&DAT_801f6b18 + iVar2) == '\0') break;
          iVar4 = ISO9660_OBJ_2D8(puVar3,&stack0x00000010);
          if (iVar4 != 0) {
            if (1 < DAT_8019b9f4) {
              printf("%s:  found\n",&stack0x00000010);
            }
            uVar1 = puVar7[1];
            uVar5 = puVar7[2];
            uVar6 = puVar7[3];
            *unaff_s6 = *puVar7;
            unaff_s6[1] = uVar1;
            unaff_s6[2] = uVar5;
            unaff_s6[3] = uVar6;
            uVar1 = puVar7[5];
            unaff_s6[4] = puVar7[4];
            unaff_s6[5] = uVar1;
            uVar1 = ISO9660_OBJ_2B0();
            return uVar1;
          }
          puVar7 = puVar7 + 6;
          puVar3 = puVar3 + 0xc;
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + 0x18;
        } while (iVar8 < 0x40);
        if (0 < DAT_8019b9f4) {
          printf("%s: not found\n",&stack0x00000010);
        }
      }
    }
  }
  else if (0 < DAT_8019b9f4) {
    printf("%s: path level (%d) error\n");
    uVar1 = ISO9660_OBJ_2B0();
    return uVar1;
  }
  return 0;
}



