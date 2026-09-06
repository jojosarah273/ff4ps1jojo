
void FUN_8011ab18(void)

{
  int iVar1;
  
  FUN_800f9200();
  FUN_800f6630(0xca);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800fec74();
  }
  else {
    FUN_800f6630(0x80);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f654c(0);
      FUN_800fd914();
    }
  }
  FUN_800f93dc();
  FUN_800f8188(0x1700);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800fb09c();
  }
  else {
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5574(2);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800faa04();
      }
      else {
        FUN_800fb224();
      }
    }
    else {
      FUN_800fb160();
    }
  }
  FUN_800f6630(0xca);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_8017f9a8(&DAT_801cfd68,0x200,0,0);
    FUN_800fed3c();
  }
  else {
    FUN_800f62bc(0xca);
  }
  FUN_800f654c(0x81);
  FUN_800f8188(0x4200);
  return;
}



