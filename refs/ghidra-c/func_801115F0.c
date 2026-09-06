
void FUN_801115f0(void)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  sVar1 = 0;
  FUN_80111b14();
  FUN_800f654c(0x81);
  FUN_800f8188(0x4200);
  FUN_800f8fb8(0x79);
  FUN_800f8fb8(0x20);
  do {
    if (sVar1 == 3) {
      DAT_800d2100 = 0xf;
    }
    sVar1 = sVar1 + 1;
    FUN_800f654c(3);
    FUN_800f8188(0x1705);
    FUN_80111adc();
    FUN_800f654c(0x10);
    FUN_800f8188(0x340);
    FUN_800f8188(0x300);
    FUN_800f654c(0x20);
    FUN_800f8188(0x344);
    FUN_800f8188(0x304);
    FUN_800f654c(0x30);
    FUN_800f8188(0x348);
    FUN_800f8188(0x308);
    FUN_800f654c(0x40);
    FUN_800f8188(0x34c);
    FUN_800f8188(0x30c);
    FUN_800f654c(0x78);
    FUN_800f5480();
    uVar2 = FUN_800f3c3c(0x20);
    FUN_800f7f48(uVar2);
    FUN_800f5574(0x68);
    iVar3 = FUN_800f53c0();
    if (iVar3 == 0) {
      FUN_800f654c(0x68);
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
    FUN_800f4248(0xf);
    iVar3 = FUN_800f4120(0x202);
    if (iVar3 == 0) {
      FUN_800f62bc(0x20);
    }
    FUN_800f6630(0x20);
    FUN_800f5574(0x20);
    iVar3 = FUN_800f53d4();
  } while (iVar3 == 0);
  FUN_8011ea5c();
  return;
}



