
void FUN_80175e08(void)

{
  int iVar1;
  
  do {
    FUN_800f6240(0x1703);
    FUN_800f6564(0x1703);
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f654c(0);
      FUN_800f8188(0x1703);
    }
    FUN_80175e88();
    FUN_800f6b68(0x1000);
    iVar1 = FUN_800f6434(2);
  } while (iVar1 != 0);
  FUN_800f654c(1);
  FUN_800f824c(0xcc);
  return;
}



