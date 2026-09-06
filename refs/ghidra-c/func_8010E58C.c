
void FUN_8010e58c(void)

{
  int iVar1;
  RECT local_10;
  
  FUN_800fb3f8();
  FUN_80103fe8();
  DAT_800d212c = 0x10;
  DAT_8019ecfc = 1;
  local_10.x = 0x100;
  local_10.y = 0;
  local_10.w = 0x100;
  local_10.h = 0xf0;
  ClearImage(&local_10,0xff,0xff,0xff);
  DrawSync(0);
  FUN_8017f8f8(&DAT_801d7d68,0x300,0,0xffffffff);
  FUN_800f654c(0x22);
  FUN_800f8188(0x2123);
  FUN_800f654c(0);
  FUN_800f8188(0x420c);
  FUN_800f654c(0xf7);
  FUN_800f81e8(0x7f5a00);
  FUN_800f654c(0x80);
  FUN_800f81e8(0x7f5a01);
  FUN_800f654c(0xeb);
  FUN_800f81e8(0x7f5a02);
  FUN_800f654c(0xf7);
  FUN_800f81e8(0x7f5a03);
  FUN_800f654c(0x78);
  FUN_800f81e8(0x7f5a04);
  FUN_800f654c(0xec);
  FUN_800f81e8(0x7f5a05);
  FUN_800f654c(0);
  FUN_800f81e8(0x7f5a06);
  FUN_800f654c(0x41);
  FUN_800f8188(0x4360);
  FUN_800f654c(0x26);
  FUN_800f8188(0x4361);
  FUN_800f71dc(0x5a00);
  FUN_800f8d00(0x4362);
  FUN_800f654c(0x7f);
  FUN_800f8188(0x4364);
  FUN_800f654c(0x16);
  FUN_800f8188(0x4367);
  FUN_800f654c(3);
  FUN_800f8188(0x1700);
  FUN_800f654c(0);
  FUN_800f8188(0x2100);
  FUN_800f654c(0x81);
  FUN_800f8188(0x4200);
  FUN_800f8fb8(0x24);
  do {
    FUN_800fe7b0();
    FUN_800f654c(0x40);
    FUN_800f8188(0x420c);
    FUN_800f6630(0x24);
    FUN_800f8188(0x2100);
    FUN_8010e878();
    FUN_800f62bc(0x24);
    FUN_800f6630(0x24);
    FUN_800f5574(0x10);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  do {
    FUN_800fe7b0();
    FUN_800f654c(0x40);
    FUN_800f8188(0x420c);
    FUN_8010e878();
    FUN_800f6630(2);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 != 0) break;
    FUN_800f6630(3);
    iVar1 = FUN_800f6434(0x202);
  } while (iVar1 == 0);
  FUN_800f654c(0xf);
  FUN_800f824c(0x24);
  do {
    FUN_800fe7b0();
    FUN_800f654c(0x40);
    FUN_800f8188(0x420c);
    FUN_800f6630(0x24);
    FUN_800f8188(0x2100);
    FUN_8010e878();
    FUN_800f5da0(0x24);
    FUN_800f6630(0x24);
    iVar1 = FUN_800f6434(0x202);
  } while (iVar1 != 0);
  FUN_800f654c(0x33);
  FUN_800f8188(0x2123);
  FUN_800f654c(0);
  FUN_800f8188(0x420c);
  FUN_8011ea5c();
  DAT_8019ecfc = 0;
  return;
}



