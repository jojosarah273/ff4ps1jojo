
void FUN_80101788(void)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  
  FUN_800f6630(2);
  FUN_800f4248(0x80);
  iVar1 = FUN_800f4120(2);
  if (iVar1 != 0) {
    return;
  }
  FUN_800f6630(0x54);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    return;
  }
  FUN_800f62bc(0x54);
  FUN_800f654c(0x3d);
  FUN_8011b6b4();
  FUN_800f5574(0);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f654c(0x30);
    FUN_8011b6b4();
    FUN_800f5574(0);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) goto LAB_80101978;
  }
  FUN_800f6564(0x1704);
  FUN_800f5574(4);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) goto LAB_80101978;
  }
  FUN_800f6564(0x1700);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6564(0x1706);
    FUN_800f5574(0x69);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) goto LAB_80101978;
    FUN_800f5574(0x6c);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) goto LAB_80101978;
    FUN_800f6564(0x1707);
    FUN_800f5574(0xd3);
    iVar1 = FUN_800f53c0();
    uVar3 = 0xd6;
  }
  else {
    FUN_800f6564(0x1700);
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) goto LAB_80101978;
    FUN_800f6564(0x1706);
    FUN_800f5574(0x70);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) goto LAB_80101978;
    FUN_800f5574(0x73);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) goto LAB_80101978;
    FUN_800f6564(0x1707);
    FUN_800f5574(0xf);
    iVar1 = FUN_800f53c0();
    uVar3 = 0x12;
  }
  if (iVar1 != 0) {
    FUN_800f5574(uVar3);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f654c(1);
      FUN_800f824c(0xce);
      return;
    }
  }
