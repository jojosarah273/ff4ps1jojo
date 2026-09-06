
void FUN_80135330(void)

{
  int iVar1;
  
  FUN_800f6630(0x34);
  FUN_800f824c(0xdb);
  FUN_800f654c(0);
  FUN_80134948();
  FUN_800f5574(0);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_80125934();
    FUN_8012b168();
    FUN_8011f684();
    FUN_80120fbc();
    FUN_800f7500(DAT_8019920c);
    FUN_8011fb74();
    FUN_80120b6c();
    FUN_8011ff40();
  }
  else {
    FUN_801241b8();
    FUN_80120f1c();
    FUN_800f7500(DAT_801991f6);
    FUN_8011ef30();
    FUN_80135298();
    FUN_800f7500(DAT_801991fa);
    FUN_8011ef30();
    FUN_800f7500(DAT_80199204);
    FUN_8011fba4();
    FUN_800f7500(DAT_801991fc);
    FUN_8011ef30();
    FUN_80135574();
    *DAT_8019ed40 = *DAT_8019ed60;
    FUN_800f8188(0x1b7d);
    FUN_8011f684();
    FUN_80120b6c();
    FUN_800f8f74(0x1bcb);
    do {
      FUN_801378e0();
      FUN_80125934();
      FUN_800f6564(0x1b7c);
      FUN_800f7500(0x19a);
      FUN_801206dc();
      FUN_8011f684();
      FUN_801264e8();
      FUN_8011f884();
      FUN_80137938();
      FUN_800f6564(0x1bcb);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f8f74(0x1bcb);
        FUN_8013554c();
      }
      FUN_800f6630(0);
      FUN_800f4248(0x80);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f7500(0x310);
        FUN_801361a4();
        FUN_8012b0d8();
        return;
      }
      FUN_800f6630(1);
      FUN_800f4248(0x80);
      iVar1 = FUN_800f4120(2);
    } while (iVar1 != 0);
  }
  return;
}



