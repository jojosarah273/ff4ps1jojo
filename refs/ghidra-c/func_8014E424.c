
void FUN_8014e424(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f5574(3);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(4);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5574(2);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6564(0xf2d0);
        FUN_800f5574(2);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f5574(3);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            FUN_800f971c();
            *DAT_8019ed54 = *DAT_8019ed44;
            FUN_800f6564(0xf279);
            iVar1 = FUN_800f6434(0x202);
            if (iVar1 == 0) {
              do {
                FUN_800f654c(8);
                FUN_8014e984();
                FUN_800f5480();
                FUN_800f8058(4);
                FUN_800f8768(0xf268);
                FUN_800f654c(0xc);
                FUN_8014e984();
                FUN_800f5480();
                FUN_800f8058(6);
                FUN_800f8768(0xf269);
                *DAT_8019ed54 = *DAT_8019ed54 + 2;
                FUN_800f5958(10);
                iVar1 = FUN_800f53d4();
              } while (iVar1 == 0);
            }
            else {
              do {
                FUN_800f6b68(0xf2a1);
                *DAT_8019ed40 = *DAT_8019ed40 << 2;
                FUN_800f824c(0);
                FUN_800f5140();
                FUN_8014e984();
                FUN_800f5480();
                uVar2 = FUN_800f3c3c(0);
                FUN_800f7f48(uVar2);
                FUN_800f8768(0xf268);
                FUN_800f6364();
                FUN_800f5958(0x10);
                iVar1 = FUN_800f53d4();
              } while (iVar1 == 0);
            }
          }
          else {
            FUN_800f971c();
            *DAT_8019ed54 = *DAT_8019ed44;
            FUN_800f654c(0x20);
            FUN_800f824c(0);
            do {
              FUN_800f654c(0x90);
              FUN_8014e984();
              FUN_800f5410();
              FUN_800f4008(0x18);
              FUN_800f8768(0xf268);
              FUN_800f6630(0);
              FUN_800f8768(0xf269);
              FUN_800f5410();
              FUN_800f4008(0xc);
              FUN_800f824c(0);
              *DAT_8019ed54 = *DAT_8019ed54 + 2;
              FUN_800f5958(0x10);
              iVar1 = FUN_800f53d4();
            } while (iVar1 == 0);
          }
        }
        else {
          FUN_800f71dc(0);
          FUN_800f654c(0x20);
          FUN_800f824c(0);
          do {
            FUN_800f654c(0x20);
            FUN_8014e984();
            FUN_800f5410();
            FUN_800f4008(0xd0);
            FUN_800f8768(0xf268);
            FUN_800f6630(0);
            FUN_800f8768(0xf269);
            FUN_800f5410();
            FUN_800f4008(0xc);
            FUN_800f824c(0);
            *DAT_8019ed54 = *DAT_8019ed54 + 2;
            FUN_800f5958(0x10);
            iVar1 = FUN_800f53d4();
          } while (iVar1 == 0);
        }
      }
      else {
        FUN_80073c98();
      }
    }
  }
  return;
}



