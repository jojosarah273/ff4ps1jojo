
void FUN_801100bc(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f7500(0);
  do {
    FUN_800f6d70(0x3b0);
    FUN_800f5410();
    uVar1 = FUN_800f3c3c(0x28);
    FUN_800f3f38(uVar1);
    FUN_800f8960(0x3b0);
    FUN_800f6d70(0x3b1);
    FUN_800f5410();
    uVar1 = FUN_800f3c3c(0x29);
    FUN_800f3f38(uVar1);
    FUN_800f8960(0x3b1);
    FUN_800f6630(0x7a);
    FUN_800f4248(1);
    iVar2 = FUN_800f4120(0x202);
    if (iVar2 == 0) {
      FUN_800f5a90(8);
      iVar2 = FUN_800f53c0();
      if (iVar2 == 0) {
        FUN_800f6d70(0x410);
        FUN_800f5410();
        uVar1 = FUN_800f3c3c(0x28);
        FUN_800f3f38(uVar1);
        FUN_800f8960(0x410);
        FUN_800f6d70(0x411);
        FUN_800f5410();
        uVar1 = FUN_800f3c3c(0x2b);
        FUN_800f3f38(uVar1);
        FUN_800f8960(0x411);
      }
    }
    *DAT_8019ed58 = *DAT_8019ed58 + 4;
    FUN_800f5a90(0x10);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  return;
}



