
void FUN_8015b078(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f8fb8(0xa9);
  FUN_800f8fb8(0xaa);
  FUN_800f6564(0x1822);
  FUN_80152cdc();
  FUN_800f7270(0xa6);
  FUN_800f6b68(0x2001);
  FUN_800f4248(0xf);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f63bc();
  FUN_800f5480();
  do {
    uVar1 = FUN_800f3c3c(0xa9);
    FUN_800f7a40(uVar1);
    FUN_800f7a68();
    uVar1 = FUN_800f3c3c(0xaa);
    FUN_800f7a40(uVar1);
    FUN_800f7a68();
    FUN_800f5ea0();
    iVar2 = FUN_800f5c64(0x202);
  } while (iVar2 != 0);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(0xaf);
  do {
    FUN_800f7270(0xaf);
    FUN_800f6b68(0x321b);
    iVar2 = FUN_800f6434(2);
    if (iVar2 == 0) {
      FUN_800f5574(200);
      iVar2 = FUN_800f53d4();
      if (iVar2 == 0) {
LAB_8015b1c4:
        FUN_8015b284();
        FUN_800f6564(0x353d);
        iVar2 = FUN_800f6434(2);
        if (iVar2 != 0) {
LAB_8015b21c:
          FUN_800f7270(0xaf);
          FUN_800f6b68(0x321a);
          FUN_800f4248(0x7f);
          FUN_800f8768(0x321a);
          goto LAB_8015b23c;
        }
      }
      else {
        FUN_800f7270(0xa6);
        FUN_800f6b68(0x2000);
        FUN_800f4248(0x1f);
        FUN_800f5574(0xb);
        iVar2 = FUN_800f53d4();
        if (iVar2 != 0) {
          iVar2 = FUN_800f53d4();
          if (iVar2 == 0) goto LAB_8015b1c4;
          goto LAB_8015b21c;
        }
      }
      FUN_800f7270(0xaf);
      FUN_800f6b68(0x321a);
      *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
      FUN_800f8768(0x321a);
    }
LAB_8015b23c:
    FUN_800f5410();
    FUN_800f6630(0xaf);
    FUN_800f4008(4);
    FUN_800f824c(0xaf);
    FUN_800f5574(0xc0);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) {
      return;
    }
  } while( true );
}



