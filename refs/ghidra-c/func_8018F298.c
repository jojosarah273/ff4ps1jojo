
void _patch_card_info(void)

{
  int iVar1;
  undefined4 unaff_retaddr;
  
  DAT_801f6af0 = unaff_retaddr;
  iVar1 = (*(code *)&SUB_000000b0)();
  *(undefined4 *)(*(int *)(iVar1 + 0x16c) + 0x1988) = 0;
  FlushCache();
  return;
}



