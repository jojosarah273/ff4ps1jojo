
void FUN_800fc1cc(void)

{
  int iVar1;
  
  FUN_800f654c(0x3f);
  FUN_800fd804();
  FUN_800f654c(3);
  FUN_800f8188(0x212c);
  FUN_800f8fb8(0x79);
  do {
    FUN_800fe7b0();
    FUN_800f6630(0x79);
    FUN_800f7864();
    FUN_800f9690();
    *DAT_8019ed40 = (&DAT_80198a68)[*DAT_8019ed54];
    FUN_800f8188(0x2106);
    FUN_800f62bc(0x79);
    FUN_800f62bc(0x79);
    FUN_800f6630(0x79);
    FUN_800f5574(0x2a);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f6630(0xc6);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800fd37c();
  }
  FUN_800fc2ac();
  return;
}



