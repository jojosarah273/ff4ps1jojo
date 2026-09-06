
void FUN_8014323c(void)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  FUN_800f6240(0xf42b);
  FUN_800f9330();
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f7594(6);
  do {
    FUN_800f6b68(0xebe6);
    iVar1 = FUN_800f6434(0x80);
    if (iVar1 == 0) {
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0);
      FUN_800f3f38(uVar2);
      *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
      bVar3 = *DAT_8019ed68;
      if (*DAT_8019ed50 == '\0') {
        bVar3 = bVar3 | 2;
      }
      *DAT_8019ed68 = bVar3;
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) goto LAB_8014347c;
LAB_8014336c:
      FUN_800f8960(0x300);
      FUN_800f6b68(0xec26);
      iVar1 = FUN_800f6434(0x80);
      if (iVar1 != 0) {
        FUN_800f5410();
        uVar2 = FUN_800f3c3c(1);
        FUN_800f3f38(uVar2);
        *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
        bVar3 = *DAT_8019ed68;
        if (*DAT_8019ed50 == '\0') {
          bVar3 = bVar3 | 2;
        }
        *DAT_8019ed68 = bVar3;
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) goto LAB_80143464;
        goto LAB_8014347c;
      }
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(1);
      FUN_800f3f38(uVar2);
      *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
      bVar3 = *DAT_8019ed68;
      if (*DAT_8019ed50 == '\0') {
        bVar3 = bVar3 | 2;
      }
      *DAT_8019ed68 = bVar3;
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) goto LAB_8014347c;
LAB_80143464:
      FUN_800f5574(0x80);
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) goto LAB_8014347c;
      FUN_800f8960(0x301);
    }
    else {
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0);
      FUN_800f3f38(uVar2);
      *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
      bVar3 = *DAT_8019ed68;
      if (*DAT_8019ed50 == '\0') {
        bVar3 = bVar3 | 2;
      }
      *DAT_8019ed68 = bVar3;
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) goto LAB_8014336c;
LAB_8014347c:
      FUN_800f654c(0xf0);
      FUN_800f8960(0x300);
      FUN_800f8960(0x301);
    }
    FUN_800f6564(0xf427);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      *DAT_8019ed40 = *DAT_8019ed5c;
      FUN_800f4248(1);
      FUN_800f5140();
      FUN_800f5410();
      uVar2 = FUN_800f3b04(0xf427);
      FUN_800f3f38(uVar2);
LAB_80143548:
      FUN_800f8960(0x302);
      FUN_800f6564(0x6cc0);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f6d70(0x300);
        *DAT_8019ed40 = ~*DAT_8019ed40;
        FUN_800f8960(0x300);
        FUN_800f654c(0x7f);
        FUN_800f8960(0x303);
      }
      else {
        FUN_800f654c(0x3f);
        FUN_800f8960(0x303);
      }
    }
    else {
      FUN_800f6b68(0xeca6);
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) {
        FUN_800f6b68(0xec66);
        goto LAB_80143548;
      }
      FUN_800f654c(0xf0);
      FUN_800f8960(0x300);
      FUN_800f8960(0x301);
    }
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    uVar2 = FUN_800f3b04(0xf42c);
    FUN_800f56ac(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f8ebc(6);
      FUN_800f95a0();
      FUN_800f8f74(0xf42b);
      return;
    }
  } while( true );
}



