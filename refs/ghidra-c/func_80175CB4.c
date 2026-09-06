
void FUN_80175cb4(void)

{
  int iVar1;
  
  FUN_800f7500(0);
  FUN_800f71dc(0);
  do {
    do {
      FUN_800f6c68(0xd8000);
      FUN_800f8960(0xddb);
      FUN_800f6364();
      FUN_800f63bc();
      *DAT_8019ed40 = *DAT_8019ed60;
      FUN_800f4248(0xf);
      iVar1 = FUN_800f4120(0x202);
    } while (iVar1 != 0);
    do {
      FUN_800f654c(0);
      FUN_800f8960(0xddb);
      FUN_800f63bc();
      *DAT_8019ed40 = *DAT_8019ed60;
      FUN_800f4248(0xf);
      iVar1 = FUN_800f4120(0x202);
    } while (iVar1 != 0);
    FUN_800f5a90(0x80);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



