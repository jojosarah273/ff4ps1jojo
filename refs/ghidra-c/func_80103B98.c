
void FUN_80103b98(void)

{
  int iVar1;
  
  FUN_8010408c();
  FUN_800f71dc(0xff98);
  FUN_800f8d6c(0x5c);
  FUN_800f8fb8(0x70);
  FUN_800f8fb8(0x71);
  FUN_800f8fb8(0x72);
  FUN_800f8fb8(0x73);
  FUN_800f654c(0x81);
  FUN_800f8188(0x4200);
  FUN_800f654c(0);
  FUN_800f824c(0x79);
  do {
    FUN_800fe7b0();
    FUN_800f8f74(0x420c);
    FUN_800f6630(0x79);
    *DAT_8019ed40 = *DAT_8019ed40 >> 2;
    FUN_800f5410();
    FUN_800f4008(9);
    FUN_800f824c(0x6e);
    FUN_800f8fb8(0x6f);
    FUN_800fe6e4();
    FUN_800f6630(0x79);
    FUN_800f4248(7);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f6630(0x5c);
      FUN_800f5480();
      FUN_800f8058(1);
      FUN_800f824c(0x5c);
      FUN_800f6630(0x5d);
      FUN_800f8058(0);
      FUN_800f824c(0x5d);
    }
    FUN_80103f00();
    FUN_8010408c();
    FUN_800f62bc(0x79);
    FUN_800f6630(0x79);
    FUN_800f5574(0x60);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f654c(0x5f);
  FUN_800f824c(0x79);
  do {
    FUN_800fe7b0();
    FUN_800f8f74(0x420c);
    FUN_800f6630(0x79);
    *DAT_8019ed40 = *DAT_8019ed40 >> 2;
    FUN_800f5410();
    FUN_800f4008(9);
    FUN_800f824c(0x6e);
    FUN_800f8fb8(0x6f);
    FUN_800fe6e4();
    FUN_800f6630(0x79);
    FUN_800f4248(7);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f6630(0x5c);
      FUN_800f5480();
      FUN_800f8058(1);
      FUN_800f824c(0x5c);
      FUN_800f6630(0x5d);
      FUN_800f8058(0);
      FUN_800f824c(0x5d);
    }
    FUN_8010408c();
    FUN_800f5da0(0x79);
    FUN_800f6630(0x79);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



