
void FUN_800fed3c(void)

{
  int iVar1;
  
  FUN_800f654c(1);
  FUN_800f824c(0xd9);
  FUN_800f8fb8(0x7a);
  FUN_800f654c(0x1f);
  FUN_800f824c(0x79);
  FUN_800f654c(0x80);
  FUN_800f8188(0x2100);
  FUN_800f654c(0x81);
  FUN_800f8188(0x4200);
  FUN_800f5448();
  do {
    FUN_800fe778();
    FUN_800f6630(0x79);
    if (*DAT_8019ed40 == '\x1f') {
      FUN_80178bb4();
    }
    FUN_800f5da0(0x79);
    FUN_800f5da0(0x79);
    iVar1 = FUN_800f5b8c(0x8080);
  } while (iVar1 != 0);
  FUN_800f8fb8(0xd9);
  FUN_800f6630(0xb1);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f654c(0xf);
  }
  else {
    FUN_800f6630(0x80);
  }
  FUN_800f8188(0x2100);
  return;
}



