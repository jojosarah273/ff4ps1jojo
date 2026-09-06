
void _patch_card2(void)

{
  int iVar1;
  code *pcVar2;
  undefined4 unaff_retaddr;
  
  DAT_801f6af0 = unaff_retaddr;
  FUN_801976e8();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = *(int *)(iVar1 + 0x16c);
  pcVar2 = (code *)&PATCH_OBJ_C8;
  do {
    *(undefined4 *)(iVar1 + 0x9c8) = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    iVar1 = iVar1 + 4;
  } while (pcVar2 != _patch_card);
  FlushCache();
  return;
}



