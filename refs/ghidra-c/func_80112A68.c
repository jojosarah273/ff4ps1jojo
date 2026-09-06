
void FUN_80112a68(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f654c(4);
  FUN_800f8188(0xacd);
  FUN_800f8f74(0xace);
  FUN_80115bcc();
  FUN_800f71dc(0);
  FUN_800f654c(0xff);
  do {
    FUN_800f8768(0xa6d);
    *DAT_8019ed54 = *DAT_8019ed54 + 4;
    FUN_800f5958(0x60);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f654c(0x3e);
  FUN_80117f40();
  FUN_800f71dc(0x100);
  FUN_800f8d6c(0x2c);
  FUN_800f71dc(0x10);
  FUN_800f8d6c(0x2e);
  do {
    do {
      FUN_800fe7d8();
      FUN_800fe870();
      FUN_800ff024();
      FUN_800f6630(0xad);
      FUN_800f5480();
      FUN_800f8058(0x10);
      FUN_8017559c();
      FUN_800f6564(0x67a);
      FUN_800f4248(3);
      iVar1 = FUN_800f4120(0x202);
    } while (iVar1 != 0);
    FUN_800f6630(0xad);
    FUN_800f61e8();
    FUN_800f824c(0xad);
    FUN_800f5574(0x20);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  do {
    FUN_800fe7d8();
    FUN_801130c0();
    FUN_800fe8b4();
    FUN_80116348();
    FUN_800f8fb8(0x79);
    do {
      FUN_800f6630(0x79);
      FUN_800f5140();
      *DAT_8019ed58 = *DAT_8019ed44;
      FUN_800f9644(0x20);
      FUN_800f6658(0x2c);
      FUN_800f5410();
      FUN_800f4064(*(undefined2 *)(&DAT_80198c3c + *DAT_8019ed58));
      FUN_800f8274(0xc);
      FUN_800f6658(0x2e);
      FUN_800f5410();
      FUN_800f4064(*(undefined2 *)(&DAT_80198c44 + *DAT_8019ed58));
      FUN_800f8274(0xe);
      FUN_800f6658(0x79);
      FUN_800f4264(0xff);
      *DAT_8019ed44 = *DAT_8019ed44 << 4;
      *DAT_8019ed44 = *DAT_8019ed44 | 0x100;
      *DAT_8019ed58 = *DAT_8019ed44;
      FUN_800f6558(0);
      FUN_800f9660(0x20);
      FUN_800f654c(0x1c);
      FUN_800f824c(0x91);
      FUN_800f654c(0x78);
      FUN_800f824c(0x8f);
      FUN_800f654c(0x60);
      FUN_800f824c(0x92);
      FUN_8011581c();
      FUN_800f62bc(0x79);
      FUN_800f6630(0x79);
      FUN_800f5574(3);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f8fb8(0xe3);
    FUN_800f6630(0x2c);
    FUN_800f5574(0x40);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      FUN_800f5574(0x90);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) {
        FUN_800f654c(1);
        FUN_800f824c(0xe3);
        FUN_800f6630(0x2c);
        FUN_800f4248(7);
        iVar1 = FUN_800f4120(0x202);
        if (iVar1 == 0) {
          FUN_800f62bc(0xc4);
          FUN_800f654c(0x23);
          FUN_800fd804();
          FUN_800f71dc(0);
          while( true ) {
            FUN_800f6b68(0xa6d);
            FUN_800f5574(0xff);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) break;
            FUN_800f5574(6);
            iVar1 = FUN_800f53c0();
            if (iVar1 != 0) break;
            *DAT_8019ed54 = *DAT_8019ed54 + 4;
          }
          FUN_800f90ec(0xa6d);
          FUN_800f90ec(0xa71);
          FUN_800f90ec(0xa75);
          FUN_800f6630(0x2c);
          FUN_800f5410();
          FUN_800f4008(0x20);
          FUN_800f8768(0xa6e);
          FUN_800f8768(0xa76);
          FUN_800f5480();
          FUN_800f8058(0x10);
          FUN_800f8768(0xa72);
          FUN_800f654c(0x48);
          FUN_800f8768(0xa6f);
          FUN_800f654c(0x58);
          FUN_800f8768(0xa73);
          FUN_800f654c(0x68);
          FUN_800f8768(0xa77);
        }
      }
    }
    FUN_800f8fb8(0x24);
    FUN_800f8fb8(0x25);
    do {
      FUN_800f7270(0x24);
      FUN_800f6b68(0xa6d);
      iVar1 = FUN_800f6434(0x80);
      if (iVar1 == 0) {
        FUN_800f5574(6);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_80116098();
          FUN_800f6630(0x7a);
          FUN_800f4248(7);
          iVar1 = FUN_800f4120(0x202);
          if (iVar1 == 0) {
            FUN_800f7270(0x24);
            uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0xa6d);
            FUN_800f6048(uVar2);
          }
        }
      }
      FUN_800f7270(0x24);
      *DAT_8019ed54 = *DAT_8019ed54 + 4;
      FUN_800f8d6c(0x24);
      FUN_800f5958(0x60);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f6630(0x7a);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f7270(0x2c);
      FUN_800f5e48();
      FUN_800f8d6c(0x2c);
      FUN_800f5958(0xffde);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f654c(0x23);
        FUN_80117f40();
        do {
          do {
            FUN_800fe7d8();
            FUN_800fe870();
            FUN_800ff024();
            FUN_800f6630(0xad);
            FUN_800f5480();
            FUN_800f8058(0x10);
            FUN_8017559c();
            FUN_800f6564(0x67a);
            FUN_800f4248(3);
            iVar1 = FUN_800f4120(0x202);
          } while (iVar1 != 0);
          FUN_800f6630(0xad);
          FUN_800f5ccc();
          FUN_800f824c(0xad);
          FUN_800f5574(0x10);
          iVar1 = FUN_800f53d4();
        } while (iVar1 == 0);
        FUN_8011ea5c();
        return;
      }
    }
    FUN_800f6630(0x2c);
    FUN_800f5574(0xb0);
    FUN_800f53c0();
  } while( true );
}



