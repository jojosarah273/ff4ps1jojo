
void FUN_8010da88(void)

{
  undefined4 uVar1;
  
  FUN_80117594();
  FUN_800f8fb8(0x3e);
  FUN_800f5140();
  FUN_800f4f4c();
  uVar1 = FUN_800f3c3c(0x3e);
  FUN_800f7a40(uVar1);
  FUN_800f7a68();
  FUN_800f824c(0x3d);
  FUN_800f7270(0x3d);
  if (*DAT_8019ed54 < 0x81) {
                    /* WARNING: Could not recover jumptable at 0x8010db0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&switchD_8010db0c::switchdataD_800f2460)[*DAT_8019ed54])();
    return;
  }
  return;
}



