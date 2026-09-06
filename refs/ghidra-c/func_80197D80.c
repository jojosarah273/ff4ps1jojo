
void _patch_pad(void)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_retaddr;
  
  DAT_801febf8 = unaff_retaddr;
  FUN_801976e8();
  iVar1 = (*(code *)&SUB_000000b0)();
  iVar1 = *(int *)(iVar1 + 0x16c);
  iVar2 = 0xb;
  DAT_801fec00 = iVar1 + 0x884;
  DAT_801fec04 = iVar1 + 0x894;
  do {
    *(undefined4 *)(iVar1 + 0x594) = 0;
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FlushCache();
  return;
}



