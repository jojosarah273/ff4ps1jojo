
void FUN_80125130(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f9330();
  FUN_800f6630(0x1d);
  FUN_80124eac();
  FUN_800f8d6c(0x22);
  FUN_800f6e30(0x22);
  FUN_800f4248(0x3f);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_80125528();
  }
  else {
    FUN_800f7594(0x41);
    while( true ) {
      uVar2 = FUN_800f3b04(*DAT_8019ed58 + 0x1a67);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) break;
      FUN_800f63bc();
      FUN_800f63bc();
    }
    FUN_800f6d70(0x1a68);
    FUN_800f9200();
    FUN_800f824c(0x45);
    FUN_800f5140();
    FUN_800f4f4c();
    uVar2 = FUN_800f3c3c(0x45);
    FUN_800f3f38(uVar2);
    *DAT_8019ed40 = *DAT_8019ed40 << 3;
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_800f4008(0x80);
    FUN_800f824c(0x48);
    FUN_800f654c(0);
    FUN_800f4008(0);
    FUN_800f824c(0x49);
    FUN_800f93dc();
    FUN_800f61e8();
    FUN_800f61e8();
    FUN_800f61e8();
    FUN_800f5140();
    FUN_800f4f4c();
    uVar2 = FUN_800f3c3c(0xc1);
    FUN_800f78c4(uVar2);
    uVar2 = FUN_800f3c3c(0x49);
    FUN_800f3f38(uVar2);
    FUN_800f824c(0x49);
    FUN_800f6630(0x1e);
    FUN_800f5574(9);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f7270(0x41);
    }
    else {
      FUN_800f71dc(6);
    }
    FUN_800f971c();
    FUN_800f3d48();
    FUN_800f6630(0x1d);
    FUN_800f9644(0x20);
    *DAT_8019ed44 = *DAT_8019ed44 << 5;
    FUN_800f516c();
    FUN_800f5050();
    FUN_800f4064(0x340);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f9660(0x20);
    FUN_800f654c(6);
    FUN_800f824c(0x45);
    do {
      FUN_800f6630(0x1f);
      FUN_800f5410();
      FUN_800f4008((&DAT_80199bb8)[*DAT_8019ed54]);
      FUN_800f8960(0);
      FUN_800f6630(0x20);
      FUN_800f5410();
      FUN_800f4008((&DAT_80199bc4)[*DAT_8019ed54]);
      FUN_800f8960(1);
      FUN_800f8d6c(0xe9);
      FUN_800f6630(0x1e);
      FUN_800f5140();
      FUN_800f824c(0x43);
      FUN_800f5140();
      FUN_800f4f4c();
      uVar2 = FUN_800f3c3c(0x43);
      FUN_800f3f38(uVar2);
      uVar2 = FUN_800f3c3c(0xe9);
      FUN_800f3f38(uVar2);
      FUN_801224d0();
      FUN_800f654c(0);
      FUN_800f3d48();
      *DAT_8019ed40 = (&DAT_80199b74)[*DAT_8019ed54];
      FUN_800f7270(0xe9);
      FUN_800f9644(0x20);
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0x48);
      FUN_800f3f94(uVar2);
      FUN_800f89d4(2);
      FUN_800f9660(0x20);
      FUN_800f63bc();
      FUN_800f63bc();
      FUN_800f63bc();
      FUN_800f63bc();
      FUN_800f6364();
      FUN_800f5da0(0x45);
      iVar1 = FUN_800f5b8c(0x202);
    } while (iVar1 != 0);
    FUN_801255e8();
    FUN_800f95a0();
  }
  return;
}



