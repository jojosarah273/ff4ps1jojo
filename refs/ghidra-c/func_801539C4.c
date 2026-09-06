
void FUN_801539c4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6564(0x1800);
  FUN_800f5574(0xb6);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(0xb7);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) goto LAB_80153a28;
  }
  FUN_800f6564(0x1801);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6240(0x3881);
  }
LAB_80153a28:
  FUN_801571dc();
  FUN_80157948();
  FUN_801577d0();
  FUN_800f6564(0x29a2);
  FUN_800f8188(0x38e5);
  FUN_800f4248(0x20);
  FUN_800f8188(0x388b);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
LAB_80153a94:
    FUN_800f6c68(0x13fe0d);
    uVar2 = FUN_800f3b04(0x1800);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) goto code_r0x80153ac0;
    FUN_800f8d6c(0x84);
    FUN_800f6c68(0x13fe0e);
    uVar2 = FUN_800f3b04(0x1801);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      *DAT_8019ed40 = *DAT_8019ed5c;
      FUN_800f6c68(0x13fe1d);
      FUN_800f824c(0x80);
      FUN_800f6c68(0x13fe1e);
      FUN_800f824c(0x81);
      FUN_800f654c(0x13);
      FUN_800f824c(0x82);
      FUN_800f971c();
      *DAT_8019ed58 = *DAT_8019ed44;
      *DAT_8019ed54 = *DAT_8019ed44;
      do {
        FUN_800f67fc(0x80);
        FUN_800f8768(0x388c);
        FUN_800f63bc();
        FUN_800f6364();
        FUN_800f5574(0xff);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      FUN_800f6630(0x84);
      FUN_800f5574(0xc);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574(0xe);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) goto LAB_80153c24;
      }
      else {
LAB_80153c24:
        FUN_800f971c();
        *DAT_8019ed54 = *DAT_8019ed44;
        do {
          FUN_800f67fc(0x80);
          FUN_800f8768(0x389a);
          FUN_800f63bc();
          FUN_800f6364();
          FUN_800f5574(0xff);
          iVar1 = FUN_800f53d4();
        } while (iVar1 == 0);
        FUN_800f654c(99);
        FUN_800f8188(0x2190);
        FUN_800f8188(0x2210);
      }
    }
  }
