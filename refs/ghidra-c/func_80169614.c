
void FUN_80169614(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_800f71dc(0);
  FUN_800f7500(0x8000);
  FUN_8016baac();
  FUN_800f926c();
  FUN_800f971c();
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f71dc(0);
  uVar3 = (uint)*DAT_8019ed54;
  FUN_800f8fb8(4);
  FUN_800f6630(100);
  FUN_800f5574(1);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f654c(0x40);
      FUN_800f824c(4);
    }
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    do {
      FUN_800f6c68(0xaf001);
      FUN_800f824c(0);
      FUN_800f7500(8);
      uVar4 = uVar3;
      do {
        uVar2 = FUN_800f3c3c(0);
        FUN_800f4f28(uVar2);
        FUN_800f4f4c();
        FUN_800f7c6c();
        FUN_800f4248(1);
        uVar3 = uVar4 + 1 & 0xffff;
        (&DAT_801cfd68)[uVar4] = CONCAT11(*DAT_8019ed40,*(undefined1 *)(&DAT_801cfd68 + uVar4));
        FUN_800f5ea0();
        iVar1 = FUN_800f5c64(0x202);
        uVar4 = uVar3;
      } while (iVar1 != 0);
      FUN_800f6364();
      FUN_800f6364();
      FUN_800f5958(0x1000);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f9448();
  }
  else {
    FUN_800f71dc(0x40);
    FUN_800f971c();
    do {
      uVar4 = uVar3 + 1 & 0xffff;
      (&DAT_801cfd68)[uVar3] = CONCAT11(*DAT_8019ed40,*(undefined1 *)(&DAT_801cfd68 + uVar3));
      FUN_800f5e48();
      iVar1 = FUN_800f5c64(0x202);
      uVar3 = uVar4;
    } while (iVar1 != 0);
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    do {
      FUN_800f6c68(0x15d840);
      FUN_800f9200();
      FUN_800f4248(0xf);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        *DAT_8019ed40 = *DAT_8019ed40 | 0x10;
      }
      uVar3 = uVar4 + 1 & 0xffff;
      (&DAT_801cfd68)[uVar4] = CONCAT11(*DAT_8019ed40,*(undefined1 *)(&DAT_801cfd68 + uVar4));
      FUN_800f93dc();
      FUN_800f4248(0xf0);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        *DAT_8019ed40 = *DAT_8019ed40 >> 4;
        *DAT_8019ed40 = *DAT_8019ed40 | 0x10;
      }
      uVar4 = uVar3 + 1 & 0xffff;
      (&DAT_801cfd68)[uVar3] = CONCAT11(*DAT_8019ed40,*(undefined1 *)(&DAT_801cfd68 + uVar3));
      FUN_800f6364();
      FUN_800f5958(0x800);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f9448();
  }
  return;
}



