
void FUN_801144b4(void)

{
  int iVar1;
  
  FUN_800fe870();
  FUN_800f8fb8(4);
  FUN_800f654c(1);
  FUN_800f824c(0xd5);
  FUN_8010543c();
  FUN_80102770();
  FUN_800f7500(0);
  do {
    *DAT_8019ed40 = *DAT_8019ed60;
    *DAT_8019ed40 = *DAT_8019ed40 >> 3;
    *DAT_8019ed54 = *DAT_8019ed44;
    *DAT_8019ed40 = (&DAT_80198c78)[*DAT_8019ed54];
    FUN_800f824c(0xc);
    *DAT_8019ed40 = (&DAT_80198c79)[*DAT_8019ed54];
    FUN_800f824c(0xe);
    FUN_80115a34();
    FUN_800f654c(0x1c);
    FUN_800f824c(0x91);
    FUN_800f654c(0x78);
    FUN_800f824c(0x8f);
    FUN_800f8fb8(0xd);
    FUN_800f8fb8(0xf);
    FUN_800f8fb8(0x92);
    FUN_8011581c();
    FUN_800f5a90(0x50);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



