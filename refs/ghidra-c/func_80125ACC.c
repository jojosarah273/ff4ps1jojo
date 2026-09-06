
void FUN_80125acc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f9200();
  FUN_800f824c(0x45);
  FUN_800f8fb8(0x46);
  FUN_8012d204();
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f9200();
    FUN_800f6b68(1);
    FUN_800f4248(0xf);
    FUN_800f8188(0x1bc0);
    FUN_800f8f74(0x1bbf);
    FUN_800f6b68(3);
    FUN_800f4248(0x38);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      *DAT_8019ed40 = *DAT_8019ed40 >> 2;
      FUN_801224d0();
      FUN_800f9644(0x20);
      FUN_800f6cf4(0x1efcbd);
      *DAT_8019ed58 = *DAT_8019ed44;
      FUN_800f9660(0x20);
      FUN_800f6630(0x45);
      FUN_800f5140();
      FUN_800f824c(0x43);
      FUN_800f7270(0x43);
      FUN_800f654c(0x80);
      FUN_800f81e8(0x2115);
      FUN_800f9644(0x20);
      *DAT_8019ed40 = (&DAT_80199bf0)[*DAT_8019ed54];
      DAT_8019ed40[1] = (&DAT_80199bf1)[*DAT_8019ed54];
      FUN_800f8210(0x2116);
      FUN_800f9660(0x20);
      FUN_800f93dc();
      FUN_800f9298();
      FUN_800f71dc(0x2100);
      FUN_800f9330();
      FUN_800f94b8();
    }
    else {
      FUN_800f93dc();
      FUN_800f9298();
      FUN_800f71dc(0x2100);
      FUN_800f9330();
      FUN_800f94b8();
      FUN_800f5ccc();
      FUN_800f5140();
      FUN_800f8188(0x143);
      FUN_800f654c(0x80);
      FUN_800f824c(0x15);
      FUN_800f9644(0x20);
      FUN_800f658c(0x1bbf);
      FUN_800f7894();
      FUN_800f5410();
      uVar2 = FUN_800f3b04(0x1bbf);
      FUN_800f3f94(uVar2);
      FUN_800f4064(0xd3c0);
      *DAT_8019ed58 = *DAT_8019ed44;
      FUN_800f658c(0x145);
      FUN_800f516c();
      *DAT_8019ed54 = *DAT_8019ed44;
      *DAT_8019ed40 = (&DAT_80199bf0)[*DAT_8019ed54];
      DAT_8019ed40[1] = (&DAT_80199bf1)[*DAT_8019ed54];
      FUN_800f8274(0x16);
      FUN_800f9660(0x20);
    }
    FUN_800f926c();
    FUN_800f654c(0x1d);
    FUN_800f9200();
    FUN_800f9448();
    FUN_800f654c(0x10);
    FUN_80125df8();
    FUN_800f9448();
    FUN_800f94b8();
    FUN_800f93dc();
  }
  else {
    FUN_800f93dc();
  }
  return;
}



