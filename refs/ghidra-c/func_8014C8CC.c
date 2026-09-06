
void FUN_8014c8cc(void)

{
  int iVar1;
  
  FUN_800f71dc(0);
  do {
    FUN_800f6b68(0xedb0);
    FUN_800f824c(0);
    FUN_800f6b68(0xedb1);
    FUN_800f824c(1);
    FUN_800f654c(1);
    FUN_80094d14();
    FUN_800f6630(0);
    FUN_800f8768(0xedb0);
    FUN_800f6630(1);
    FUN_800f8768(0xedb1);
    *DAT_8019ed54 = *DAT_8019ed54 + 2;
    FUN_800f5958(0x80);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



