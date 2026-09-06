
undefined4 BIOS_1_OBJ_64(byte *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint unaff_s1;
  byte in_stack_00000010;
  byte bStack00000018;
  byte bStack00000019;
  
  while (iVar5 = 0, in_stack_00000010 != (*param_1 & 7)) {
    in_stack_00000010 = *param_1 & 7;
  }
  do {
    puVar3 = (undefined1 *)((int)&stack0x00000018 + iVar5);
    iVar6 = iVar5;
    if ((*PTR_CDROM_REG0_8019bcb0 & 0x20) == 0) break;
    iVar5 = iVar5 + 1;
    *puVar3 = *PTR_CDROM_REG1_8019bcbc;
    iVar6 = iVar5;
  } while (iVar5 < 8);
  for (; iVar5 < 8; iVar5 = iVar5 + 1) {
    *(undefined1 *)((int)&stack0x00000018 + iVar5) = 0;
  }
  *PTR_CDROM_REG0_8019bcb0 = 1;
  *PTR_CDROM_REG3_8019bcb4 = 7;
  *PTR_CDROM_REG2_8019bcc0 = 7;
  if ((in_stack_00000010 != 3) || (*(int *)(&DAT_8019bbb0 + (uint)DAT_8019ba09 * 4) != 0)) {
    if (((DAT_8019b9f8 & 0x10) == 0) && ((bStack00000018 & 0x10) != 0)) {
      DAT_8019ba00 = DAT_8019ba00 + 1;
    }
    DAT_8019b9f8 = (uint)bStack00000018;
    DAT_8019b9fc = (uint)bStack00000019;
    unaff_s1 = DAT_8019b9f8 & 0x1d;
  }
  if (((in_stack_00000010 == 5) && (2 < DAT_8019b9f4)) && (printf("DiskError: "), 2 < DAT_8019b9f4))
  {
    printf("com=%s,code=(%02x:%02x)\n",(&PTR_s_CdlSync_8019ba10)[DAT_8019ba09],DAT_8019b9f8,
           DAT_8019b9fc);
  }
  switch(in_stack_00000010) {
  case 1:
    if ((unaff_s1 != 0) && (iVar6 == 1)) {
      unaff_s1 = 0;
    }
    DAT_8019bcc9 = 1;
    if (unaff_s1 != 0) {
      DAT_8019bcc9 = 5;
    }
    puVar3 = &DAT_801f8f18;
    puVar4 = (undefined4 *)&stack0x00000018;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    *PTR_CDROM_REG0_8019bcb0 = 0;
    *PTR_CDROM_REG3_8019bcb4 = 0;
    uVar2 = BIOS_1_OBJ_550();
    return uVar2;
  case 2:
    DAT_8019bcc8 = 2;
    if (unaff_s1 != 0) {
      DAT_8019bcc8 = 5;
    }
    puVar3 = &DAT_801f8f10;
    puVar4 = (undefined4 *)&stack0x00000018;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    uVar2 = BIOS_1_OBJ_550();
    return uVar2;
  case 3:
    break;
  case 4:
    puVar3 = &DAT_801f8f20;
    DAT_8019bcca = 4;
    puVar4 = (undefined4 *)&stack0x00000018;
    DAT_8019bcc9 = 4;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    puVar3 = &DAT_801f8f18;
    puVar4 = (undefined4 *)&stack0x00000018;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    uVar2 = BIOS_1_OBJ_550();
    return uVar2;
  case 5:
    puVar3 = &DAT_801f8f10;
    DAT_8019bcc9 = 5;
    puVar4 = (undefined4 *)&stack0x00000018;
    DAT_8019bcc8 = 5;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    puVar3 = &DAT_801f8f18;
    puVar4 = (undefined4 *)&stack0x00000018;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    uVar2 = BIOS_1_OBJ_550();
    return uVar2;
  default:
    FUN_80191620("CDROM: unknown intr");
    printf("(%d)\n",(uint)in_stack_00000010);
    return 0;
  }
  if (unaff_s1 != 0) {
    DAT_8019bcc8 = 5;
    puVar3 = &DAT_801f8f10;
    puVar4 = (undefined4 *)&stack0x00000018;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    uVar2 = BIOS_1_OBJ_550();
    return uVar2;
  }
  if (*(int *)(&DAT_8019bab0 + (uint)DAT_8019ba09 * 4) == 0) {
    DAT_8019bcc8 = 2;
    puVar3 = &DAT_801f8f10;
    puVar4 = (undefined4 *)&stack0x00000018;
    iVar5 = 7;
    do {
      uVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      iVar5 = iVar5 + -1;
      *puVar3 = uVar1;
      puVar3 = puVar3 + 1;
    } while (iVar5 != -1);
    uVar2 = BIOS_1_OBJ_550();
    return uVar2;
  }
  DAT_8019bcc8 = 3;
  puVar3 = &DAT_801f8f10;
  puVar4 = (undefined4 *)&stack0x00000018;
  iVar5 = 7;
  do {
    uVar1 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    iVar5 = iVar5 + -1;
    *puVar3 = uVar1;
    puVar3 = puVar3 + 1;
  } while (iVar5 != -1);
  uVar2 = BIOS_1_OBJ_550();
  return uVar2;
}



