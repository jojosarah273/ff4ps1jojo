
void FUN_8012fbb0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f9200();
  FUN_800f9330();
  FUN_800f5574(0xe);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
LAB_8012fc70:
    FUN_800f6564(0x1bc8);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 != 0) goto LAB_8012fcb0;
    goto LAB_8012fc88;
  }
  FUN_800f5574(0x1c);
  iVar1 = FUN_800f53c0();
  if (iVar1 != 0) goto LAB_8012fc70;
  FUN_800f8188(0x1a87);
  FUN_800f939c();
  FUN_80130bc8();
  FUN_800f960c();
  FUN_800f8188(0x1bc4);
  FUN_800f8f74(0x1bc5);
  FUN_800f6630(0xe8);
  FUN_80124eac();
  FUN_800f9644(0x20);
  FUN_800f6be0(0xb);
  uVar2 = FUN_800f3b04(0x1bc4);
  FUN_800f5520(uVar2);
  FUN_800f9660(0x20);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) goto LAB_8012fc70;
LAB_8012fcb0:
  FUN_800f6564(0x1a87);
  FUN_800f5574(0x12);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f6564(0x1a86);
    FUN_800f4248(0x28);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f4248(0x20);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f6564(0x1a87);
        FUN_800f5574(0x19);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) goto LAB_8012fd68;
      }
      FUN_800f6564(0x1a86);
      FUN_800f4248(8);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f6564(0x1a87);
        FUN_800f5574(0x1a);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) goto LAB_8012fd68;
      }
LAB_8012fc88:
      FUN_800f6630(0x34);
      *DAT_8019ed40 = *DAT_8019ed40 | 4;
      goto LAB_8012fd70;
    }
  }
LAB_8012fd68:
  FUN_800f6630(0x34);
LAB_8012fd70:
  FUN_800f824c(0xdb);
  FUN_800f95a0();
  FUN_800f93dc();
  FUN_800f9200();
  FUN_800f9644(0x20);
  *DAT_8019ed44 = *DAT_8019ed54;
  FUN_800f5410();
  uVar2 = FUN_800f3c3c(0x29);
  FUN_800f3f94(uVar2);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f9660(0x20);
  FUN_800f93dc();
  FUN_800f926c();
  FUN_800f9330();
  FUN_800f939c();
  FUN_800f3d48();
  FUN_800f654c(0);
  FUN_800f3d48();
  FUN_800f9644(0x20);
  FUN_800f516c();
  FUN_800f8274(0x45);
  FUN_800f516c();
  FUN_800f5050();
  uVar2 = FUN_800f3c3c(0x45);
  FUN_800f3f94(uVar2);
  FUN_800f4064(0x8900);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f9660(0x20);
  FUN_800f654c(0xf);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f6d70(0);
  FUN_800f63bc();
  FUN_800f885c(0x7e0040);
  FUN_800f654c(0xff);
  FUN_800f885c(0x7e0000);
  FUN_800f6364();
  FUN_800f6630(0xdb);
  FUN_800f885c(0x7e0000);
  FUN_800f885c(0x7e0040);
  FUN_800f6364();
  FUN_800f654c(5);
  FUN_800f824c(0x45);
  do {
    FUN_800f6d70(0);
    FUN_801245b4();
    FUN_800f885c(0x7e0000);
    FUN_800f3d48();
    FUN_800f885c(0x7e0040);
    FUN_800f6364();
    FUN_800f6630(0xdb);
    FUN_800f885c(0x7e0000);
    FUN_800f885c(0x7e0040);
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f5da0(0x45);
    iVar1 = FUN_800f5b8c(0x202);
  } while (iVar1 != 0);
  FUN_800f960c();
  FUN_800f95a0();
  FUN_800f9448();
  return;
}



