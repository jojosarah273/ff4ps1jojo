
void FUN_801548f4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6564(0x29a0);
  FUN_800f4248(3);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5574(2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f971c();
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f8d6c(199);
        do {
          FUN_800f7270(199);
          FUN_800f6b68(0x29b5);
          iVar1 = FUN_800f6434(2);
          if (iVar1 == 0) {
            FUN_800f5574(0xff);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) goto LAB_80154ab0;
            FUN_80155658();
          }
          FUN_800f62bc(199);
        } while( true );
      }
      FUN_800f971c();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f8d6c(199);
      while( true ) {
        FUN_800f7270(199);
        FUN_800f6b68(0x29b5);
        FUN_800f5574(0xff);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) break;
        FUN_800f5574(2);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f53d4();
          FUN_80155658();
        }
        FUN_800f62bc(199);
      }
    }
    else {
      FUN_800f971c();
      *DAT_8019ed54 = *DAT_8019ed44;
      while( true ) {
        FUN_800f6b68(0x29b5);
        FUN_800f5574(1);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) break;
        FUN_800f6364();
      }
      FUN_80155658();
    }
  }
LAB_80154ab0:
  FUN_800f6564(0x3581);
  FUN_800f4248(8);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f654c(0x80);
    FUN_800f8188(0x38d8);
  }
  else {
    FUN_800f6564(0x3582);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f6564(0x38e5);
      FUN_800f4248(1);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) {
        FUN_800f6564(0x38ef);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 == 0) {
          FUN_800f971c();
          *DAT_8019ed54 = *DAT_8019ed44;
          *DAT_8019ed58 = *DAT_8019ed44;
          FUN_800f8d6c(0xa9);
          FUN_800f8d6c(0xab);
          FUN_800f8d6c(0xad);
          do {
            FUN_800f6d70(0x3540);
            iVar1 = FUN_800f6434(0x202);
            if (iVar1 == 0) {
              FUN_800f5410();
              FUN_800f6b68(0x2002);
              uVar2 = FUN_800f3c3c(0xa9);
              FUN_800f3f38(uVar2);
              FUN_800f824c(0xa9);
              FUN_800f654c(0);
              uVar2 = FUN_800f3c3c(0xaa);
              FUN_800f3f38(uVar2);
              FUN_800f824c(0xaa);
              FUN_800f62bc(0xad);
            }
            FUN_8015330c();
            FUN_800f63bc();
            FUN_800f5a90(5);
            iVar1 = FUN_800f53d4();
          } while (iVar1 == 0);
          do {
            FUN_800f6d70(0x3540);
            iVar1 = FUN_800f6434(0x202);
            if (iVar1 == 0) {
              FUN_800f5410();
              FUN_800f6b68(0x2002);
              uVar2 = FUN_800f3c3c(0xab);
              FUN_800f3f38(uVar2);
              FUN_800f824c(0xab);
              FUN_800f654c(0);
              uVar2 = FUN_800f3c3c(0xac);
              FUN_800f3f38(uVar2);
              FUN_800f824c(0xac);
              FUN_800f62bc(0xae);
            }
            FUN_8015330c();
            FUN_800f63bc();
            FUN_800f5a90(8);
            iVar1 = FUN_800f53d4();
          } while (iVar1 == 0);
          FUN_800f7270(0xa9);
          FUN_800f8d00(0x3945);
          FUN_800f6630(0xad);
          *DAT_8019ed54 = *DAT_8019ed44;
          FUN_800f8d00(0x3947);
          FUN_8015254c();
          FUN_800f7210(0x3949);
          *DAT_8019ed40 = *DAT_8019ed5c;
          FUN_800f8188(0x38d4);
          FUN_800f971c();
          FUN_800f7270(0xab);
          FUN_800f8d00(0x3945);
          FUN_800f6630(0xae);
          *DAT_8019ed54 = *DAT_8019ed44;
          FUN_800f8d00(0x3947);
          FUN_8015254c();
          FUN_800f7210(0x3949);
          *DAT_8019ed40 = *DAT_8019ed5c;
          FUN_800f8188(0x38d5);
          FUN_800f971c();
          FUN_800f971c();
          *DAT_8019ed54 = *DAT_8019ed44;
          FUN_800f8d6c(0xa9);
          FUN_800f62bc(0xa9);
          FUN_800f62bc(0xaa);
          FUN_800f654c(99);
          FUN_80152224();
          uVar2 = FUN_800f3b04(0x38d4);
          FUN_800f54d4(uVar2);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) {
            FUN_800f62bc(0xa9);
          }
          FUN_801531cc();
          uVar2 = FUN_800f3b04(0x38d5);
          FUN_800f54d4(uVar2);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) {
            FUN_800f62bc(0xaa);
          }
          FUN_800f6630(0xa9);
          uVar2 = FUN_800f3c3c(0xaa);
          FUN_800f54d4(uVar2);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            iVar1 = FUN_800f53c0();
            if (iVar1 == 0) {
              FUN_800f654c(0x80);
              FUN_800f8188(0x38d7);
              FUN_800f8188(0x38d8);
              FUN_800f6564(0x38d5);
              FUN_800f7864();
              FUN_800f824c(0xa9);
              FUN_800f971c();
              *DAT_8019ed54 = *DAT_8019ed44;
              FUN_800f6564(0x38d4);
              FUN_80152224();
              uVar2 = FUN_800f3c3c(0xa9);
              FUN_800f54d4(uVar2);
              iVar1 = FUN_800f53c0();
              if (iVar1 == 0) {
                FUN_800f654c(8);
                FUN_800f8188(0x3581);
              }
            }
            else {
              FUN_800f6240(0x38d7);
              FUN_800f6240(0x38d8);
            }
          }
        }
      }
    }
  }
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f8d6c(199);
LAB_80154f50:
  FUN_800f6d70(0x3540);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(199);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 != 0) goto LAB_80155080;
    FUN_800f6b68(0x2000);
    FUN_800f4248(0x1f);
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) goto LAB_80155080;
    FUN_800f5574(0xb);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) goto LAB_80155078;
  }
  FUN_800f9644(0x20);
  *DAT_8019ed44 = *DAT_8019ed54;
  FUN_800f5410();
  FUN_800f4064(0x80);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f971c();
  FUN_800f9660(0x20);
  FUN_800f63bc();
  FUN_800f5a90(5);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f62bc(199);
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    *DAT_8019ed58 = *DAT_8019ed44;
  }
  goto LAB_80154f50;
