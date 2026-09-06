
void FUN_800fd85c(void)

{
  int iVar1;
  
  FUN_800f824c(0x82);
  FUN_800f8fb8(0x79);
  FUN_800f8fb8(0x80);
  do {
    do {
      FUN_800fe7b0();
      FUN_800f6630(0x80);
      if (*DAT_8019ed40 != '\x01') {
        FUN_800f8188(0x2100);
      }
      FUN_800f62bc(0x79);
      FUN_800f6630(0x79);
      FUN_800f4370(0x82);
      iVar1 = FUN_800f4120(0x202);
    } while (iVar1 != 0);
    FUN_800f62bc(0x80);
    FUN_800f6630(0x80);
    FUN_800f5574(0x10);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f5da0(0x80);
  return;
}



