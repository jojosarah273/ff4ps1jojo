
void FUN_8012c980(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_801210ac();
  FUN_800f6564(0x1b23);
  FUN_800f5410();
  uVar1 = FUN_800f3b04(0x1b1a);
  FUN_800f3f38(uVar1);
  FUN_800f5140();
  FUN_800f4f4c();
  uVar1 = FUN_800f3b04(0x1b22);
  FUN_800f3f38(uVar1);
  FUN_800f5140();
  FUN_801224d0();
  FUN_800f6b68(0x1440);
  FUN_800f9200();
  FUN_800f7500(DAT_801991aa);
  FUN_8011ef30();
  FUN_800f93dc();
  FUN_800f5574(0xce);
  iVar2 = FUN_800f53c0();
  if (iVar2 != 0) {
    FUN_800f5574(0xe7);
    iVar2 = FUN_800f53c0();
    if (iVar2 == 0) {
      FUN_800f5480();
      FUN_800f8058(0xce);
      FUN_801224d0();
      FUN_800f6c68(0xfae00);
      FUN_800f824c(0x45);
      FUN_800f71dc(0xae2a);
      FUN_800f712c();
      do {
        do {
          iVar2 = FUN_800f53d4();
          if (iVar2 != 0) goto LAB_8012cacc;
          FUN_800f6364();
          FUN_800f6c68(0xf0000);
          iVar2 = FUN_800f6434(0x202);
        } while (iVar2 != 0);
        FUN_800f5da0(0x45);
        iVar2 = FUN_800f5b8c(0x202);
      } while (iVar2 != 0);
      FUN_800f6364();
LAB_8012cacc:
      *DAT_8019ed58 = *DAT_8019ed54;
      FUN_800f654c(0xf);
      FUN_800f71dc(0x54);
      FUN_8011f9c4();
      return;
    }
  }
  FUN_801240a8();
  FUN_800f7500(DAT_801991b2);
  FUN_8011fb74();
  return;
}



