
void FUN_80131f98(void)

{
  int iVar1;
  
  FUN_800f824c(0x48);
  *DAT_8019ed40 = ~*DAT_8019ed40;
  FUN_800f824c(0x49);
  FUN_800f8ebc(0x4b);
  FUN_800f654c(0);
  do {
    FUN_80132010();
    FUN_800f61e8();
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



