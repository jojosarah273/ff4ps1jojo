
void FUN_801762d0(void)

{
  int iVar1;
  
  FUN_800f71dc(0);
  while( true ) {
    FUN_800f6b68(0x1900);
    iVar1 = FUN_800f3b9c(0x14ee00,*DAT_8019ed54);
    FUN_800f54d4(iVar1 + (uint)*DAT_8019ed54);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) break;
    FUN_800f6364();
    FUN_800f5958(0x100);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) goto LAB_80176380;
  }
  FUN_800f71dc(0x1a00);
  do {
    FUN_800f90ec(0);
    FUN_800f6364();
    FUN_800f5958(0x1a65);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
LAB_80176380:
  FUN_800f71dc(0);
  do {
    FUN_800f90ec(0);
    FUN_800f6364();
    FUN_800f5958(0x200);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f71dc(0x300);
  do {
    FUN_800f90ec(0);
    FUN_800f6364();
    FUN_800f5958(0xfff);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f6364();
  do {
    FUN_800f90ec(0);
    FUN_800f6364();
    FUN_800f5958(0x1a00);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f71dc(0x1a65);
  do {
    FUN_800f90ec(0);
    FUN_800f6364();
    FUN_800f5958(0x1e00);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f71dc(0x2000);
  FUN_800f654c(0);
  do {
    FUN_800f885c(0x7e0000);
    FUN_800f6364();
    iVar1 = FUN_800f6180(0x202);
  } while (iVar1 != 0);
  do {
    FUN_800f885c(0x7f0000);
    FUN_800f6364();
    iVar1 = FUN_800f6180(0x202);
  } while (iVar1 != 0);
  FUN_800f71dc(0);
  do {
    FUN_800f6c68(0x14ee00);
    FUN_800f8768(0x1900);
    FUN_800f6364();
    FUN_800f5958(0x100);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



