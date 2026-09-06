
void FUN_80125f38(void)

{
  int iVar1;
  
  FUN_800f9200();
  FUN_800f824c(0x45);
  FUN_800f8fb8(0x46);
  FUN_8012d204();
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f6b68(1);
    FUN_800f4248(0xf);
    FUN_800f824c(0x43);
    FUN_800f9644(0x20);
    FUN_800f6658(0x43);
    *DAT_8019ed44 = *DAT_8019ed44 << 3;
    FUN_800f516c();
    FUN_800f5050();
    FUN_800f4064(0x86d0);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6658(0x45);
    *DAT_8019ed44 = *DAT_8019ed44 << 4;
    FUN_800f516c();
    FUN_800f5050();
    FUN_800f4064(0xa160);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f6558(0xf);
    FUN_800f3d64(0xd7e);
    FUN_800f9660(0x20);
    FUN_800f93dc();
  }
  else {
    FUN_800f93dc();
  }
  return;
}



