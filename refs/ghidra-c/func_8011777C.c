
undefined4 FUN_8011777c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_80117594();
  FUN_800f8188(0x1800);
  FUN_800f6564(0x1701);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f654c(1);
  }
  FUN_800f8188(0x1801);
  FUN_800f8fb8(0xe4);
  FUN_800f7500(0);
  do {
    FUN_800f6564(0x1800);
    FUN_800f5574((&DAT_80199290)[*DAT_8019ed58]);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6564(0x1801);
      FUN_800f5574((&DAT_80199291)[*DAT_8019ed58]);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        *DAT_8019ed40 = *DAT_8019ed60;
        FUN_800f5574(0x18);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f5ccc();
          FUN_800f5ccc();
        }
        FUN_800f7864();
        FUN_800f824c(6);
        *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
        FUN_800f824c(0xe4);
        FUN_800f71dc(0);
        FUN_800f7500(0);
        do {
          FUN_800f6b68(0x1000);
          FUN_800f8960(0xad6);
          FUN_80117df8();
          FUN_800f63bc();
          FUN_800f5a90(5);
          iVar1 = FUN_800f53d4();
        } while (iVar1 == 0);
        FUN_800f6630(6);
        FUN_800f5574(0xb);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f71dc(0);
          do {
            FUN_800f6b68(0x10c0);
            FUN_800f8768(0x1200);
            FUN_800f6364();
            FUN_800f5958(0x80);
            iVar1 = FUN_800f53d4();
          } while (iVar1 == 0);
          FUN_800f71dc(0);
          do {
            FUN_800f90ec(0x1000);
            FUN_80117df8();
            FUN_800f5958(0x140);
            iVar1 = FUN_800f53d4();
          } while (iVar1 == 0);
          FUN_800f71dc(0xc0);
          FUN_800f8d6c(0x3d);
          FUN_800f654c(0xd);
          FUN_80118244();
          FUN_800f71dc(0x100);
          FUN_800f8d6c(0x3d);
          FUN_800f654c(1);
          FUN_8011818c();
          FUN_800f71dc(0x100);
          FUN_80117e64();
          FUN_800f6b68(0x1009);
          FUN_800f8768(0x1007);
          FUN_800f6b68(0x100a);
          FUN_800f8768(0x1008);
          FUN_800f6b68(0x100d);
          FUN_800f8768(0x100b);
          FUN_800f6b68(0x100e);
          FUN_800f8768(0x100c);
          FUN_800f71dc(0x30);
          do {
            FUN_800f90ec(0x10c0);
            FUN_800f6364();
            FUN_800f5958(0x37);
            iVar1 = FUN_800f53d4();
          } while (iVar1 == 0);
          goto LAB_8011787c;
        }
        *DAT_8019ed58 = *DAT_8019ed44;
        FUN_800f71dc(0);
        do {
          *DAT_8019ed40 = (&DAT_80199280)[*DAT_8019ed58];
          FUN_800f5574(3);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            FUN_800f6b68(0x1000);
            FUN_800f4248(0x1f);
            FUN_800f5574((&DAT_80199280)[*DAT_8019ed58]);
            iVar1 = FUN_800f53d4();
            if (iVar1 == 0) {
              FUN_800f5a90(0xb);
              iVar1 = FUN_800f53d4();
              if (iVar1 != 0) {
                FUN_800f5574((&DAT_80199281)[*DAT_8019ed58]);
                iVar1 = FUN_800f53d4();
                if (iVar1 != 0) goto LAB_80117acc;
              }
              FUN_800f654c(0);
              FUN_800f8768(0x1000);
            }
            else {
LAB_80117acc:
              FUN_80117e64();
              FUN_800f6b68(0x1009);
              FUN_800f8768(0x1007);
              FUN_800f6b68(0x100a);
              FUN_800f8768(0x1008);
              FUN_800f6b68(0x100d);
              FUN_800f8768(0x100b);
              FUN_800f6b68(0x100e);
              FUN_800f8768(0x100c);
            }
          }
          else {
            FUN_800f6b68(0x1000);
            FUN_800f4248(0x1f);
            FUN_800f5574(3);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) {
              FUN_800f90ec(0x1000);
            }
          }
          FUN_80117df8();
          FUN_800f5958(0x140);
          iVar1 = FUN_800f53d4();
        } while (iVar1 == 0);
LAB_8011787c:
        iVar1 = FUN_800fc1cc();
        uVar2 = 1;
        if (iVar1 == 0) {
          FUN_800f6630(0xe4);
          iVar1 = FUN_800f6434(2);
          if (iVar1 == 0) {
            FUN_80117cb8();
          }
          FUN_80176060();
          FUN_800fad48();
          FUN_800fed3c();
          FUN_80170c14();
          FUN_8010b010();
          FUN_800f654c(0x81);
          FUN_800f8188(0x4200);
          FUN_8011ea5c();
          uVar2 = 0;
        }
        return uVar2;
      }
    }
    *DAT_8019ed58 = *DAT_8019ed58 + 2;
    FUN_800f5a90(0x1a);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) goto LAB_8011787c;
  } while( true );
}



