
void FUN_8011bd88(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6630(0xc9);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6564(0x1700);
    FUN_800f5574(3);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6564(0xfe4);
      FUN_800f4248(0xc0);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 != 0) {
        FUN_800f6564(0xfe4);
        FUN_800f4248(6);
        iVar1 = FUN_800f4120(0x202);
        if (iVar1 == 0) {
          FUN_800f6564(0xfe4);
          FUN_800f4248(0xc0);
          *DAT_8019ed40 = *DAT_8019ed40 >> 6;
          *DAT_8019ed58 = *DAT_8019ed44;
          FUN_800f6630(0x7a);
          *DAT_8019ed40 = *DAT_8019ed40 & (&DAT_801992ec)[*DAT_8019ed58];
          iVar1 = FUN_800f4120(0x202);
          if (iVar1 == 0) {
            FUN_800f6564(0xfe4);
            FUN_800f4248(0x30);
            *DAT_8019ed40 = *DAT_8019ed40 >> 3;
            *DAT_8019ed58 = *DAT_8019ed44;
            FUN_800f9644(0x20);
            FUN_800f6658(0x66);
            FUN_800f5410();
            FUN_800f4064(*(undefined2 *)(&DAT_801992f0 + *DAT_8019ed58));
            FUN_800f8274(0x66);
            FUN_800f6658(0x68);
            FUN_800f5410();
            FUN_800f4064(*(undefined2 *)(&DAT_801992f8 + *DAT_8019ed58));
            FUN_800f8274(0x68);
          }
          FUN_800f9644(0x20);
          FUN_800f6658(0x5a);
          FUN_800f5410();
          uVar2 = FUN_800f3c3c(0x66);
          FUN_800f3f94(uVar2);
          FUN_800f8274(0x5e);
          FUN_800f6658(0x5c);
          FUN_800f5410();
          uVar2 = FUN_800f3c3c(0x68);
          FUN_800f3f94(uVar2);
          FUN_800f8274(0x60);
          FUN_800f6558(0);
          FUN_800f9660(0x20);
        }
        else {
          FUN_800f6564(0xfe4);
          FUN_800f4248(4);
          iVar1 = FUN_800f4120(2);
          if (iVar1 == 0) {
            FUN_800f7270(0x5a);
            FUN_800f8d6c(0x5e);
            FUN_800f6564(0xfe4);
            FUN_800f4248(0xc0);
            FUN_800f5574(0x80);
            iVar1 = FUN_800f53d4();
            if (iVar1 == 0) {
              FUN_800f5574(0x40);
              iVar1 = FUN_800f53d4();
              if (iVar1 == 0) {
                uVar2 = FUN_800f3c3c(0x5e);
                FUN_800f4f28(uVar2);
                FUN_800f4f4c();
                uVar2 = FUN_800f3c3c(0x5f);
                FUN_800f7a40(uVar2);
              }
              else {
                uVar2 = FUN_800f3c3c(0x5f);
                FUN_800f76bc(uVar2);
                FUN_800f76e8();
                uVar2 = FUN_800f3c3c(0x5e);
                FUN_800f7cc8(uVar2);
              }
            }
            FUN_800f6564(0xfe4);
            FUN_800f4248(6);
            FUN_800f5574(4);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) {
              FUN_800f71dc(0);
              FUN_800f8d6c(0x60);
              return;
            }
          }
          FUN_800f6564(0xfe4);
          FUN_800f4248(2);
          iVar1 = FUN_800f4120(2);
          if (iVar1 == 0) {
            FUN_800f7270(0x5c);
            FUN_800f8d6c(0x60);
            FUN_800f6564(0xfe4);
            FUN_800f4248(0xc0);
            FUN_800f5574(0x80);
            iVar1 = FUN_800f53d4();
            if (iVar1 == 0) {
              FUN_800f5574(0x40);
              iVar1 = FUN_800f53d4();
              if (iVar1 == 0) {
                uVar2 = FUN_800f3c3c(0x60);
                FUN_800f4f28(uVar2);
                FUN_800f4f4c();
                uVar2 = FUN_800f3c3c(0x61);
                FUN_800f7a40(uVar2);
              }
              else {
                uVar2 = FUN_800f3c3c(0x61);
                FUN_800f76bc(uVar2);
                FUN_800f76e8();
                uVar2 = FUN_800f3c3c(0x60);
                FUN_800f7cc8(uVar2);
              }
            }
            FUN_800f6564(0xfe4);
            FUN_800f4248(6);
            FUN_800f5574(2);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) {
              FUN_800f71dc(0);
              FUN_800f8d6c(0x5e);
            }
          }
        }
      }
    }
  }
  return;
}



