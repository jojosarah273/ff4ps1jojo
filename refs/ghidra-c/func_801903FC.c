
void BIOS_1_OBJ_364(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int unaff_s1;
  
  DAT_8019bcc8 = 2;
  if (unaff_s1 != 0) {
    DAT_8019bcc8 = 5;
  }
  puVar2 = &DAT_801f8f10;
  puVar4 = &stack0x00000018;
  iVar3 = 7;
  do {
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != -1);
  BIOS_1_OBJ_550();
  return;
}