LAB_80153c98:
  FUN_80155778();
  FUN_800f8f74(0x3975);
  do {
    FUN_800f6564(0x3975);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6b68(0x3540);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_801583fc();
    }
    FUN_800f6240(0x3975);
    FUN_800f6564(0x3975);
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f8d6c(0xa9);
  FUN_800f8ebc(0xab);
  do {
    FUN_800f6630(0xa9);
    FUN_80152cdc();
    FUN_800f7270(0xa6);
    FUN_800f6b68(0x2001);
    FUN_800f4248(0xf);
    FUN_800f824c(0xb7);
    FUN_800f5140();
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(0xb7);
    FUN_800f3f38(uVar2);
    FUN_800f824c(0xb7);
    FUN_800f8fb8(0xb8);
    FUN_800f8fb8(0xb5);
    do {
      FUN_800f7270(0xb7);
      FUN_800f6c68(0x13fddd);
      FUN_800f5574(0xff);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f824c(0xdf);
        FUN_800f654c(0x18);
        FUN_800f824c(0xe1);
        FUN_8015240c();
        FUN_800f7270(0xe3);
        FUN_800f8fb8(0xad);
        FUN_800f7594(0xab);
        do {
          FUN_800f6c68(0x1560);
          FUN_800f8960(0x2c7b);
          FUN_800f63bc();
          FUN_800f63bc();
          FUN_800f63bc();
          FUN_800f63bc();
          FUN_800f6364();
          FUN_800f62bc(0xad);
          FUN_800f6630(0xad);
          FUN_800f5574(0x18);
          iVar1 = FUN_800f53d4();
        } while (iVar1 == 0);
        FUN_800f8ebc(0xab);
      }
      else {
        FUN_800f5410();
        FUN_800f6630(0xab);
        FUN_800f4008(0x60);
        FUN_800f824c(0xab);
        FUN_800f6630(0xac);
        FUN_800f4008(0);
        FUN_800f824c(0xac);
      }
      FUN_800f62bc(0xb7);
      FUN_800f62bc(0xb5);
      FUN_800f6630(0xb5);
      FUN_800f5574(3);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f62bc(0xa9);
    FUN_800f6630(0xa9);
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(0xa9);
  do {
    FUN_800f7270(0xa9);
    FUN_800f6b68(0x2c7b);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f8d6c(0xe5);
      FUN_800f71dc(0x97a0);
      FUN_800f8d6c(0x80);
      FUN_800f654c(0xf);
      FUN_800f824c(0x82);
      FUN_800f654c(6);
      FUN_801526f8();
      FUN_800f7270(0xa9);
      FUN_800f6564(0x289c);
      FUN_800f4248(0xe0);
      FUN_800f7864();
      FUN_800f8768(0x2c7a);
      FUN_800f6564(0x28a1);
      FUN_800f4248(0x7f);
      FUN_800f8768(0x2c7d);
    }
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f8d6c(0xa9);
    FUN_800f5958(0x5a0);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f6b68(0x1440);
    FUN_800f8960(0x321b);
    FUN_800f6b68(0x1441);
    FUN_800f8960(0x321c);
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f5958(0x60);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(0xa9);
  do {
    FUN_800f8fb8(199);
    FUN_800f7270(0xa9);
    FUN_800f6b68(0x321b);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f5574(0xde);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) {
        FUN_800f5574(0xb0);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_800f5574(0x6d);
          iVar1 = FUN_800f53c0();
          if (iVar1 != 0) goto LAB_80154344;
          FUN_800f5574(0x61);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) {
LAB_801541ac:
            *DAT_8019ed54 = *DAT_8019ed44;
            FUN_800f8d6c(0xe5);
            FUN_800f71dc(0x9100);
            FUN_800f8d6c(0x80);
            FUN_800f654c(0xf);
            FUN_800f824c(0x82);
            FUN_800f654c(8);
            FUN_801526f8();
            FUN_800f6564(0x289c);
            FUN_80152bc4();
            FUN_800f4248(8);
            FUN_800f824c(199);
            FUN_800f6564(0x289f);
            FUN_800f9200();
            *DAT_8019ed54 = *DAT_8019ed44;
            FUN_800f8d6c(0xe5);
            FUN_800f71dc(0x97a0);
            FUN_800f8d6c(0x80);
            FUN_800f654c(0xf);
            FUN_800f824c(0x82);
            FUN_800f654c(6);
            FUN_801526f8();
            FUN_800f7270(0xa9);
            FUN_800f93dc();
            FUN_800f8768(0x321d);
            goto LAB_80154314;
          }
          FUN_800f654c(0);
          iVar1 = FUN_800f6434(2);
          if (iVar1 == 0) goto LAB_801541ac;
        }
        else {
          FUN_800f5480();
          FUN_800f8058(0xb0);
          *DAT_8019ed54 = *DAT_8019ed44;
          FUN_800f8d6c(0xe5);
          FUN_800f71dc(0x9680);
          FUN_800f8d6c(0x80);
          FUN_800f654c(0xf);
          FUN_800f824c(0x82);
          FUN_800f654c(6);
          FUN_801526f8();
          FUN_800f7270(0xa9);
          FUN_800f6564(0x289f);
          FUN_800f8768(0x321d);
LAB_80154314:
          FUN_800f6564(0x289c);
          FUN_800f4248(0xe0);
          uVar2 = FUN_800f3c3c(199);
          FUN_800f78c4(uVar2);
          FUN_800f7864();
        }
        FUN_800f8768(0x321a);
      }
    }
