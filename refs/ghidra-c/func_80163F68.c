
void FUN_80163f68(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d00(0x3591);
  FUN_800f8d00(0x3593);
  FUN_800f8d00(0x3594);
  FUN_800f8d00(0x3595);
  FUN_800f8d6c(0xb5);
  FUN_800f8d6c(0xb7);
  do {
    FUN_800f7270(0xb7);
    FUN_800f6b68(0x3585);
    FUN_800f824c(0xb1);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 != 0) {
      do {
        FUN_800f7270(0xb7);
        FUN_800f6b68(0x358b);
        FUN_800f824c(0xaf);
        FUN_800f8fb8(0xb0);
        uVar2 = FUN_800f3c3c(0xaf);
        FUN_800f4f28(uVar2);
        FUN_800f4f4c();
        uVar2 = FUN_800f3c3c(0xb0);
        FUN_800f7a40(uVar2);
        FUN_800f7270(0xaf);
        FUN_800f5410();
        FUN_800f6c68(0xea1c0);
        uVar2 = FUN_800f3b04(0x3591);
        FUN_800f3f38(uVar2);
        FUN_800f8188(0x3591);
        FUN_800f6c68(0xea1c1);
        uVar2 = FUN_800f3b04(0x3592);
        FUN_800f3f38(uVar2);
        FUN_800f8188(0x3592);
        FUN_800f6564(0x3593);
        FUN_800f4008(0);
        FUN_800f8188(0x3593);
        FUN_800f7270(0xb7);
        FUN_800f6b68(0x3588);
        FUN_800f824c(0xaf);
        FUN_800f8fb8(0xb0);
        uVar2 = FUN_800f3c3c(0xaf);
        FUN_800f4f28(uVar2);
        FUN_800f4f4c();
        uVar2 = FUN_800f3c3c(0xb0);
        FUN_800f7a40(uVar2);
        FUN_800f7270(0xaf);
        FUN_800f5410();
        FUN_800f6c68(0xea000);
        uVar2 = FUN_800f3b04(0x3594);
        FUN_800f3f38(uVar2);
        FUN_800f8188(0x3594);
        FUN_800f6c68(0xea001);
        uVar2 = FUN_800f3b04(0x3595);
        FUN_800f3f38(uVar2);
        FUN_800f8188(0x3595);
        FUN_800f6564(0x3596);
        FUN_800f4008(0);
        FUN_800f8188(0x3596);
        FUN_800f7270(0xb7);
        FUN_800f6b68(0x358e);
        FUN_800f824c(0xb3);
        FUN_800f6b68(0x358e);
        FUN_800f4248(0xc0);
        FUN_800f5574(0xc0);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f5574(0x40);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            FUN_800f5574(0x80);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) {
              FUN_800f654c(0x19);
              goto LAB_801641e0;
            }
          }
          else {
            FUN_800f654c(5);
LAB_801641e0:
            FUN_800f824c(0xb4);
            FUN_801531cc();
            uVar2 = FUN_800f3c3c(0xb4);
            FUN_800f54d4(uVar2);
            iVar1 = FUN_800f53c0();
            if (iVar1 == 0) goto LAB_80164210;
          }
        }
        else {
LAB_80164210:
          uVar2 = FUN_800f3c3c(0xb3);
          FUN_800f4f28(uVar2);
          uVar2 = FUN_800f3c3c(0xb3);
          FUN_800f4f28(uVar2);
          FUN_800f6630(0xb3);
          *DAT_8019ed54 = *DAT_8019ed44;
          FUN_800f971c();
          *DAT_8019ed58 = *DAT_8019ed44;
          FUN_800f8ebc(0xa9);
          do {
            FUN_800f6c68(0xe9f00);
            FUN_800f8960(0x289c);
            FUN_800f6364();
            FUN_800f63bc();
            FUN_800f62bc(0xa9);
            FUN_800f6630(0xa9);
            FUN_800f5574(4);
            iVar1 = FUN_800f53d4();
          } while (iVar1 == 0);
          FUN_800f6564(0x16a3);
          uVar2 = FUN_800f3c3c(0x97);
          FUN_800f3f38(uVar2);
          FUN_800f824c(0x97);
          FUN_80153218();
          FUN_800f5574(0x80);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) {
            FUN_800f654c(0);
          }
          else {
            FUN_800f5574(0xd0);
            iVar1 = FUN_800f53c0();
            if (iVar1 == 0) {
              FUN_800f654c(1);
            }
            else {
              FUN_800f5574(0xfc);
              iVar1 = FUN_800f53c0();
              if (iVar1 == 0) {
                FUN_800f654c(2);
              }
              else {
                FUN_800f654c(3);
              }
            }
          }
          *DAT_8019ed54 = *DAT_8019ed44;
          FUN_800f6b68(0x289c);
          FUN_800f7270(0xb5);
          FUN_800f5958(8);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            FUN_800f8768(0x1804);
            FUN_800f62bc(0xb5);
          }
        }
        FUN_800f5da0(0xb1);
        FUN_800f6630(0xb1);
        iVar1 = FUN_800f6434(2);
      } while (iVar1 == 0);
    }
    FUN_800f62bc(0xb7);
    FUN_800f6630(0xb7);
    FUN_800f5574(3);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f5410();
  FUN_800f6564(0x16a0);
  uVar2 = FUN_800f3b04(0x3594);
  FUN_800f3f38(uVar2);
  FUN_800f8188(0x16a0);
  FUN_800f6564(0x16a1);
  uVar2 = FUN_800f3b04(0x3595);
  FUN_800f3f38(uVar2);
  FUN_800f8188(0x16a1);
  FUN_800f6564(0x16a2);
  uVar2 = FUN_800f3b04(0x3596);
  FUN_800f3f38(uVar2);
  FUN_800f8188(0x16a2);
  FUN_800f5480();
  FUN_800f6564(0x16a0);
  FUN_800f8058(0x7f);
  FUN_800f6564(0x16a1);
  FUN_800f8058(0x96);
  FUN_800f6564(0x16a2);
  FUN_800f8058(0x98);
  iVar1 = FUN_800f53c0();
  if (iVar1 != 0) {
    FUN_800f654c(0x7f);
    FUN_800f8188(0x16a0);
    FUN_800f654c(0x96);
    FUN_800f8188(0x16a1);
    FUN_800f654c(0x98);
    FUN_800f8188(0x16a2);
  }
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(0xa9);
  FUN_800f8d6c(0xab);
  FUN_800f8d6c(0xad);
  FUN_800f8d00(0x405f);
  FUN_800f8d00(0x4061);
  FUN_800f8d00(0x4063);
  FUN_800f8d00(0x4065);
  FUN_800f8d00(0x4067);
  do {
    FUN_800f7270(0xa9);
    FUN_800f5958(5);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f6b68(0x3540);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) goto LAB_80164578;
    }
    else {
LAB_80164578:
      FUN_800f7270(0xad);
      FUN_800f6b68(0x1000);
      FUN_800f4248(0x1f);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f6b68(0x1003);
        FUN_800f4248(0xc0);
        iVar1 = FUN_800f4120(0x202);
        if (iVar1 == 0) {
          FUN_800f7270(0xa9);
          uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x405f);
          FUN_800f6048(uVar2);
          FUN_800f5958(5);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) {
            FUN_800f62bc(0xab);
          }
        }
      }
    }
    FUN_800f9644(0x20);
    FUN_800f5410();
    FUN_800f6658(0xad);
    FUN_800f4064(0x40);
    FUN_800f8274(0xad);
    FUN_800f971c();
    FUN_800f9660(0x20);
    FUN_800f62bc(0xa9);
    FUN_800f6630(0xa9);
    FUN_800f5574(10);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6564(0x3591);
      uVar2 = FUN_800f3b04(0x3592);
      FUN_800f78c4(uVar2);
      uVar2 = FUN_800f3b04(0x3593);
      FUN_800f78c4(uVar2);
      iVar1 = FUN_800f7918(2);
      if (iVar1 == 0) {
        FUN_800f971c();
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f8d6c(0xad);
        FUN_800f8d6c(0xaf);
        FUN_800f6564(0x3591);
        uVar2 = FUN_800f3b04(0x3592);
        FUN_800f78c4(uVar2);
        uVar2 = FUN_800f3b04(0x3593);
        FUN_800f78c4(uVar2);
        iVar1 = FUN_800f7918(0x202);
        if (iVar1 == 0) {
          FUN_800f8fb8(0xad);
          FUN_800f8fb8(0xae);
          FUN_800f8fb8(0xaf);
        }
        else {
          FUN_8016e668();
        }
        FUN_800f6630(0xad);
        uVar2 = FUN_800f3c3c(0xae);
        FUN_800f78c4(uVar2);
        uVar2 = FUN_800f3c3c(0xaf);
        FUN_800f78c4(uVar2);
        iVar1 = FUN_800f7918(0x202);
        if (iVar1 == 0) {
          FUN_800f62bc(0xad);
        }
        FUN_800f7270(0xad);
        FUN_800f8d00(0x3591);
        FUN_800f6630(0xaf);
        FUN_800f8188(0x3593);
      }
      FUN_8005a234();
      FUN_80153264();
      FUN_800f6564(0x3594);
      FUN_800f8188(0x359a);
      FUN_800f6564(0x3595);
      FUN_800f8188(0x359b);
      FUN_800f6564(0x3596);
      FUN_800f8188(0x359c);
      FUN_800f6564(0x3591);
      FUN_800f8188(0x359d);
      FUN_800f6564(0x3592);
      FUN_800f8188(0x359e);
      FUN_800f6564(0x3593);
      FUN_800f8188(0x359f);
      FUN_800f971c();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f6564(0x3594);
      uVar2 = FUN_800f3b04(0x3595);
      FUN_800f78c4(uVar2);
      iVar1 = FUN_800f7918(2);
      if (iVar1 == 0) {
        FUN_800f654c(0x1f);
        FUN_800f8188(0x34ca);
        FUN_800f6364();
      }
      FUN_800f6564(0x3591);
      uVar2 = FUN_800f3b04(0x3592);
      FUN_800f78c4(uVar2);
      iVar1 = FUN_800f7918(2);
      if (iVar1 == 0) {
        FUN_800f654c(0x20);
        FUN_800f8768(0x34ca);
        FUN_800f6364();
      }
      *DAT_8019ed40 = *DAT_8019ed5c;
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f654c(5);
        FUN_80150c38();
      }
      FUN_800f654c(0xff);
      FUN_800f8188(0x34cb);
      FUN_800f971c();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f8d6c(0xa9);
      FUN_800f8d6c(0xab);
      do {
        FUN_800f7270(0xa9);
        FUN_800f6b68(0x405f);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f7270(0xab);
          FUN_800f5410();
          FUN_800f6b68(0x1037);
          uVar2 = FUN_800f3b04(0x3591);
          FUN_800f3f38(uVar2);
          FUN_800f8768(0x1037);
          FUN_800f6b68(0x1038);
          uVar2 = FUN_800f3b04(0x3592);
          FUN_800f3f38(uVar2);
          FUN_800f8768(0x1038);
          FUN_800f6b68(0x1039);
          uVar2 = FUN_800f3b04(0x3593);
          FUN_800f3f38(uVar2);
          FUN_800f8768(0x1039);
          FUN_800f5480();
          FUN_800f6b68(0x1037);
          FUN_800f8058(0x7f);
          FUN_800f6b68(0x1038);
          FUN_800f8058(0x96);
          FUN_800f6b68(0x1039);
          FUN_800f8058(0x98);
          iVar1 = FUN_800f53c0();
          if (iVar1 != 0) {
            FUN_800f654c(0x7f);
            FUN_800f8768(0x1037);
            FUN_800f654c(0x96);
            FUN_800f8768(0x1038);
            FUN_800f654c(0x98);
            FUN_800f8768(0x1039);
          }
        }
        FUN_800f9644(0x20);
        FUN_800f5410();
        FUN_800f6658(0xab);
        FUN_800f4064(0x40);
        FUN_800f8274(0xab);
        FUN_800f971c();
        FUN_800f9660(0x20);
        FUN_800f62bc(0xa9);
        FUN_800f6630(0xa9);
        FUN_800f5574(10);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      FUN_800f971c();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f8d6c(0x98);
      FUN_800f8d6c(0xa6);
      do {
        FUN_800f7270(0x98);
        FUN_800f6b68(0x405f);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 != 0) {
          while( true ) {
            FUN_800f7270(0xa6);
            FUN_800f6b68(0x1000);
            FUN_800f4248(0x1f);
            FUN_800f5ccc();
            FUN_800f5140();
            *DAT_8019ed54 = *DAT_8019ed44;
            FUN_800f6c68(0xfb500);
            FUN_800f824c(0x80);
            FUN_800f6c68(0xfb501);
            FUN_800f824c(0x81);
            FUN_800f654c(0xf);
            FUN_800f824c(0x82);
            FUN_800f7270(0xa6);
            FUN_800f6b68(0x1002);
            FUN_800f5574(0x46);
            iVar1 = FUN_800f53c0();
            if (iVar1 != 0) {
              FUN_800f654c(0x45);
            }
            FUN_800f5ccc();
            FUN_800f824c(0xdf);
            FUN_800f654c(5);
            FUN_800f824c(0xe1);
            FUN_8015240c();
            FUN_800f7594(0xe3);
            FUN_800f971c();
            *DAT_8019ed54 = *DAT_8019ed44;
            do {
              FUN_800f67fc(0x80);
              FUN_800f8768(0x289c);
              FUN_800f63bc();
              FUN_800f6364();
              FUN_800f5958(5);
              iVar1 = FUN_800f53d4();
            } while (iVar1 == 0);
            FUN_800f7270(0xa6);
            FUN_800f6b68(0x1002);
            FUN_800f5574(0x46);
            iVar1 = FUN_800f53c0();
            if (iVar1 != 0) {
              FUN_800f939c();
              FUN_800f71dc(0);
              FUN_800f654c(7);
              FUN_80152224();
              *DAT_8019ed54 = *DAT_8019ed44;
              FUN_800f8d6c(0xad);
              FUN_800f960c();
              FUN_800f9644(0x20);
              *DAT_8019ed44 = *DAT_8019ed58;
              FUN_800f5410();
              uVar2 = FUN_800f3c3c(0xad);
              FUN_800f3f94(uVar2);
              *DAT_8019ed58 = *DAT_8019ed44;
              FUN_800f971c();
              FUN_800f9660(0x20);
              FUN_800f67fc(0x80);
              FUN_800f8188(0x289c);
            }
            FUN_800f6564(0x289f);
            FUN_800f824c(0xad);
            FUN_800f6564(0x28a0);
            FUN_800f824c(0xae);
            FUN_800f6564(0x289e);
            FUN_80152aac();
            FUN_800f824c(0xaf);
            FUN_800f7270(0xa6);
            FUN_800f5410();
            FUN_800f6b68(0x103d);
            uVar2 = FUN_800f3c3c(0xad);
            FUN_800f3f38(uVar2);
            FUN_800f824c(0xad);
            FUN_800f6b68(0x103e);
            uVar2 = FUN_800f3c3c(0xae);
            FUN_800f3f38(uVar2);
            FUN_800f824c(0xae);
            FUN_800f6b68(0x103f);
            uVar2 = FUN_800f3c3c(0xaf);
            FUN_800f3f38(uVar2);
            FUN_800f824c(0xaf);
            FUN_800f5480();
            FUN_800f6b68(0x1037);
            uVar2 = FUN_800f3c3c(0xad);
            FUN_800f7f48(uVar2);
            FUN_800f6b68(0x1038);
            uVar2 = FUN_800f3c3c(0xae);
            FUN_800f7f48(uVar2);
            FUN_800f6b68(0x1039);
            uVar2 = FUN_800f3c3c(0xaf);
            FUN_800f7f48(uVar2);
            iVar1 = FUN_800f53c0();
            if (iVar1 == 0) break;
            FUN_800f6630(0xad);
            FUN_800f8768(0x103d);
            FUN_800f6630(0xae);
            FUN_800f8768(0x103e);
            FUN_800f6630(0xaf);
            FUN_800f8768(0x103f);
            FUN_800f6b68(0x1002);
            FUN_800f5574(99);
            iVar1 = FUN_800f53c0();
            if (iVar1 != 0) break;
            uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x1002);
            FUN_800f6048(uVar2);
            FUN_8016501c();
            FUN_800f6630(0x98);
            FUN_800f5574(5);
            iVar1 = FUN_800f53c0();
            if (iVar1 == 0) {
              FUN_800f8188(0x359a);
              FUN_800f654c(0x21);
              FUN_800f8188(0x34ca);
              FUN_800f654c(5);
              FUN_80150c38();
              FUN_800f654c(0x23);
              FUN_800f8188(0x34ca);
              FUN_800f971c();
              *DAT_8019ed54 = *DAT_8019ed44;
              FUN_800f8d6c(0xaf);
              while( true ) {
                FUN_800f7270(0xaf);
                FUN_800f6b68(0x291c);
                FUN_800f5574(0xff);
                iVar1 = FUN_800f53d4();
                if (iVar1 != 0) break;
                FUN_800f8188(0x359a);
                FUN_800f654c(5);
                FUN_80150c38();
                FUN_800f62bc(0xaf);
              }
            }
          }
        }
        FUN_800f9644(0x20);
        FUN_800f5410();
        FUN_800f6658(0xa6);
        FUN_800f4064(0x40);
        FUN_800f8274(0xa6);
        FUN_800f971c();
        FUN_800f9660(0x20);
        FUN_800f62bc(0x98);
        FUN_800f6630(0x98);
        FUN_800f5574(10);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_801571dc();
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
          return;
        }
      } while( true );
    }
  } while( true );
}



