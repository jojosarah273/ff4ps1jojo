
void FUN_8011a690(void)

{
  int iVar1;
  
  FUN_800f6b68(0x9d6);
  FUN_800f5574(0xfb);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_80101230();
    FUN_800f8f74(0x1704);
    FUN_800f6b68(0x9d6);
    FUN_800f8188(0x1702);
    FUN_800f6b68(0x9d7);
    FUN_800f4248(0x3f);
    FUN_800f8188(0x1706);
    FUN_800f6b68(0x9d7);
    FUN_800f4248(0xc0);
    *DAT_8019ed40 = *DAT_8019ed40 >> 6;
    FUN_800f8188(0x1705);
    FUN_800f6b68(0x9d8);
    FUN_800f8188(0x1707);
    FUN_800f6b68(0x9d9);
    FUN_800f4248(0x20);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f654c(1);
      FUN_800f824c(0xca);
    }
    FUN_800f6b68(0x9d9);
    iVar1 = FUN_800f6434(0x80);
    if (iVar1 == 0) {
      FUN_800f654c(0);
    }
    else {
      FUN_800f654c(1);
    }
    FUN_800f8188(0x1701);
    FUN_800f654c(3);
  }
  else {
    FUN_800f5480();
    FUN_800f8058(0xfb);
    FUN_800f9200();
    FUN_800f6b68(0x9d7);
    FUN_800f8188(0x1706);
    FUN_800f6b68(0x9d8);
    FUN_800f8188(0x1707);
    FUN_800f6b68(0x9d9);
    FUN_800f4248(0x40);
    FUN_800f824c(0xe1);
    FUN_800f6b68(0x9d9);
    FUN_800f4248(0x20);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f654c(1);
      FUN_800f824c(0xca);
    }
    FUN_800f6b68(0x9d9);
    FUN_800f4248(0x1f);
    FUN_800f5ccc();
    iVar1 = FUN_800f5b8c(0x202);
    if (iVar1 == 0) {
      FUN_800f6564(0x172f);
      FUN_800f8188(0x1706);
      FUN_800f6564(0x1730);
      FUN_800f8188(0x1707);
    }
    FUN_800f71dc(0);
    FUN_800f8d00(0x172c);
    FUN_800f93dc();
  }
  FUN_8011ab18();
  FUN_800f6564(0x1700);
  FUN_800f5574(3);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f7270(0xb3);
    FUN_800f6b68(0x9d9);
    FUN_800f4248(0x1f);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f8f74(0x1704);
      FUN_800f8fb8(0xac);
      FUN_800f8fb8(0x7b);
    }
    else {
      FUN_800f5ccc();
      iVar1 = FUN_800f5b8c(0x202);
      if (iVar1 == 0) {
        FUN_800f654c(1);
        FUN_800f8188(0x170f);
        FUN_80102f38();
      }
      else {
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(0x202);
        if (iVar1 == 0) {
          FUN_800f654c(1);
          FUN_800f8188(0x1712);
          FUN_800f8f74(0x1715);
          FUN_80102f70();
        }
        else {
          FUN_800f5ccc();
          iVar1 = FUN_800f5b8c(0x202);
          if (iVar1 == 0) {
            FUN_800f654c(1);
            FUN_800f8188(0x1718);
            FUN_80103030();
          }
          else {
            FUN_800f5ccc();
            iVar1 = FUN_800f5b8c(0x202);
            if (iVar1 == 0) {
              FUN_800f654c(1);
              FUN_800f8188(0x171c);
              FUN_801031f0();
            }
            else {
              FUN_800f5ccc();
              iVar1 = FUN_800f5b8c(0x202);
              if (iVar1 == 0) {
                FUN_800f654c(1);
                FUN_800f8188(0x1720);
                FUN_801033e0();
              }
              else {
                FUN_800f5ccc();
                iVar1 = FUN_800f5b8c(0x202);
                if (iVar1 == 0) {
                  FUN_800f654c(1);
                  FUN_800f8188(0x1724);
                  FUN_801035b0();
                }
                else {
                  FUN_800f654c(1);
                  FUN_800f8188(0x1728);
                  FUN_800f7270(0xb3);
                  FUN_800f6b68(0x9d9);
                  FUN_800f4248(0x18);
                  *DAT_8019ed40 = *DAT_8019ed40 >> 3;
                  FUN_800f8188(0x1705);
                  FUN_80102ff8();
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_800f8fb8(0x79);
  FUN_800f8fb8(0x7a);
  FUN_800f8fb8(0x7b);
  FUN_800f654c(0x81);
  FUN_800f8188(0x4200);
  FUN_800fe7d8();
  FUN_800f5448();
  FUN_800f7270(0xb3);
  *DAT_8019ed54 = *DAT_8019ed54 + 4;
  FUN_800f8d6c(0xb3);
  FUN_8011ea5c();
  return;
}



