
void FUN_8014d780(void)

{
  int iVar1;
  
  FUN_800f9330();
  FUN_800f9200();
  FUN_800f4248(8);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f93dc();
    FUN_800f9200();
    FUN_800f4248(0xf0);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_8014d748();
      FUN_800f93dc();
      FUN_800f95a0();
    }
    else {
      *DAT_8019ed40 = *DAT_8019ed40 >> 3;
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f9644(0x20);
      FUN_800f6cf4(0x16ffc6);
      FUN_800f81b0(0xf455);
      FUN_800f971c();
      FUN_800f9660(0x20);
      FUN_800f93dc();
      FUN_800f4248(7);
      *DAT_8019ed54 = *DAT_8019ed44;
      *DAT_8019ed40 = (&DAT_8019a0dc)[*DAT_8019ed54];
      FUN_800f8188(0xf452);
      FUN_800f6240(0xf451);
      FUN_800f8f74(0xf453);
      FUN_800f8f74(0xf454);
      FUN_800f95a0();
    }
  }
  else {
    FUN_800f93dc();
    FUN_800f9200();
    FUN_800f4248(0xe0);
    FUN_800f8188(0xef88);
    FUN_800f93dc();
    FUN_800f9200();
    FUN_800f654c(0x1f);
    FUN_800f8188(0xf435);
    FUN_800f8188(0xf434);
    FUN_800f8188(0xf433);
    FUN_800f8f74(0xef8a);
    FUN_800f8f74(0xef89);
    FUN_800f93dc();
    FUN_800f4248(7);
    FUN_800f8188(0xef87);
    FUN_800f95a0();
  }
  return;
}



