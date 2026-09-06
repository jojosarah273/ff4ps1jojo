
void FUN_800fccdc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6564(0x1704);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(0xa2);
    FUN_800f4248(0x40);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6630(0xc0);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f6630(0xab);
        iVar1 = FUN_800f6434(2);
        if (iVar1 != 0) goto LAB_800fcd64;
        FUN_800f6630(0xd5);
        iVar1 = FUN_800f6434(2);
        if (iVar1 != 0) goto LAB_800fcd64;
      }
      FUN_800f62bc(0x88);
      FUN_800f62bc(0x86);
      iVar1 = FUN_800f60a8(0x202);
      if (iVar1 == 0) {
        FUN_800f6564(0x17ef);
        FUN_800f5410();
        FUN_800f4008(0x11);
        FUN_800f8188(0x17ef);
      }
      FUN_800f6564(0x1700);
      FUN_800f5574(0);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574(1);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f5574(2);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            FUN_800f6564(0x1702);
            FUN_800f824c(0x3d);
            FUN_800f6564(0x1701);
            iVar1 = FUN_800f6434(2);
            if (iVar1 == 0) {
              FUN_800f654c(1);
            }
            FUN_800f824c(0x3e);
            FUN_800f7270(0x3d);
            FUN_800f6c68(0xec342);
            iVar1 = FUN_800f6434(2);
            if (iVar1 == 0) {
              FUN_800f824c(6);
              FUN_800f6630(0xc0);
              iVar1 = FUN_800f6434(0x202);
              if (iVar1 == 0) {
                FUN_800f6630(0x86);
                FUN_800f9690();
                FUN_800f6c68(0x14ee00);
                FUN_800f5410();
                uVar2 = FUN_800f3b04(0x17ef);
                FUN_800f3f38(uVar2);
                uVar2 = FUN_800f3c3c(6);
                FUN_800f54d4(uVar2);
                iVar1 = FUN_800f53c0();
                if (iVar1 != 0) goto LAB_800fd2c4;
              }
              FUN_800f7270(0x3d);
              FUN_800f6c68(0xec596);
              FUN_800fd494();
              FUN_800f7270(0x3d);
              FUN_800f6c68(0xec816);
              FUN_800f8188(0x1800);
              FUN_800fd37c();
              FUN_800f8fb8(0xc0);
              FUN_800f654c(1);
              FUN_800f824c(0x85);
              FUN_800f8fb8(0x88);
              return;
            }
LAB_800fd2c4:
            FUN_800f6630(0xc0);
            iVar1 = FUN_800f6434(2);
            if (iVar1 != 0) {
              return;
            }
            FUN_800f8fb8(0xc0);
            FUN_800f654c(2);
            FUN_800f8188(0x1e00);
            FUN_800f8f74(0x1e01);
            FUN_80169128();
            return;
          }
          FUN_800f6630(0xc0);
          iVar1 = FUN_800f6434(0x202);
          if (iVar1 == 0) {
            FUN_800f6630(0x86);
            FUN_800f9690();
            FUN_800f6c68(0x14ee00);
            FUN_800f5410();
            uVar2 = FUN_800f3b04(0x17ef);
            FUN_800f3f38(uVar2);
            uVar2 = FUN_800f3b9c(0xec341,0);
            FUN_800f54d4(uVar2);
            iVar1 = FUN_800f53c0();
            if (iVar1 != 0) {
              return;
            }
          }
          FUN_800f8fb8(6);
          FUN_800f6564(0x1707);
          FUN_800f5574(0x20);
          iVar1 = FUN_800f53c0();
          if (iVar1 != 0) {
            FUN_800f654c(2);
            FUN_800f824c(6);
          }
          FUN_800f6564(0x1706);
          FUN_800f5574(0x20);
          iVar1 = FUN_800f53c0();
          if (iVar1 != 0) {
            FUN_800f62bc(6);
          }
          FUN_800f6630(6);
          FUN_800f9690();
          FUN_800f6c68(0xec592);
        }
        else {
          FUN_800f6630(0xc0);
          iVar1 = FUN_800f6434(0x202);
          if (iVar1 == 0) {
            FUN_800f6630(0x86);
            FUN_800f9690();
            FUN_800f6c68(0x14ee00);
            FUN_800f5410();
            uVar2 = FUN_800f3b04(0x17ef);
            FUN_800f3f38(uVar2);
            uVar2 = FUN_800f3b9c(0xec340,0);
            FUN_800f54d4(uVar2);
            iVar1 = FUN_800f53c0();
            if (iVar1 != 0) {
              return;
            }
          }
          FUN_800f6564(0x1707);
          *DAT_8019ed40 = *DAT_8019ed40 >> 3;
          FUN_800f4248(0xfc);
          FUN_800f824c(6);
          FUN_800f6564(0x1706);
          *DAT_8019ed40 = *DAT_8019ed40 >> 5;
          FUN_800f5410();
          uVar2 = FUN_800f3c3c(6);
          FUN_800f3f38(uVar2);
          FUN_800f9690();
          FUN_800f6c68(0xec582);
        }
      }
      else {
        FUN_800f6564(0x1707);
        *DAT_8019ed40 = *DAT_8019ed40 >> 2;
        FUN_800f4248(0xf8);
        FUN_800f824c(6);
        FUN_800f6564(0x1706);
        *DAT_8019ed40 = *DAT_8019ed40 >> 5;
        FUN_800f5410();
        uVar2 = FUN_800f3c3c(6);
        FUN_800f3f38(uVar2);
        FUN_800f9690();
        FUN_800f6c68(0xec300);
        FUN_800f824c(6);
        FUN_800f9330();
        FUN_800f960c();
        FUN_800f6630(0xc0);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 == 0) {
          FUN_800f6630(0x86);
          FUN_800f9690();
          FUN_800f6c68(0x14ee00);
          FUN_800f5410();
          uVar2 = FUN_800f3b04(0x17ef);
          FUN_800f3f38(uVar2);
          uVar2 = FUN_800f3c3c(6);
          FUN_800f54d4(uVar2);
          iVar1 = FUN_800f53c0();
          if (iVar1 != 0) {
            return;
          }
        }
        FUN_800f939c();
        FUN_800f95a0();
        FUN_800f6c68(0xec542);
      }
      FUN_800fd494();
      FUN_800f8fb8(0x3e);
      FUN_800f7270(0x3d);
      FUN_800f6c68(0xec796);
      FUN_800f8188(0x1800);
      FUN_800f6564(0x1701);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f654c(1);
      }
      FUN_800f8188(0x1801);
      FUN_800f6630(0xa2);
      FUN_800f4248(7);
      FUN_800f96e0();
      *DAT_8019ed40 = (&DAT_80198a80)[*DAT_8019ed58];
      FUN_800f8188(0x1802);
      FUN_800f8fb8(0xc0);
      FUN_800f654c(1);
      FUN_800f824c(0x85);
      return;
    }
  }
LAB_800fcd64:
  FUN_800f6630(0xc0);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f8fb8(0xc0);
    FUN_800f654c(2);
    FUN_800f8188(0x1e00);
    FUN_800f654c(1);
    FUN_800f8188(0x1e01);
    FUN_80169128();
  }
  return;
}



