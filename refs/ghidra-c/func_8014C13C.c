
void FUN_8014c13c(void)

{
  int iVar1;
  
  FUN_800f6564(0x34c5);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 != 0) {
    FUN_8014d680();
    FUN_80148cac();
    FUN_8014046c();
    FUN_800f71dc(5);
    FUN_800f654c(0x27);
    FUN_800760d0();
    FUN_80148e08();
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f8d00(0xf111);
    FUN_800f8d00(0xf113);
    FUN_80148e80();
    FUN_800f654c(0x60);
    FUN_800f81e8(0x2107);
    FUN_800f654c(0x58);
    FUN_800f81e8(0x2108);
    FUN_800f654c(3);
    FUN_800f8188(0xf1b5);
    FUN_800f61e8();
    FUN_800f8188(0xf1b3);
    FUN_800f6564(0xed4e);
    FUN_800f4248(0xbf);
    FUN_800f8188(0xed4e);
    FUN_800f971c();
    FUN_80071c2c();
    FUN_80091ab8();
    do {
      FUN_8007259c();
      FUN_8014c4bc();
      FUN_800f6564(0xf111);
      FUN_800f5410();
      FUN_800f4008(4);
      FUN_800f8188(0xf111);
      FUN_800f8188(0xf133);
      FUN_800f6564(0xf113);
      FUN_800f5410();
      FUN_800f4008(8);
      FUN_800f8188(0xf113);
      FUN_800f8188(0xf134);
      FUN_800f7500(0);
      do {
        FUN_800f71dc(0);
        FUN_80148f60();
        FUN_800f8960(0x7614);
        FUN_800f8960(0x7694);
        FUN_800f8960(0x7714);
        FUN_800f8960(0x7794);
        FUN_800f8960(0x7814);
        FUN_800f71dc(1);
        FUN_80148f60();
        FUN_800f9200();
        FUN_800f9200();
        FUN_800f8960(0x7612);
        FUN_800f8960(0x7692);
        FUN_800f8960(0x7712);
        FUN_800f8960(0x7792);
        FUN_800f8960(0x7812);
        FUN_800f93dc();
        iVar1 = FUN_800f6434(0x80);
        if (iVar1 == 0) {
          FUN_800f971c();
        }
        else {
          FUN_800f654c(1);
        }
        FUN_800f8960(0x7613);
        FUN_800f8960(0x7693);
        FUN_800f8960(0x7713);
        FUN_800f8960(0x7793);
        FUN_800f8960(0x7813);
        FUN_800f93dc();
        FUN_800f8960(0x7992);
        FUN_800f8960(0x7a12);
        FUN_800f8960(0x7a92);
        FUN_800f8960(0x7b12);
        FUN_800f5a90(0x30);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_800f8960(0x7b92);
        }
        FUN_800f6564(0xf133);
        FUN_800f5410();
        FUN_800f4008(8);
        FUN_800f8188(0xf133);
        FUN_800f6564(0xf134);
        FUN_800f5410();
        FUN_800f4008(8);
        FUN_800f8188(0xf134);
        *DAT_8019ed58 = *DAT_8019ed58 + 4;
        FUN_800f5a90(0x80);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      FUN_800f6564(0xf112);
      *DAT_8019ed40 = *DAT_8019ed40 >> 3;
      FUN_800f8188(0xf1b4);
      FUN_800f6564(0xf111);
      FUN_800f8188(0xf133);
      FUN_800f6564(0xf113);
      FUN_800f8188(0xf134);
      FUN_800f6240(0xf112);
      FUN_800f6564(0xf112);
      FUN_800f5574(100);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f6240(0xf425);
  }
  return;
}



