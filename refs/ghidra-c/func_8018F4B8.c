
/* Possible END.OBJ/_ExitCard */

void FUN_8018f4b8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 unaff_retaddr;
  
  DAT_801f6b00 = unaff_retaddr;
  FUN_801976e8();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = *(int *)(iVar1 + 0x18);
  puVar2 = &DAT_8018f528;
  do {
    *(undefined4 *)(iVar1 + 0x70) = *puVar2;
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + 4;
  } while (puVar2 != (undefined4 *)&UNK_8018f534);
  FlushCache();
  FUN_801976f8();
  return;
}



