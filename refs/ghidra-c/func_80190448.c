
void BIOS_1_OBJ_3B0(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int unaff_s0;
  int unaff_s1;
  
  if ((unaff_s1 != 0) && (unaff_s0 == 1)) {
    unaff_s1 = 0;
  }
  DAT_8019bcc9 = 1;
  if (unaff_s1 != 0) {
    DAT_8019bcc9 = 5;
  }
  puVar2 = &DAT_801f8f18;
  puVar4 = &stack0x00000018;
  iVar3 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != -1);
  *PTR_CDROM_REG0_8019bcb0 = 0;
  *PTR_CDROM_REG3_8019bcb4 = 0;
  BIOS_1_OBJ_550();
  return;
}