LAB_80154344:
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f8d6c(0xa9);
    FUN_800f5958(0xc0);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f971c();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f8d6c(0xa9);
      do {
        FUN_800f8fb8(199);
        FUN_800f7270(0xa9);
        FUN_800f6b68(0x32db);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          *DAT_8019ed54 = *DAT_8019ed44;
          FUN_800f8d6c(0xe5);
          FUN_800f71dc(0x9100);
          FUN_800f8d6c(0x80);
          FUN_800f654c(0xf);
          FUN_800f824c(0x82);
          FUN_800f654c(8);
          FUN_801526f8();
          FUN_800f6564(0x289c);
          FUN_80152bc4();
          FUN_800f4248(8);
          FUN_800f824c(199);
          FUN_800f7270(0xa9);
          FUN_800f6564(0x289f);
          FUN_800f8768(0x32dd);
          *DAT_8019ed54 = *DAT_8019ed44;
          FUN_800f8d6c(0xe5);
          FUN_800f71dc(0x97a0);
          FUN_800f8d6c(0x80);
          FUN_800f654c(0xf);
          FUN_800f824c(0x82);
          FUN_800f654c(6);
          FUN_801526f8();
          FUN_800f7270(0xa9);
          FUN_800f6564(0x289c);
          FUN_800f4248(0xe0);
          uVar2 = FUN_800f3c3c(199);
          FUN_800f78c4(uVar2);
          FUN_800f7864();
          FUN_800f8768(0x32da);
        }
        FUN_800f6364();
        FUN_800f6364();
        FUN_800f6364();
        FUN_800f6364();
        FUN_800f8d6c(0xa9);
        FUN_800f5958(0x28);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      FUN_800f971c();
      *DAT_8019ed58 = *DAT_8019ed44;
      FUN_800f8ebc(0xa9);
      do {
        FUN_800f7270(0xa9);
        FUN_800f6b68(0x2000);
        FUN_800f4248(0x1f);
        iVar1 = FUN_800f4120(0x202);
        if (iVar1 == 0) {
          FUN_800f61e8();
        }
        FUN_800f5ccc();
        FUN_800f824c(0xdf);
        FUN_800f654c(5);
        FUN_800f824c(0xe1);
        FUN_8015240c();
        FUN_800f654c(5);
        FUN_800f824c(0xab);
        FUN_800f7270(0xe3);
        do {
          FUN_800f6c68(0x13fd55);
          FUN_800f8960(0x3303);
          FUN_800f5574(0xff);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            FUN_800f9330();
            *DAT_8019ed54 = *DAT_8019ed44;
            FUN_800f6c68(0x13fdc3);
          }
          else {
            FUN_800f9330();
          }
          FUN_800f8960(0x3302);
          FUN_800f95a0();
          FUN_800f6364();
          FUN_800f63bc();
          FUN_800f63bc();
          FUN_800f63bc();
          FUN_800f63bc();
          FUN_800f5da0(0xab);
          FUN_800f6630(0xab);
          iVar1 = FUN_800f6434(0x202);
        } while (iVar1 != 0);
        FUN_800f654c(0x1a);
        FUN_800f8960(0x3303);
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f654c(0x1b);
        FUN_800f8960(0x3303);
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f63bc();
        (&DAT_800d0000)[*DAT_8019ed4c] = *DAT_8019ed68;
        *DAT_8019ed4c = *DAT_8019ed4c - 1;
        FUN_800f9644(0x20);
        FUN_800f5410();
        FUN_800f6658(0xa9);
        FUN_800f4064(0x80);
        FUN_800f8274(0xa9);
        FUN_800f971c();
        *DAT_8019ed4c = *DAT_8019ed4c + 1;
        *DAT_8019ed68 = (&DAT_800d0000)[*DAT_8019ed4c];
        FUN_800f5a90(0x8c);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      FUN_800f971c();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f8d6c(0xb9);
      do {
        FUN_800f8fb8(0xbd);
        FUN_800f7270(0xb9);
        FUN_800f6b68(0x29b5);
        FUN_800f5574(0xff);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          *DAT_8019ed54 = *DAT_8019ed44;
          FUN_800f6564(0x299c);
          FUN_801530e0();
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            FUN_800f62bc(0xbd);
          }
          FUN_800f6b68(0x29ad);
          FUN_800f824c(0xbb);
          FUN_800f8fb8(0xbc);
          FUN_80155c88();
        }
        else {
          *DAT_8019ed40 = *DAT_8019ed5c;
          FUN_800f5410();
          FUN_800f4008(5);
          *DAT_8019ed54 = *DAT_8019ed44;
          uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x3540);
          FUN_800f6048(uVar2);
        }
        FUN_800f62bc(0xb9);
        FUN_800f6630(0xb9);
        FUN_800f5574(8);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      FUN_801548f4();
      return;
    }
  } while( true );
code_r0x80153ac0:
  FUN_800f6364();
  FUN_800f6364();
  FUN_800f5958(0x10);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) goto LAB_80153c98;
  goto LAB_80153a94;
}



