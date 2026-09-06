
void FUN_801376f0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f9200();
  FUN_800f6564(0x1b7a);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f93dc();
    FUN_80124d08();
  }
  else {
    FUN_800f93dc();
    FUN_800f8fb8(0x76);
    FUN_800f824c(0x75);
    FUN_800f8fb8(0x7a);
    FUN_800f824c(0x79);
    FUN_800f8d6c(0x73);
    FUN_800f8d6c(0x77);
    FUN_800f6564(0x1b7c);
    FUN_800f5ccc();
    FUN_800f824c(99);
    FUN_800f8fb8(100);
    FUN_800f9644(0x20);
    do {
      FUN_800f6658(0x73);
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0x77);
      FUN_800f3f94(uVar2);
      FUN_800f8274(0x73);
      FUN_800f6658(0x75);
      uVar2 = FUN_800f3c3c(0x79);
      FUN_800f3f94(uVar2);
      FUN_800f8274(0x75);
      FUN_800f5dd4(99);
      iVar1 = FUN_800f5c64(0x202);
    } while (iVar1 != 0);
    FUN_800f9660(0x20);
    FUN_800f6630(0x75);
    FUN_800f5574(0x98);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f7270(0x73);
      FUN_80124d08();
    }
    else {
      FUN_800f7270(0x75);
      FUN_800f5958(0x9680);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) {
        FUN_80124d08();
      }
      *DAT_8019ed54 = *DAT_8019ed58;
      FUN_800f7500(DAT_80199216);
      FUN_801223a4();
      FUN_800f7210(0x1a80);
      FUN_800f654c(1);
      FUN_800f8768(0x1a78);
    }
  }
  return;
}



