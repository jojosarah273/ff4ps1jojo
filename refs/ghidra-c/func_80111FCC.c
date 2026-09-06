
void FUN_80111fcc(void)

{
  int iVar1;
  
  FUN_800f8fb8(0xca);
  FUN_800f7210(0x172c);
  FUN_800f6b68(0x172e);
  FUN_800f5574(0xfb);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f8188(0x1702);
    FUN_800f654c(3);
    FUN_800f9200();
    FUN_800f6b68(0x172f);
    FUN_800f4248(0x3f);
    FUN_800f8188(0x1706);
    FUN_800f6b68(0x1730);
    FUN_800f8188(0x1707);
    FUN_800f6b68(0x172f);
    FUN_800f4248(0xc0);
    *DAT_8019ed40 = *DAT_8019ed40 >> 6;
    FUN_800f8188(0x1705);
  }
  else {
    FUN_800f5480();
    FUN_800f8058(0xfb);
    FUN_800f9200();
    FUN_800f6b68(0x172f);
    FUN_800f8188(0x1706);
    FUN_800f6b68(0x1730);
    FUN_800f8188(0x1707);
  }
  FUN_800f93dc();
  FUN_8011ab18();
  FUN_800f8f74(0x1e05);
  FUN_80169128();
  FUN_800fd718();
  FUN_800f8fb8(0xd6);
  return;
}



