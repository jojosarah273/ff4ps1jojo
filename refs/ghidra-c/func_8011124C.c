
void FUN_8011124c(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  
  sVar1 = 0;
  FUN_80111b14();
  FUN_800f654c(0x81);
  FUN_800f8188(0x4200);
  FUN_800f8fb8(0xac);
  FUN_800f8fb8(0x79);
  FUN_800f8fb8(0x20);
  FUN_800f8fb8(0x7a);
  do {
    if (sVar1 == 3) {
      DAT_800d2100 = 0xf;
    }
    sVar1 = sVar1 + 1;
    FUN_800f6630(0x7a);
    *DAT_8019ed40 = *DAT_8019ed40 >> 3;
    FUN_800f4248(3);
    FUN_800f8188(0x1705);
    FUN_80111adc();
    FUN_800f6630(0x7a);
    FUN_800f4248(1);
    iVar2 = FUN_800f4120(0x202);
    if (iVar2 == 0) {
      FUN_800f654c(4);
    }
    else {
      FUN_800f654c(0);
    }
    FUN_800f824c(0xab);
    FUN_80102770();
    FUN_80111c2c();
    FUN_800f6630(0x2c);
    FUN_800f8188(0x340);
    FUN_800f8188(0x300);
    FUN_800f5410();
    FUN_800f4008(0x10);
    FUN_800f8188(0x344);
    FUN_800f8188(0x304);
    FUN_800f5410();
    FUN_800f4008(0x10);
    FUN_800f8188(0x348);
    FUN_800f8188(0x308);
    FUN_800f5410();
    FUN_800f4008(0x10);
    FUN_800f8188(0x34c);
    FUN_800f8188(0x30c);
    FUN_800f654c(0x68);
    FUN_800f5410();
    uVar3 = FUN_800f3c3c(0x20);
    FUN_800f3f38(uVar3);
    FUN_800f5574(0x78);
    iVar2 = FUN_800f53c0();
    if (iVar2 != 0) {
      FUN_800f654c(0x78);
    }
    FUN_800f8188(0x341);
    FUN_800f8188(0x345);
    FUN_800f8188(0x349);
    FUN_800f8188(0x34d);
    FUN_800f654c(0x30);
    FUN_800f8188(0x342);
    FUN_800f654c(0x32);
    FUN_800f8188(0x346);
    FUN_800f654c(0x34);
    FUN_800f8188(0x34a);
    FUN_800f654c(0x36);
    FUN_800f8188(0x34e);
    FUN_800f654c(0x37);
    FUN_800f8188(0x343);
    FUN_800f8188(0x303);
    FUN_800f8188(0x347);
    FUN_800f8188(0x307);
    FUN_800f8188(0x34b);
    FUN_800f8188(0x30b);
    FUN_800f8188(0x34f);
    FUN_800f8188(0x30f);
    FUN_800f654c(0x70);
    FUN_800f8188(0x301);
    FUN_800f8188(0x305);
    FUN_800f8188(0x309);
    FUN_800f8188(0x30d);
    FUN_800f6630(0x7a);
    *DAT_8019ed40 = *DAT_8019ed40 >> 2;
    FUN_800f4248(2);
    FUN_800f5410();
    FUN_800f4008(0xe4);
    FUN_800f8188(0x302);
    *DAT_8019ed40 = *DAT_8019ed40 ^ 2;
    FUN_800f8188(0x306);
    *DAT_8019ed40 = *DAT_8019ed40 ^ 2;
    FUN_800f8188(0x30a);
    *DAT_8019ed40 = *DAT_8019ed40 ^ 2;
    FUN_800f8188(0x30e);
    FUN_800f6630(0x7a);
    FUN_800f4248(7);
    iVar2 = FUN_800f4120(0x202);
    if (iVar2 == 0) {
      FUN_800f62bc(0x20);
    }
    FUN_800f6630(0x7a);
    FUN_800f4248(3);
    iVar2 = FUN_800f4120(0x202);
    if (iVar2 == 0) {
      FUN_800f62bc(0x2c);
    }
    FUN_800f6630(0x20);
    FUN_800f5574(0x20);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  FUN_800f8f74(0x1728);
  FUN_8011ea5c();
  return;
}



