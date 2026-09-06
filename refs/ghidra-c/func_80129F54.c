
bool FUN_80129f54(void)

{
  char cVar1;
  
  FUN_800f8f74(0x1b1f);
  FUN_801267a0();
  FUN_801266f0();
  FUN_801240a8();
  FUN_80120f1c();
  FUN_800f654c(0x1c);
  FUN_800f824c(0xc2);
  FUN_800f654c(6);
  FUN_800f824c(0xae);
  FUN_801241b8();
  FUN_8011f684();
  FUN_800f654c(0x1b);
  FUN_800f81e8(0x212c);
  FUN_800f7500(DAT_8019919e);
  FUN_800f71dc(DAT_801991a8);
  FUN_80121124();
  FUN_801210ac();
  FUN_800f7500(DAT_801991b2);
  FUN_8011fb74();
  FUN_800f654c(3);
  FUN_80126920();
  FUN_801263f0();
  FUN_8011ef0c();
  FUN_800f7210(0x1ba5);
  FUN_800f8d6c(0x93);
  FUN_8016ea7c();
  FUN_800f6240(0x1bc9);
  FUN_800f71dc(0xeace);
  FUN_800f8d00(0x1b1d);
  FUN_80120f94();
  FUN_8012aac0();
  FUN_8016ea7c();
  FUN_80120b6c();
  cVar1 = FUN_8012a190();
  if (cVar1 != '\x01') {
    FUN_801241b8();
    FUN_8011f684();
    FUN_800f7270(0x93);
    FUN_800f8d00(0x1ba5);
    FUN_80120f94();
    FUN_80120ca4();
    FUN_801240a8();
    FUN_80126830();
    FUN_801263f0();
    FUN_8011ef0c();
    FUN_80120f1c();
    FUN_800f654c(0x1c);
    FUN_800f824c(0xc2);
    FUN_800f654c(0x86);
    FUN_800f824c(0xae);
    FUN_800f7500(DAT_801991a8);
    FUN_800f71dc(DAT_8019919e);
    FUN_80121124();
    FUN_80122a9c();
    FUN_80122a24();
    FUN_8011f684();
    FUN_800f654c(0x1f);
    FUN_800f81e8(0x212c);
    FUN_800f8f74(0x1bc9);
    FUN_8017f8f8(&DAT_801d7d68,0x300,0,0xffffffff);
    FUN_80120b6c();
  }
  return cVar1 == '\x01';
}



