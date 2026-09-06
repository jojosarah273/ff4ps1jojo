
void FUN_8015dca4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(0x8e);
  do {
    FUN_800f7270(0x8e);
    FUN_800f6b68(0x3540);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f6b68(0x3560);
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) {
        *DAT_8019ed40 = *DAT_8019ed5c;
        FUN_80152cdc();
        FUN_800f7270(0xa6);
        FUN_800f6b68(0x2003);
        FUN_800f4248(0xc0);
        iVar1 = FUN_800f4120(0x202);
        if (iVar1 == 0) {
          FUN_800f6b68(0x2004);
          FUN_800f4248(0x30);
          FUN_800f40e8();
        }
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f6b68(0x2005);
          FUN_800f4248(0x40);
          iVar1 = FUN_800f4120(2);
          if (iVar1 != 0) {
            FUN_800f6b68(0x2004);
            FUN_800f4248(0xc);
            iVar1 = FUN_800f4120(2);
            if (iVar1 == 0) {
              FUN_800f6b68(0x2005);
              FUN_800f4248(0xfb);
              FUN_800f8768(0x2005);
              FUN_800f6b68(0x2004);
              FUN_800f4248(4);
              iVar1 = FUN_800f4120(2);
              if (iVar1 == 0) {
                FUN_8015e464();
              }
              else {
                FUN_800f6b68(0x2004);
                FUN_800f4248(8);
                iVar1 = FUN_800f4120(2);
                if (iVar1 != 0) goto LAB_8015de30;
                FUN_8015dfe0();
              }
              FUN_800f8fb8(0xd6);
              FUN_800f6630(0x8e);
              FUN_8015a374();
              goto LAB_8015df60;
            }
LAB_8015de30:
            FUN_800f6b68(0x2006);
            FUN_800f4248(1);
            iVar1 = FUN_800f4120(2);
            if (iVar1 == 0) {
              FUN_800f6b68(0x2000);
              FUN_800f4248(0x1f);
              FUN_800f5574(5);
              iVar1 = FUN_800f53d4();
              if (iVar1 != 0) {
                FUN_800f6564(0x3582);
                iVar1 = FUN_800f6434(0x202);
                if (iVar1 == 0) {
                  FUN_800f654c(3);
                  FUN_8015310c();
                  FUN_800f7210(0x3598);
                  FUN_800f6b68(0x2a06);
                  FUN_800f4248(8);
                  iVar1 = FUN_800f4120(0x202);
                  if (iVar1 == 0) {
                    FUN_800f7270(0xa6);
                    FUN_800f6b68(0x2006);
                    iVar1 = FUN_800f6434(0x8080);
                    if (iVar1 == 0) {
                      FUN_8015e758();
                      FUN_800f5ccc();
                      iVar1 = FUN_800f5b8c(0x202);
                      if (iVar1 == 0) {
                        FUN_8015e6a4();
LAB_8015df60:
                        FUN_800f654c(3);
                        FUN_80153374();
                        FUN_800f654c(8);
                        FUN_800f8768(0x2a06);
                        FUN_800f7270(0x8e);
                        uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x3560);
                        FUN_800f6048(uVar2);
                      }
                    }
                    else {
                      FUN_8015e758();
                      FUN_800f5ccc();
                      iVar1 = FUN_800f5b8c(2);
                      if (iVar1 == 0) {
                        FUN_8015e66c();
                        goto LAB_8015df60;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    FUN_800f62bc(0x8e);
    FUN_800f6630(0x8e);
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
  } while( true );
}



