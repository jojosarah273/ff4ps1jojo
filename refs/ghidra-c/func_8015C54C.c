
void FUN_8015c54c(void)

{
  int iVar1;
  
  FUN_800f6630(0xd0);
  FUN_800f5574(0xff);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_80152cdc();
    FUN_800f7270(0xa6);
    FUN_800f6b68(0x2003);
    FUN_800f4248(0xc0);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f6b68(0x2004);
      FUN_800f4248(0x3c);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) {
        FUN_800f6b68(0x2005);
        FUN_800f4248(0xc6);
        iVar1 = FUN_800f4120(2);
        if (iVar1 != 0) {
          return;
        }
      }
    }
  }
  FUN_800f654c(0xff);
  FUN_800f824c(0xd0);
  return;
}