LAB_80101978:
  FUN_800f6564(0x1704);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5574(2);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574(3);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f5574(4);
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) {
            FUN_80104354();
            return;
          }
          FUN_800f5574(5);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            FUN_800f5574(6);
            iVar1 = FUN_800f53d4();
            if (iVar1 == 0) {
              return;
            }
            FUN_80102494();
            return;
          }
          FUN_800f654c(0x30);
          FUN_800f824c(0x79);
          FUN_800f8fb8(0x7a);
          do {
            while( true ) {
              FUN_80102e78();
              FUN_800f6630(0x79);
              FUN_800f5574(0x21);
              iVar1 = FUN_800f53c0();
              if (iVar1 == 0) break;
              FUN_800f5da0(0xb8);
              FUN_800f6630(0xb8);
              FUN_800f5410();
              FUN_800f4008(0x10);
              FUN_800f824c(0xad);
              FUN_800f6630(0xb8);
              FUN_8017559c();
              FUN_800f5da0(0x79);
            }
            FUN_800f6630(0xa2);
            FUN_800f4248(0x10);
            iVar1 = FUN_800f4120(0x202);
            if (iVar1 == 0) {
LAB_80101bf0:
              FUN_801034e0();
              return;
            }
            FUN_800f7210(0x1719);
            uVar3 = FUN_800f3b04(0x1706);
            FUN_800f56ac(uVar3);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) goto LAB_80101bf0;
            FUN_800f6564(0x171f);
            uVar3 = FUN_800f3b04(0x1723);
            FUN_800f54d4(uVar3);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) {
              FUN_800f7210(0x171d);
              uVar3 = FUN_800f3b04(0x1706);
              FUN_800f56ac(uVar3);
              iVar1 = FUN_800f53d4();
              if (iVar1 != 0) goto LAB_80101bf0;
            }
            FUN_800f6564(0x1727);
            uVar3 = FUN_800f3b04(0x1723);
            FUN_800f54d4(uVar3);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) {
              FUN_800f7210(0x1725);
              uVar3 = FUN_800f3b04(0x1706);
              FUN_800f56ac(uVar3);
              iVar1 = FUN_800f53d4();
              if (iVar1 != 0) goto LAB_80101bf0;
            }
            FUN_800f6630(0x79);
            FUN_800f7864();
            FUN_800f8188(0x6fd);
            FUN_800f5da0(0x79);
            FUN_800f5da0(0x79);
            iVar1 = FUN_800f5b8c(0x202);
          } while (iVar1 != 0);
          FUN_800f8f74(0x1704);
          FUN_800f8fb8(0xac);
          FUN_800f8fb8(0x7b);
          FUN_800f654c(2);
          FUN_800f8188(0x1705);
          FUN_800f7210(0x1706);
          FUN_800f8d00(0x1721);
          FUN_800f6564(0x1701);
          FUN_800f8188(0x1723);
        }
        else {
          FUN_800f6630(0xa1);
          FUN_800f4248(1);
          iVar1 = FUN_800f4120(0x202);
          if (iVar1 == 0) {
            return;
          }
          FUN_800f8fb8(0x79);
          do {
            FUN_80102ed8();
            FUN_800f5da0(0xb6);
            FUN_800f62bc(0x79);
            FUN_800f6630(0x79);
            FUN_800f5574(4);
            iVar1 = FUN_800f53d4();
          } while (iVar1 == 0);
          FUN_800f8f74(0x1704);
          FUN_800f8fb8(0xac);
          FUN_800f8fb8(0x7b);
          FUN_800f654c(2);
          FUN_800f8188(0x1705);
          FUN_800f6564(0x1701);
          FUN_800f8188(0x171b);
          FUN_800f7210(0x1706);
          FUN_800f8d00(0x1719);
        }
      }
      else {
        FUN_800f8fb8(0x79);
        do {
          FUN_80102e78();
          FUN_800f5da0(0xb5);
          FUN_800f62bc(0x79);
          FUN_800f6630(0x79);
          FUN_800f5574(0x10);
          iVar1 = FUN_800f53d4();
        } while (iVar1 == 0);
        FUN_800f6630(0xa1);
        FUN_800f4248(8);
        iVar1 = FUN_800f4120(0x202);
        if (iVar1 == 0) {
          FUN_80102414();
          return;
        }
        FUN_800f8f74(0x1704);
        FUN_800f8fb8(0xac);
        FUN_800f8fb8(0x7b);
        FUN_800f654c(2);
        FUN_800f8188(0x1705);
        FUN_800f7210(0x1706);
        FUN_800f8d00(0x1713);
        FUN_800f6564(0x1715);
        FUN_800f5574(2);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f8f74(0x1715);
          FUN_800f8f74(0x1712);
        }
      }
      FUN_800fd718();
      FUN_800f6240(0x1a02);
    }
    else {
      FUN_800f6630(0xa1);
      FUN_800f4248(1);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 != 0) {
        FUN_800fd6b8();
        FUN_800f654c(2);
        FUN_800f8188(0x170f);
        FUN_800f654c(0x70);
        FUN_800f8188(0x1710);
        FUN_800f8188(0x1711);
        FUN_800f654c(1);
        FUN_800f8188(0x1705);
        FUN_800f654c(2);
        FUN_800f824c(0x2c);
        FUN_8010d9d4();
        FUN_800f7864();
        iVar1 = FUN_800f7728(0x101);
        if (iVar1 == 0) {
          FUN_800f654c(3);
          FUN_800f8188(0x1705);
          FUN_800f6630(0x2c);
          *DAT_8019ed40 = ~*DAT_8019ed40;
          FUN_800f61e8();
          FUN_800f824c(0x2c);
        }
        FUN_800f654c(2);
        FUN_800f824c(0x2e);
        FUN_8010d9d4();
        FUN_800f7864();
        iVar1 = FUN_800f7728(0x101);
        if (iVar1 == 0) {
          FUN_800f6630(0x2e);
          *DAT_8019ed40 = ~*DAT_8019ed40;
          FUN_800f61e8();
          FUN_800f824c(0x2e);
        }
        FUN_800f8f74(0x1704);
        while( true ) {
          FUN_800fe778();
          FUN_8010d9d4();
          FUN_800f5574(0x10);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) {
            FUN_800f6630(0x2e);
            *DAT_8019ed40 = ~*DAT_8019ed40;
            FUN_800f61e8();
            FUN_800f824c(0x2e);
          }
          FUN_800f6564(0x1710);
          FUN_800f5410();
          uVar3 = FUN_800f3c3c(0x2c);
          FUN_800f3f38(uVar3);
          FUN_800f8188(0x1710);
          *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
          bVar2 = *DAT_8019ed68;
          if (*DAT_8019ed50 == '\0') {
            bVar2 = bVar2 | 2;
          }
          *DAT_8019ed68 = bVar2;
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) break;
          FUN_800f5574(0xf0);
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) break;
          FUN_800f6564(0x1711);
          FUN_800f5410();
          uVar3 = FUN_800f3c3c(0x2e);
          FUN_800f3f38(uVar3);
          FUN_800f8188(0x1711);
          *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
          bVar2 = *DAT_8019ed68;
          if (*DAT_8019ed50 == '\0') {
            bVar2 = bVar2 | 2;
          }
          *DAT_8019ed68 = bVar2;
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) break;
          FUN_800f5574(0xf0);
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) break;
          FUN_800f654c(1);
          FUN_800f8188(0x1704);
          FUN_80171608();
          FUN_800f8f74(0x1704);
          FUN_80171194();
        }
        FUN_800fe778();
        FUN_800fe870();
        FUN_800f8f74(0x1704);
        FUN_800f8f74(0x170f);
        FUN_800ff024();
        FUN_800fe778();
        FUN_800f8fb8(0xac);
        FUN_800f8fb8(0x7b);
        FUN_800f6240(0x1a02);
        FUN_800fd718();
      }
    }
  }
  else {
    FUN_800f8f74(0x1a02);
    FUN_800f6630(0xab);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) {
      FUN_800f6564(0x1701);
      FUN_800f5574(0);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f6564(0x170f);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f7210(0x1706);
          uVar3 = FUN_800f3b04(0x1710);
          FUN_800f56ac(uVar3);
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) {
            FUN_80102f38();
            return;
          }
        }
      }
      FUN_800f6564(0x1701);
      FUN_800f5574(0);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f6564(0x1712);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f7210(0x1706);
          uVar3 = FUN_800f3b04(0x1713);
          FUN_800f56ac(uVar3);
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) {
            FUN_80102f70();
            return;
          }
        }
      }
      FUN_800f6564(0x1701);
      uVar3 = FUN_800f3b04(0x171b);
      FUN_800f54d4(uVar3);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f6564(0x1718);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f7210(0x1706);
          uVar3 = FUN_800f3b04(0x1719);
          FUN_800f56ac(uVar3);
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) {
            FUN_80103030();
            return;
          }
        }
      }
      FUN_800f6564(0x1701);
      uVar3 = FUN_800f3b04(0x171f);
      FUN_800f54d4(uVar3);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f6564(0x171c);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f7210(0x1706);
          uVar3 = FUN_800f3b04(0x171d);
          FUN_800f56ac(uVar3);
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) {
            FUN_801031f0();
            return;
          }
        }
      }
      FUN_800f6564(0x1701);
      uVar3 = FUN_800f3b04(0x1723);
      FUN_800f54d4(uVar3);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f6564(0x1720);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f7210(0x1706);
          uVar3 = FUN_800f3b04(0x1721);
          FUN_800f56ac(uVar3);
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) {
            FUN_801033e0();
            return;
          }
        }
      }
      FUN_800f6564(0x1701);
      uVar3 = FUN_800f3b04(0x1727);
      FUN_800f54d4(uVar3);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f6564(0x1724);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f7210(0x1706);
          uVar3 = FUN_800f3b04(0x1725);
          FUN_800f56ac(uVar3);
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) {
            FUN_800f654c(0xe);
            FUN_800f8188(0x1e01);
            FUN_800f654c(1);
            FUN_800f8188(0x1e00);
            FUN_80169128();
            FUN_800f654c(0x54);
            FUN_8011aeac();
          }
        }
      }
    }
  }
  return;
}



