
void FUN_8012a8a8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f8fb8(0x5d);
  FUN_800f8fb8(0x5e);
  do {
    FUN_800f6e30(0x5a);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f5574(0xff);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f7500(1);
        FUN_800f66d8(0x5a);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f824c(0x5c);
          FUN_800f654c(0);
          FUN_800f3d48();
          FUN_800f6e30(0x5a);
          FUN_800f5574(0xed);
          iVar1 = FUN_800f53d4();
          if (iVar1 == 0) {
            FUN_800f5574(0xfe);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) goto LAB_8012a970;
LAB_8012a9a0:
            FUN_800f6e30(0x5a);
            FUN_8012ae00();
          }
          else {
LAB_8012a970:
            FUN_800f6564(0x1bc9);
            iVar1 = FUN_800f6434(2);
            if (iVar1 != 0) goto LAB_8012a9a0;
            FUN_800f6630(0x34);
            FUN_800f824c(0xdb);
          }
          FUN_800f9644(0x20);
          FUN_800f6658(0x5d);
          FUN_800f7894();
          *DAT_8019ed44 = *DAT_8019ed44 << 6;
          FUN_800f516c();
          FUN_800f5050();
          FUN_800f4064(4);
          *DAT_8019ed58 = *DAT_8019ed44;
          FUN_800f9660(0x20);
          FUN_8012ab18();
        }
      }
      else {
        FUN_8012cb34();
      }
    }
    FUN_800f9644(0x20);
    FUN_800f62f0(0x5a);
    FUN_800f62f0(0x5a);
    FUN_800f9660(0x20);
    FUN_800f62bc(0x5d);
    FUN_800f6630(0x5d);
    uVar2 = FUN_800f3c3c(0xe1);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
  } while( true );
}



