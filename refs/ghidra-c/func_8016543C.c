
void FUN_8016543c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f9200();
  FUN_800f824c(0xe5);
  FUN_800f7500(0xc700);
  FUN_800f654c(0xf);
  FUN_80152640();
  *DAT_8019ed54 = *DAT_8019ed58;
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f6c68(0xfc700);
    FUN_800f8960(0x289c);
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  while( true ) {
    FUN_800f6b68(0x289c);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) break;
    uVar2 = FUN_800f3c3c(0xb5);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f7594(0x9a);
      FUN_800f6b68(0x289d);
      FUN_800f8960(0x291c);
      FUN_800f62bc(0x9a);
    }
    FUN_800f6364();
    FUN_800f6364();
  }
  FUN_800f93dc();
  FUN_800f824c(0xdf);
  FUN_800f654c(0x18);
  FUN_800f824c(0xe1);
  FUN_8015240c();
  FUN_800f7270(0xe3);
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f8ebc(0xb7);
  do {
    FUN_800f6b68(0x1560);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f6d70(0x291c);
      FUN_800f824c(0xb9);
      FUN_800f5574(0xff);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        return;
      }
      FUN_800f5574(0x19);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) {
        FUN_800f6630(0xb3);
        iVar1 = FUN_800f6434(0x202);
joined_r0x8016567c:
        if (iVar1 != 0) goto LAB_801656dc;
      }
      else {
        FUN_800f5574(0x31);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
LAB_80165664:
          FUN_800f6630(0xb3);
          FUN_800f5ccc();
          iVar1 = FUN_800f5b8c(0x202);
          goto joined_r0x8016567c;
        }
        FUN_800f5574(0x42);
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) goto LAB_80165664;
        FUN_800f6630(0xb3);
        FUN_800f5574(2);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) goto LAB_801656dc;
      }
      FUN_800f6630(0xb9);
      FUN_800f8768(0x1560);
      FUN_800f63bc();
    }
LAB_801656dc:
    FUN_800f6364();
    FUN_800f62bc(0xb7);
    FUN_800f6630(0xb7);
    FUN_800f5574(0x18);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
  } while( true );
}



