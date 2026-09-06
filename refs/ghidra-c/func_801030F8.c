
void FUN_801030f8(void)

{
  int iVar1;
  
  FUN_800f654c(0x10);
  FUN_800f8188(0xacf);
  FUN_800f654c(3);
  FUN_800f8188(0xad0);
  FUN_800f654c(3);
  FUN_800f8188(0xad1);
  FUN_800f71dc(0x7070);
  FUN_800f8d00(0xad4);
  FUN_800f71dc(0x28);
  FUN_800f8d00(0xad2);
  FUN_800f654c(6);
  FUN_800f8188(0xacd);
  FUN_800f654c(2);
  FUN_800f8188(0xace);
  FUN_80115bcc();
  do {
    FUN_800fe7d8();
    FUN_80115d2c();
    FUN_800f7210(0xad2);
    FUN_800f5958(8);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f654c(1);
      FUN_800f824c(0xe5);
      FUN_800ff024();
    }
    FUN_800f7210(0xad2);
    FUN_800f5958(0);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



