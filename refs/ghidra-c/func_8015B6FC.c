
void FUN_8015b6fc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f8fb8(0xb5);
  FUN_800f9330();
  FUN_800f6b68(0x3303);
  FUN_800f5574(5);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(8);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) goto LAB_8015b77c;
    FUN_800f5574(0xc);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) goto LAB_8015b77c;
    FUN_800f5574(0x10);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) goto LAB_8015b77c;
LAB_8015b79c:
    FUN_800f95a0();
    FUN_800f9330();
    FUN_800f6b68(0x3303);
    FUN_800f5140();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6c68(0x13fd19);
    FUN_800f824c(0xb3);
    FUN_800f6c68(0x13fd1a);
    FUN_800f824c(0xb4);
    FUN_800f7270(0xa6);
    FUN_800f6b68(0x2003);
    FUN_800f4370(0xb3);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f6b68(0x2004);
      FUN_800f4370(0xb4);
      iVar1 = FUN_800f4120(2);
      if (iVar1 != 0) goto LAB_8015b854;
    }
  }
  else {
LAB_8015b77c:
    FUN_8015b8e4();
    FUN_800f6630(0xb3);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) goto LAB_8015b79c;
  }
  FUN_800f654c(0x80);
  FUN_800f824c(0xb5);
LAB_8015b854:
  FUN_800f95a0();
  FUN_800f6b68(0x3302);
  FUN_800f9200();
  FUN_800f4248(0x7f);
  uVar2 = FUN_800f3c3c(0xb5);
  FUN_800f78c4(uVar2);
  FUN_800f8768(0x3302);
  FUN_800f93dc();
  uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x3302);
  FUN_800f54d4(uVar2);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f654c(1);
    FUN_800f824c(0xaa);
  }
  return;
}



