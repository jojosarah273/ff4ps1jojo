
void FUN_8012cf18(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f8fb8(0x45);
  do {
    FUN_800f6630(0x45);
    FUN_8012d204();
    FUN_800f5574(3);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
LAB_8012cfa8:
      FUN_800f824c(0xed);
      FUN_800f6564(0x1b3b);
      FUN_800f5480();
      FUN_800f8058(0xb6);
      FUN_800f824c(0x45);
      FUN_800f9660(0x10);
      FUN_800f756c(0x41);
      goto LAB_8012cfe0;
    }
    FUN_800f5574(0x11);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) goto LAB_8012cfa8;
    FUN_800f62bc(0x45);
    FUN_800f6630(0x45);
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
LAB_8012cf90:
  FUN_800f9644(0x10);
  FUN_8012c250();
  return;
  while( true ) {
    FUN_800f6390();
    FUN_800f59f4(0x18);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) break;
LAB_8012cfe0:
    FUN_800f6d40(0x15c0);
    uVar2 = FUN_800f3c3c(0x45);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) goto LAB_8012cf90;
  }
  FUN_800f756c(0x41);
  do {
    FUN_800f6d40(0x15c0);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) break;
    FUN_800f6390();
    FUN_800f59f4(0x18);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f6630(0x45);
  FUN_800f8930(0x15c0);
  FUN_800f9200();
  FUN_800f9644(0x10);
  FUN_801210ac();
  FUN_800f7500(DAT_8019926c);
  FUN_8011fb74();
  FUN_800f7500(0x29a);
  FUN_800f6630(0xed);
  FUN_80120a0c();
  FUN_800f6240(0x1bc8);
  FUN_800f93dc();
  FUN_800f71dc(0x39a);
  FUN_8012fbb0();
  FUN_800f8f74(0x1bc8);
  FUN_80120b6c();
  FUN_80169170();
  FUN_801240a8();
  FUN_801263f0();
  FUN_800f9644(0x10);
  return;
}



