
void FUN_800ff978(void)

{
  int iVar1;
  
  FUN_800f71dc(0x4200);
  FUN_800f8d6c(0x4c);
  FUN_800f71dc(0x100);
  FUN_800f8d6c(0x4e);
  FUN_800f71dc(0xc680);
  FUN_800f8d6c(0x4a);
  FUN_800f654c(0x1b);
  FUN_800f824c(0x49);
  FUN_80170458();
  FUN_800f71dc(0x4300);
  FUN_800f8d6c(0x4c);
  FUN_800f71dc(0x1d00);
  FUN_800f8d6c(0x4e);
  FUN_800f71dc(0x8000);
  FUN_800f8d6c(0x4a);
  FUN_800f654c(0x1c);
  FUN_800f824c(0x49);
  FUN_80170458();
  FUN_800f7500(0);
  FUN_800f71dc(0);
  do {
    do {
      FUN_800f6c68(0xd8040);
      FUN_800f8960(0xe5b);
      FUN_800f6364();
      FUN_800f63bc();
      *DAT_8019ed40 = *DAT_8019ed60;
      FUN_800f4248(0xf);
      iVar1 = FUN_800f4120(0x202);
    } while (iVar1 != 0);
    do {
      FUN_800f654c(0);
      FUN_800f8960(0xe5b);
      FUN_800f63bc();
      *DAT_8019ed40 = *DAT_8019ed60;
      FUN_800f4248(0xf);
      iVar1 = FUN_800f4120(0x202);
    } while (iVar1 != 0);
    FUN_800f5a90(0x80);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_80174348();
  return;
}



