
void FUN_80110cfc(void)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  FUN_80110f2c();
  FUN_800f654c(1);
  FUN_800f81e8(0x6c8);
  FUN_800f71dc(0);
  do {
    FUN_800f6b68(0xebb);
    FUN_800f8768(0xa6d);
    FUN_800f6364();
    FUN_800f5958(0x10);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f8fb8(0x26);
  do {
    FUN_80110fa4();
    FUN_800f654c(0x20);
    FUN_800f824c(0xb9);
    FUN_80173780();
    FUN_800f6630(0x7a);
    FUN_800f7864();
    iVar1 = FUN_800f7728(0x101);
    if (iVar1 == 0) {
      FUN_800f62bc(0x26);
    }
    FUN_800f6630(0x26);
    iVar1 = FUN_800f6434(0x80);
    if (iVar1 == 0) {
      FUN_800f5140();
      FUN_800f824c(0x22);
      FUN_800f6630(0x24);
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0x22);
      FUN_800f3f38(uVar2);
      FUN_800f824c(0x24);
      *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
      bVar3 = *DAT_8019ed68;
      if (*DAT_8019ed50 == '\0') {
        bVar3 = bVar3 | 2;
      }
      *DAT_8019ed68 = bVar3;
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) goto LAB_80110e54;
      FUN_80110bc8();
    }
    else {
LAB_80110e54:
      FUN_800f4248(0xf1);
      FUN_800f5574(0x80);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f654c(1);
        FUN_800f824c(0xc4);
      }
      FUN_800f71dc(0);
      do {
        FUN_800f6b68(0xa6d);
        FUN_800f8768(0xebb);
        FUN_800f6364();
        FUN_800f5958(0x10);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
    }
    FUN_800f6630(0x26);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f8fb8(200);
      FUN_800f654c(1);
      FUN_800f8188(0x1724);
      FUN_800f8f74(0x1727);
      FUN_800f8fb8(0xb9);
      FUN_800f71dc(0xc796);
      FUN_800f8d00(0x1725);
      FUN_8011ea5c();
      return;
    }
  } while( true );
}