LAB_80155078:
  FUN_800f8e50(0x355e);
LAB_80155080:
  FUN_800f6b68(0x2015);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d00(0x393d);
  FUN_800f71dc(0x32);
  FUN_800f8d00(0x393f);
  FUN_8015236c();
  FUN_800f7210(0x3941);
  FUN_800f8d6c(0xcb);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(199);
  FUN_800f8d6c(0xc9);
  do {
    FUN_800f7270(0xc9);
    FUN_800f6b68(0x3540);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f7270(199);
      FUN_800f6b68(0x2015);
      FUN_800f824c(0xdf);
      FUN_800f654c(10);
      FUN_800f824c(0xe1);
      FUN_8015240c();
      FUN_800f7270(0xcb);
      FUN_800f8d00(0x3945);
      FUN_800f7270(0xe3);
      FUN_800f8d00(0x3947);
      FUN_8015254c();
      FUN_800f7210(0x3949);
      iVar1 = FUN_800f7170(0x202);
      if (iVar1 == 0) {
        FUN_800f6240(0x3949);
      }
      FUN_800f7270(199);
      FUN_800f6564(0x3949);
      FUN_800f8768(0x2060);
      FUN_800f6564(0x394a);
      FUN_800f8768(0x2061);
    }
    FUN_800f9644(0x20);
    FUN_800f5410();
    FUN_800f6658(199);
    FUN_800f4064(0x80);
    FUN_800f8274(199);
    FUN_800f971c();
    FUN_800f9660(0x20);
    FUN_800f62bc(0xc9);
    FUN_800f6630(0xc9);
    FUN_800f5574(0xd);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(199);
  do {
    FUN_800f7270(199);
    FUN_800f6b68(0x3540);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      *DAT_8019ed40 = *DAT_8019ed5c;
      FUN_800f824c(0xdf);
      FUN_800f654c(0x80);
      FUN_800f824c(0xe1);
      FUN_8015240c();
      FUN_800f7270(0xe3);
      FUN_800f6b68(0x2003);
      iVar1 = FUN_800f6434(0x80);
      if (iVar1 == 0) {
        FUN_800f6630(199);
        FUN_800f5574(5);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_800f6564(0x3581);
          FUN_800f4248(8);
          iVar1 = FUN_800f4120(2);
          if (iVar1 == 0) {
            FUN_800f6b68(0x2001);
            FUN_800f9200();
            FUN_800f4248(0x7f);
            FUN_800f824c(0xa9);
            FUN_800f93dc();
            FUN_800f4248(0x80);
            *DAT_8019ed40 = *DAT_8019ed40 ^ 0x80;
            uVar2 = FUN_800f3c3c(0xa9);
            FUN_800f78c4(uVar2);
            FUN_800f8768(0x2001);
          }
        }
        FUN_800f8fb8(0xd6);
        FUN_800f7270(199);
        *DAT_8019ed40 = *DAT_8019ed5c;
        FUN_8015a374();
        FUN_800f6564(0x38d8);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          iVar1 = FUN_800f53fc();
          if (iVar1 == 0) {
            FUN_800f6630(199);
            FUN_800f5574(5);
            iVar1 = FUN_800f53c0();
            if (iVar1 == 0) {
LAB_80155460:
              FUN_800f654c(1);
              FUN_800f824c(0xd4);
              FUN_800f8fb8(0xd5);
              goto LAB_80155478;
            }
          }
          else {
            FUN_800f6630(199);
            FUN_800f5574(5);
            iVar1 = FUN_800f53c0();
            if (iVar1 != 0) goto LAB_80155460;
          }
          uVar2 = FUN_800f3c3c(0xd4);
          FUN_800f4f28(uVar2);
          FUN_800f4f4c();
          uVar2 = FUN_800f3c3c(0xd5);
          FUN_800f7a40(uVar2);
          FUN_800f6630(0xd4);
          uVar2 = FUN_800f3c3c(0xd5);
          FUN_800f78c4(uVar2);
          iVar1 = FUN_800f7918(0x202);
          if (iVar1 == 0) {
            FUN_800f61e8();
            FUN_800f61e8();
            FUN_800f824c(0xd4);
          }
        }
