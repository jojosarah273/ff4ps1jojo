
void FUN_801118cc(void)

{
  short sVar1;
  int iVar2;
  
  sVar1 = 0;
  FUN_80111b14();
  FUN_800f654c(0x81);
  FUN_800f8188(0x4200);
  FUN_800f71dc(0x200);
  FUN_800f8d6c(0x89);
  FUN_800f8fb8(0x79);
  do {
    if (sVar1 == 3) {
      DAT_800d2100 = 0xf;
    }
    sVar1 = sVar1 + 1;
    FUN_800f654c(3);
    FUN_800f8188(0x1705);
    FUN_80111adc();
    FUN_800f654c(0x28);
    FUN_800f8188(0x340);
    FUN_800f8188(0x300);
    FUN_800f6630(0x7a);
    *DAT_8019ed40 = *DAT_8019ed40 >> 4;
    *DAT_8019ed54 = *DAT_8019ed44;
    *DAT_8019ed40 = (&DAT_80198c2c)[*DAT_8019ed54];
    FUN_800f8188(0x341);
    FUN_800f654c(0x30);
    FUN_800f8188(0x342);
    *DAT_8019ed40 = *DAT_8019ed5c;
    FUN_800f4248(4);
    *DAT_8019ed40 = *DAT_8019ed40 << 4;
    *DAT_8019ed40 = *DAT_8019ed40 | 0x37;
    FUN_800f8188(0x343);
    FUN_800f654c(0x70);
    FUN_800f8188(0x301);
    FUN_800f6630(0x7a);
    *DAT_8019ed40 = *DAT_8019ed40 >> 2;
    FUN_800f4248(2);
    FUN_800f5410();
    FUN_800f4008(0xe4);
    FUN_800f8188(0x302);
    FUN_800f654c(0x37);
    FUN_800f8188(0x303);
    FUN_800f7270(0x89);
    FUN_800f5e48();
    FUN_800f8d6c(0x89);
    iVar2 = FUN_800f5c64(0x202);
  } while (iVar2 != 0);
  FUN_8011ea5c();
  return;
}



