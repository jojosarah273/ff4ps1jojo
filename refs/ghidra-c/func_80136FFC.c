
void FUN_80136ffc(void)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  
  FUN_800f654c(0x30);
  FUN_800f824c(0x3f);
  FUN_800f6564(0x1b94);
  FUN_800f5410();
  uVar1 = FUN_800f3b04(0x1b96);
  FUN_800f3f38(uVar1);
  *DAT_8019ed40 = *DAT_8019ed40 << 1;
  FUN_800f5140();
  FUN_800f4f4c();
  uVar1 = FUN_800f3b04(0x1b95);
  FUN_800f3f38(uVar1);
  uVar1 = FUN_800f3b04(0x1b95);
  FUN_800f3f38(uVar1);
  FUN_801224d0();
  FUN_800f8d00(0x1b98);
  FUN_800f6b68(0x1440);
  FUN_800f5574(0x19);
  iVar2 = FUN_800f53d4();
  if (iVar2 == 0) {
    FUN_800f5574(200);
    iVar2 = FUN_800f53d4();
    if (iVar2 == 0) {
      FUN_800f5574(0xee);
      iVar2 = FUN_800f53c0();
      if (iVar2 == 0) {
        FUN_800f9330();
        FUN_8012102c();
        FUN_800f7500(DAT_80199212);
        FUN_8011fb74();
        FUN_800f95a0();
        FUN_800f6b68(0x1440);
        iVar2 = FUN_800f6434(0x202);
        if (iVar2 != 0) {
          FUN_800f824c(0x5d);
          FUN_800f824c(0x43);
          FUN_800f6b68(0x1441);
          FUN_800f824c(0x5e);
          FUN_800f7270(0x43);
          FUN_800f6c68(0xfa450);
          iVar2 = FUN_800f6434(0x80);
          if (iVar2 == 0) {
            FUN_800f824c(0x43);
            FUN_800f9644(0x20);
            FUN_800f6658(0x43);
            *DAT_8019ed44 = *DAT_8019ed44 << 1;
            FUN_800f516c();
            FUN_800f5050();
            uVar1 = FUN_800f3c3c(0x43);
            FUN_800f3f94(uVar1);
            FUN_800f8274(0x5a);
            FUN_800f9660(0x20);
          }
          else {
            FUN_800f5140();
            DAT_800d4216 = (ushort)*DAT_8019ed40 * 0xfa;
            FUN_800f9330();
            FUN_800f95a0();
            FUN_800f9644(0x20);
            FUN_800f65f0(0x4216);
            FUN_800f8274(0x5a);
            FUN_800f9660(0x20);
          }
          FUN_800f6630(0x5d);
          FUN_800f5574(0xd4);
          iVar2 = FUN_800f53c0();
          if (iVar2 == 0) {
            FUN_800f5574(0xd1);
            iVar2 = FUN_800f53c0();
            if (iVar2 != 0) {
              FUN_800f654c(1);
              FUN_800f824c(0x5a);
              FUN_800f8fb8(0x5b);
            }
          }
          FUN_800f6564(0x1b7a);
          iVar2 = FUN_800f6434(2);
          if (iVar2 == 0) {
            FUN_800f6564(0x1b7c);
            FUN_800f5ccc();
          }
          FUN_800f61e8();
          uVar1 = FUN_800f3c3c(0x5e);
          FUN_800f54d4(uVar1);
          iVar2 = FUN_800f53c0();
          if (iVar2 != 0) {
            FUN_800f6630(0x5e);
          }
          FUN_800f824c(0x60);
          FUN_800f8188(0x1b97);
          FUN_800f8fb8(0x61);
          FUN_800f8fb8(0x37);
          FUN_800f8fb8(0x38);
          FUN_800f8fb8(0x39);
          FUN_800f8fb8(0x3a);
          FUN_800f7500(0x396);
          FUN_801206dc();
          FUN_800f9644(0x20);
          FUN_800f6558(0);
          do {
            FUN_800f5410();
            uVar1 = FUN_800f3c3c(0x5a);
            FUN_800f3f94(uVar1);
            *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
            bVar3 = *DAT_8019ed68;
            if (*DAT_8019ed50 == 0) {
              bVar3 = bVar3 | 2;
            }
            *DAT_8019ed68 = bVar3;
            iVar2 = FUN_800f53c0();
            if (iVar2 != 0) {
              FUN_800f62f0(0x39);
            }
            FUN_800f5dd4(0x60);
            iVar2 = FUN_800f5c64(0x202);
          } while (iVar2 != 0);
          FUN_800f8274(0x37);
          FUN_800f6658(0x39);
          FUN_800f7270(0x37);
          FUN_800f7500(0x412);
          FUN_800f9660(0x20);
          FUN_80124d08();
          FUN_800f8fb8(0xdb);
          FUN_800f6630(0x5d);
          FUN_800f7500(0x2d4);
          FUN_80125100();
          FUN_800f6564(0x1b95);
          iVar2 = FUN_800f6434(0x202);
          if (iVar2 == 0) {
            FUN_800f7500(0x31c);
            FUN_801376b0();
          }
          FUN_800f8fb8(0x48);
          FUN_800f6630(0x48);
          FUN_800f61e8();
          FUN_800f4248(1);
          FUN_800f824c(0x48);
          FUN_80120b6c();
          FUN_800f654c(0x30);
          FUN_800f824c(0x3f);
          while( true ) {
            FUN_800f654c(0xb0);
            FUN_800f824c(0x46);
            FUN_800f6630(0x48);
            iVar2 = FUN_800f6434(0x202);
            if (iVar2 == 0) {
              FUN_800f654c(0x50);
            }
            else {
              FUN_800f654c(0x78);
            }
            FUN_800f824c(0x45);
            FUN_8011f6d4();
            FUN_8011f684();
            FUN_8011f884();
            FUN_800f6630(1);
            FUN_800f4248(0x80);
            iVar2 = FUN_800f4120(2);
            if (iVar2 == 0) goto LAB_80137530;
            FUN_800f6630(0);
            FUN_800f4248(0x80);
            iVar2 = FUN_800f4120(2);
            if (iVar2 == 0) break;
            FUN_800f6630(1);
            FUN_800f4248(3);
            iVar2 = FUN_800f4120(2);
            if (iVar2 == 0) {
              FUN_800f6630(0x48);
              FUN_800f61e8();
              FUN_800f4248(1);
              FUN_800f824c(0x48);
            }
          }
          FUN_800f6630(0x48);
          iVar2 = FUN_800f6434(2);
          if (iVar2 != 0) {
            FUN_800f9644(0x20);
            FUN_800f658c(0x16a0);
            FUN_800f5410();
            uVar1 = FUN_800f3c3c(0x37);
            FUN_800f3f94(uVar1);
            FUN_800f81b0(0x16a0);
            FUN_800f9660(0x20);
            FUN_800f6564(0x16a2);
            uVar1 = FUN_800f3c3c(0x39);
            FUN_800f3f38(uVar1);
            FUN_800f8188(0x16a2);
            FUN_800f5574(0x98);
            iVar2 = FUN_800f53c0();
            if (iVar2 != 0) {
              FUN_800f71dc(0x967f);
              uVar1 = FUN_800f3b04(0x16a0);
              FUN_800f56ac(uVar1);
              iVar2 = FUN_800f53c0();
              if (iVar2 == 0) {
                FUN_800f8d00(0x16a0);
                FUN_800f654c(0x98);
                FUN_800f8188(0x16a2);
              }
            }
            FUN_800f7210(0x1b98);
            FUN_800f6b68(0x1441);
            FUN_800f5480();
            uVar1 = FUN_800f3b04(0x1b97);
            FUN_800f7f48(uVar1);
            FUN_800f8768(0x1441);
            iVar2 = FUN_800f53d4();
            if (iVar2 != 0) {
              FUN_800f8768(0x1440);
            }
            FUN_801263c8();
            FUN_800f5480();
            return;
          }
LAB_80137530:
          FUN_801263c8();
        }
      }
    }
  }
  FUN_800f5410();
  return;
}



