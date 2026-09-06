
void FUN_801093b8(void)

{
  int iVar1;
  
  FUN_800f5574(0x42);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f9330();
    FUN_800f5480();
    FUN_800f8058(0xf);
    FUN_800f5140();
    *DAT_8019ed54 = *DAT_8019ed44;
    *DAT_8019ed40 = (&DAT_80198ae8)[*DAT_8019ed54];
    FUN_800f3d48();
    *DAT_8019ed40 = (&DAT_80198ae9)[*DAT_8019ed54];
    FUN_800f3d48();
    FUN_800f95a0();
  }
  else {
    FUN_800f3d48();
    FUN_800f654c(0xff);
    FUN_800f3d48();
  }
  return;
}



