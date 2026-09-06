
void FUN_80143ed4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f6b68(0xec66);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f6b68(0xec26);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 != 0) goto LAB_80143fd8;
      FUN_80143d64();
      FUN_800f5410();
      uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0xebe6);
      FUN_800f3f38(uVar2);
      FUN_800f824c(0);
      FUN_80143d14();
      FUN_800f5410();
      FUN_800f4008(0x48);
      FUN_800f824c(2);
      FUN_800f6630(0);
      FUN_800f5574(0xe0);
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) {
        FUN_800f654c(1);
        FUN_800f8768(0xec26);
        goto LAB_80143fd8;
      }
    }
    else {
LAB_80143fd8:
      FUN_800f654c(0xf0);
      FUN_800f824c(0);
      FUN_800f824c(2);
    }
    FUN_800f6564(0x1813);
    FUN_800f4248(2);
    FUN_800f5410();
    FUN_800f4008(0x8c);
    FUN_800f8f74(0xf484);
    FUN_8013d4c8();
    FUN_800f6364();
    FUN_800f5958(0x40);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
  } while( true );
}



