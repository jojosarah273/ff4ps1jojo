
void FUN_80139b44(void)

{
  int iVar1;
  
  FUN_80139ca4();
  FUN_80139694();
  FUN_800f6564(0x1baf);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6b68(0x1340);
    FUN_800f63f8();
  }
  else {
    FUN_800f6b68(0x1440);
    FUN_800f63f8();
  }
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(0xce);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f8188(0x1b39);
      FUN_800f971c();
      do {
        FUN_80139c0c();
        FUN_800f61e8();
        FUN_800f5574(5);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
    }
  }
  return;
}



