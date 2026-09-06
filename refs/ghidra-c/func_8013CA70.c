
void FUN_8013ca70(void)

{
  int iVar1;
  
  FUN_800f7270(0x41);
  while( true ) {
    FUN_800f6b68(0xff28);
    FUN_800f5574(0x19);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) break;
    FUN_800f5574(200);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) break;
    FUN_800f5574(0xee);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) break;
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f5958(0x10);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f5410();
      return;
    }
  }
  FUN_801210ac();
  FUN_800f7500(DAT_8019926a);
  FUN_8011fb74();
  FUN_801263f0();
  FUN_8012219c();
  FUN_8011ff40();
  FUN_801240a8();
  FUN_800f7500(DAT_80199260);
  FUN_8011ef30();
  FUN_800f7500(DAT_80199264);
  FUN_8011fb74();
  FUN_801263f0();
  FUN_800f5480();
  return;
}



