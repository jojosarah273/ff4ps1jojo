
void FUN_8014c4bc(void)

{
  int iVar1;
  
  FUN_800f6564(0xf112);
  FUN_800f4248(0x40);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f71dc(0);
    do {
      FUN_800f6b68(0xed70);
      FUN_800f824c(0);
      FUN_800f6b68(0xed71);
      FUN_800f824c(1);
      FUN_800f654c(1);
      FUN_80094d14();
      FUN_800f6630(0);
      FUN_800f8768(0xed70);
      FUN_800f6630(1);
      FUN_800f8768(0xed71);
      *DAT_8019ed54 = *DAT_8019ed54 + 2;
      FUN_800f5958(0xc0);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
  }
  return;
}



