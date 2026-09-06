
void FUN_80140cfc(void)

{
  int iVar1;
  
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  do {
    FUN_800f6b68(0x34c2);
    FUN_800f8768(0xf476);
    *DAT_8019ed40 = (&DAT_8019a0bc)[*DAT_8019ed54];
    FUN_800f8768(0x34c2);
    FUN_800f6364();
    FUN_800f5958(8);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



