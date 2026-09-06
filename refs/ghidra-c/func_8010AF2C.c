
void FUN_8010af2c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f4248(0x7f);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f654c(0);
  while( true ) {
    FUN_800f5958(0);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) break;
    FUN_800f5e48();
    FUN_800f5410();
    FUN_800f4008(0xf);
  }
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6b68(0x903);
  uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x905);
  FUN_800f78c4(uVar2);
  iVar1 = FUN_800f7918(0x202);
  if (iVar1 == 0) {
    FUN_800f654c(0xff);
  }
  else {
    FUN_800f6b68(0x902);
    FUN_800f5ccc();
  }
  return;
}



