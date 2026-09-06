
void FUN_80110bc8(void)

{
  int iVar1;
  
  FUN_800f6630(0x7a);
  FUN_800f4248(0x1e);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f9644(0x20);
  FUN_800f71dc(0);
  do {
    *DAT_8019ed40 = (&DAT_80198c1c)[*DAT_8019ed58];
    DAT_8019ed40[1] = (&DAT_80198c1d)[*DAT_8019ed58];
    FUN_800f87dc(0xebb);
    *DAT_8019ed44 = *DAT_8019ed58;
    FUN_800f6214();
    FUN_800f6214();
    FUN_800f4264(0x1f);
    *DAT_8019ed58 = *DAT_8019ed44;
    *DAT_8019ed54 = *DAT_8019ed54 + 2;
    FUN_800f5958(0x10);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f6558(0);
  FUN_800f9660(0x20);
  return;
}



