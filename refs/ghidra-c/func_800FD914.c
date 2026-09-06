
void FUN_800fd914(void)

{
  int iVar1;
  
  FUN_800f824c(0x82);
  FUN_800f8fb8(0x79);
  FUN_800f6630(0xca);
  FUN_800f5574(2);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f654c(0xf);
    FUN_800f824c(0x80);
    do {
      do {
        FUN_800fe7b0();
        FUN_800f6630(0x80);
        FUN_800f8188(0x2100);
        FUN_800f6564(0x1700);
        FUN_800f5574(3);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f654c(0x30);
          FUN_800f8188(0x420c);
        }
        FUN_800f62bc(0x79);
        FUN_800f6630(0x79);
        FUN_800f4370(0x82);
        iVar1 = FUN_800f4120(0x202);
      } while (iVar1 != 0);
      FUN_800f5da0(0x80);
      iVar1 = FUN_800f5b8c(0x8080);
    } while (iVar1 != 0);
    FUN_800f8fb8(0x80);
  }
  return;
}



