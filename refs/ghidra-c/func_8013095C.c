
void FUN_8013095c(void)

{
  int iVar1;
  
  FUN_800f654c(0x24);
  FUN_800f71dc(0x130);
  FUN_80130a74();
  FUN_800f71dc(0x1b0);
  FUN_80130a74();
  FUN_800f71dc(0x230);
  FUN_80130a74();
  FUN_800f6564(0x1b81);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f71dc(0x130);
  }
  else {
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f71dc(0x230);
    }
    else {
      FUN_800f71dc(0x1b0);
    }
  }
  FUN_800f654c(0x20);
  FUN_800f9200();
  FUN_800f7500(5);
  FUN_80130a24();
  return;
}



