
void FUN_80121124(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f926c();
  (&DAT_800d0000)[*DAT_8019ed4c] = 1;
  *DAT_8019ed4c = *DAT_8019ed4c - 1;
  FUN_800f9448();
  *DAT_8019ed40 = S_SAV_OBJ_2A4[*DAT_8019ed58 + 7];
  FUN_800f4248(0x3f);
  FUN_800f7864();
  FUN_800f824c(99);
  *DAT_8019ed40 = *(code *)(*DAT_8019ed58 + 0x8018b825);
  FUN_800f5410();
  uVar1 = FUN_800f3c3c(99);
  FUN_800f3f38(uVar1);
  FUN_800f61e8();
  FUN_800f824c(0x65);
  FUN_800f9644(0x20);
  *DAT_8019ed40 = S_SAV_OBJ_2A4[*DAT_8019ed58 + 7];
  DAT_8019ed40[1] = S_SAV_OBJ_2AC[*DAT_8019ed58];
  *DAT_8019ed44 = *DAT_8019ed44 >> 6;
  FUN_800f9660(0x20);
  FUN_800f824c(100);
  *DAT_8019ed40 = *(code *)(*DAT_8019ed58 + 0x8018b826);
  FUN_800f5410();
  uVar1 = FUN_800f3c3c(100);
  FUN_800f3f38(uVar1);
  FUN_800f61e8();
  FUN_800f824c(0x66);
  *DAT_8019ed40 = S_SAV_OBJ_2A4[*DAT_8019ed54 + 7];
  FUN_800f4248(0x3f);
  FUN_800f7864();
  FUN_800f824c(0x67);
  *DAT_8019ed40 = *(code *)(*DAT_8019ed54 + 0x8018b825);
  FUN_800f5410();
  uVar1 = FUN_800f3c3c(0x67);
  FUN_800f3f38(uVar1);
  FUN_800f61e8();
  FUN_800f824c(0x69);
  FUN_800f9644(0x20);
  *DAT_8019ed40 = S_SAV_OBJ_2A4[*DAT_8019ed54 + 7];
  DAT_8019ed40[1] = S_SAV_OBJ_2AC[*DAT_8019ed54];
  *DAT_8019ed44 = *DAT_8019ed44 >> 6;
  FUN_800f9660(0x20);
  FUN_800f824c(0x68);
  *DAT_8019ed40 = *(code *)(*DAT_8019ed54 + 0x8018b826);
  FUN_800f5410();
  uVar1 = FUN_800f3c3c(0x68);
  FUN_800f3f38(uVar1);
  FUN_800f61e8();
  FUN_800f824c(0x6a);
  FUN_800f9448();
  do {
    do {
      do {
        FUN_800f6630(100);
        uVar1 = FUN_800f3c3c(0x68);
        FUN_800f54d4(uVar1);
        iVar2 = FUN_800f53d4();
        if (iVar2 == 0) {
          FUN_801217ec();
        }
        FUN_800f6630(0x66);
        uVar1 = FUN_800f3c3c(0x6a);
        FUN_800f54d4(uVar1);
        iVar2 = FUN_800f53d4();
        if (iVar2 == 0) {
          FUN_801218ec();
        }
        FUN_800f6630(99);
        uVar1 = FUN_800f3c3c(0x67);
        FUN_800f54d4(uVar1);
        iVar2 = FUN_800f53d4();
        if (iVar2 == 0) {
          FUN_801219ec();
        }
        FUN_800f6630(0x65);
        uVar1 = FUN_800f3c3c(0x69);
        FUN_800f54d4(uVar1);
        iVar2 = FUN_800f53d4();
        if (iVar2 == 0) {
          FUN_80121b5c();
        }
        FUN_800f6630(0xc2);
        iVar2 = FUN_800f6434(2);
        if (iVar2 == 0) {
          FUN_800f5da0(0xc2);
          FUN_800f7500(8);
          FUN_800f7270(0x41);
          do {
            FUN_80121678();
            *DAT_8019ed54 = *DAT_8019ed54 + 3;
            FUN_800f5ea0();
            iVar2 = FUN_800f5c64(0x202);
          } while (iVar2 != 0);
        }
        if (DAT_800d01d0 == '.') {
          FUN_80126990();
        }
        FUN_8011f320();
        FUN_800f6630(0xc3);
        FUN_800f71dc(0x85b8);
        FUN_80120070();
        if (DAT_800d01cd == '.') {
          FUN_80126990();
        }
        FUN_8016ea7c();
        FUN_800f7270(99);
        uVar1 = FUN_800f3c3c(0x67);
        FUN_800f56ac(uVar1);
        iVar2 = FUN_800f53d4();
      } while (iVar2 == 0);
      FUN_800f7270(0x65);
      uVar1 = FUN_800f3c3c(0x69);
      FUN_800f56ac(uVar1);
      iVar2 = FUN_800f53d4();
    } while (iVar2 == 0);
    FUN_800f6564(0x1c2);
    iVar2 = FUN_800f6434(0x202);
  } while (iVar2 != 0);
  FUN_800f71dc(0x858c);
  FUN_800f8d00(0x1cd);
  FUN_800f8d00(0x1d0);
  return;
}