LAB_80155478:
        FUN_800f654c(3);
        FUN_80153374();
      }
    }
    FUN_800f62bc(199);
    FUN_800f6630(199);
    FUN_800f5574(0xd);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f9644(0x20);
      FUN_800f6558(0xffff);
      FUN_800f8274(0xa9);
      FUN_800f7500(0xd);
      FUN_800f971c();
      *DAT_8019ed54 = *DAT_8019ed44;
      do {
        FUN_800f6be0(0x2a07);
        iVar1 = FUN_800f64ec(2);
        if (iVar1 == 0) {
          uVar2 = FUN_800f3c3c(0xa9);
          FUN_800f5520(uVar2);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) {
            FUN_800f8274(0xa9);
          }
        }
        *DAT_8019ed44 = *DAT_8019ed54;
        FUN_800f5410();
        FUN_800f4064(0x15);
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f5ea0();
        iVar1 = FUN_800f5c64(0x202);
      } while (iVar1 != 0);
      FUN_800f5dd4(0xa9);
      *DAT_8019ed54 = *DAT_8019ed58;
      do {
        FUN_800f5480();
        FUN_800f6be0(0x2a07);
        iVar1 = FUN_800f64ec(2);
        if (iVar1 == 0) {
          uVar2 = FUN_800f3c3c(0xa9);
          FUN_800f7fcc(uVar2);
          FUN_800f87dc(0x2a07);
        }
        *DAT_8019ed44 = *DAT_8019ed54;
        FUN_800f5410();
        FUN_800f4064(0x15);
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f63bc();
        FUN_800f5a90(0xd);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      FUN_800f971c();
      FUN_800f9660(0x20);
      return;
    }
  } while( true );
}



