
void FUN_8011c768(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  
  FUN_800f6630(0xab);
  iVar5 = FUN_800f6434(0x202);
  if (iVar5 != 0) {
    FUN_800f4248(1);
    iVar5 = FUN_800f4120(2);
    if (iVar5 == 0) {
      FUN_800f6630(0xab);
      FUN_800f4248(2);
      iVar5 = FUN_800f4120(0x202);
      if (iVar5 == 0) {
        FUN_800f6564(0x1707);
        FUN_800f5480();
        FUN_800f8058(8);
        FUN_800f4248(0x3f);
        FUN_800f824c(0x3e);
      }
      else {
        FUN_800f6564(0x1707);
        FUN_800f5410();
        FUN_800f4008(8);
        FUN_800f4248(0x3f);
        FUN_800f824c(0x3e);
      }
      FUN_800f6564(0x1706);
      FUN_800f5480();
      FUN_800f8058(7);
      FUN_800f824c(0x3d);
      FUN_800f7270(0x3d);
      FUN_800f8d6c(0x43);
      FUN_8011cc98();
      FUN_8011ce18();
    }
    else {
      FUN_800f6630(0xab);
      FUN_800f4248(2);
      iVar5 = FUN_800f4120(2);
      if (iVar5 == 0) {
        FUN_800f6564(0x1706);
        FUN_800f5410();
        FUN_800f4008(9);
        FUN_800f824c(0x3d);
      }
      else {
        FUN_800f6564(0x1706);
        FUN_800f5480();
        FUN_800f8058(8);
        FUN_800f824c(0x3d);
      }
      FUN_800f6564(0x1707);
      FUN_800f5480();
      FUN_800f8058(7);
      FUN_800f4248(0x3f);
      FUN_800f824c(0x3e);
      FUN_800f7270(0x3d);
      FUN_800f8d6c(0x43);
      FUN_800f7500(0);
      do {
        FUN_800f7270(0x3d);
        FUN_800f6c68(0x7f5c71);
        FUN_800f824c(0x18);
        FUN_800f8fb8(0x19);
        FUN_800f9644(0x20);
        uVar6 = FUN_800f3c3c(0x18);
        FUN_800f5024(uVar6);
        FUN_800f7270(0x18);
        FUN_800f6cf4(0x7f4800);
        uVar1 = *DAT_8019ed44;
        uVar2 = *DAT_8019ed54;
        FUN_800f6cf4(0x7f4900);
        uVar3 = *DAT_8019ed44;
        FUN_800f6cf4(0x7f4a00);
        uVar4 = *DAT_8019ed44;
        FUN_800f6cf4(0x7f4b00);
        *DAT_8019ed44 =
             uVar1 & 0x2000 | uVar2 >> 1 | (ushort)((uVar3 & 0x2000) >> 1) |
             (ushort)((uVar4 & 0x2000) >> 2) | (ushort)((*DAT_8019ed44 & 0x2000) >> 3);
        FUN_800f89d4(0xadb);
        FUN_800f89d4(0xadd);
        FUN_800f89d4(0xb1b);
        FUN_800f89d4(0xb1d);
        FUN_800f6558(0);
        FUN_800f9660(0x20);
        FUN_800f6630(0x3e);
        FUN_800f61e8();
        FUN_800f4248(0x3f);
        FUN_800f824c(0x3e);
        *DAT_8019ed58 = *DAT_8019ed58 + 4;
        FUN_800f5a90(0x40);
        iVar5 = FUN_800f53d4();
      } while (iVar5 == 0);
      FUN_800f8fb8(0x99);
      FUN_800f6630(0x44);
      FUN_800f4248(0xf);
      FUN_800f824c(0x9a);
      uVar6 = FUN_800f3c3c(0x9a);
      FUN_800f76bc(uVar6);
      FUN_800f76e8();
      uVar6 = FUN_800f3c3c(0x99);
      FUN_800f7cc8(uVar6);
      uVar6 = FUN_800f3c3c(0x9a);
      FUN_800f76bc(uVar6);
      FUN_800f76e8();
      uVar6 = FUN_800f3c3c(0x99);
      FUN_800f7cc8(uVar6);
      FUN_800f6630(0x43);
      FUN_800f4248(0x1f);
      FUN_800f5140();
      FUN_800f824c(0x43);
      FUN_800f4248(0x20);
      iVar5 = FUN_800f4120(2);
      if (iVar5 == 0) {
        FUN_800f6630(0x9a);
        FUN_800f5410();
        FUN_800f4008(4);
        FUN_800f824c(0x9a);
      }
      FUN_800f6630(0x43);
      FUN_800f4248(0x1f);
      FUN_800f5410();
      uVar6 = FUN_800f3c3c(0x99);
      FUN_800f3f38(uVar6);
      FUN_800f824c(0x99);
      FUN_800f6630(0x9a);
      FUN_800f5410();
      FUN_800f4008(0x18);
      FUN_800f824c(0x9a);
      FUN_800f6630(0x44);
      FUN_800f4248(0xf);
      *DAT_8019ed40 = *DAT_8019ed40 << 2;
      FUN_800f824c(0x97);
      FUN_800f8fb8(0x98);
      FUN_800f654c(0x40);
      FUN_800f5480();
      uVar6 = FUN_800f3c3c(0x97);
      FUN_800f7f48(uVar6);
      FUN_800f824c(0x95);
      FUN_800f8fb8(0x96);
      FUN_800f6630(0x9a);
      FUN_800f4248(0xfc);
      FUN_800f824c(0x9c);
      FUN_800f6630(0x99);
      FUN_800f4248(0x1f);
      FUN_800f824c(0x9b);
      FUN_800f6630(0x99);
      FUN_800f61e8();
      FUN_800f824c(0x9d);
      FUN_800f6630(0x9a);
      FUN_800f824c(0x9e);
      FUN_800f6630(0x9b);
      FUN_800f61e8();
      FUN_800f824c(0x9f);
      FUN_800f6630(0x9c);
      FUN_800f824c(0xa0);
      FUN_800f62bc(0x94);
    }
  }
  return;
}



