
void FUN_80115d2c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800fe8b4();
  FUN_801162f8();
  FUN_800f71dc(0);
  FUN_800f8d6c(0x24);
  do {
    FUN_800f7270(0x24);
    FUN_800f6630(0x7a);
    FUN_800f4248(7);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0xa6d);
      FUN_800f6048(uVar2);
    }
    FUN_800f6b68(0xa6d);
    iVar1 = FUN_800f6434(0x8080);
    if (iVar1 != 0) {
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574(4);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) goto LAB_80115ddc;
      }
      else {
LAB_80115ddc:
        FUN_800f6630(0x7a);
        FUN_800f4248(7);
        iVar1 = FUN_800f4120(0x202);
        if (iVar1 == 0) {
          FUN_800f6630(0xe5);
          iVar1 = FUN_800f6434(0x202);
          if (iVar1 != 0) {
            FUN_800f654c(0xff);
            FUN_800f8768(0xa6d);
            goto LAB_80116010;
          }
          FUN_800f90ec(0xa6d);
          FUN_800f6630(199);
          iVar1 = FUN_800f6434(0x202);
          if (iVar1 == 0) {
            FUN_800f6564(0xad0);
            *DAT_8019ed54 = *DAT_8019ed44;
            FUN_8010d9d4();
            *DAT_8019ed40 = *DAT_8019ed40 & (&DAT_80198cbc)[*DAT_8019ed54];
            FUN_800f5410();
            uVar2 = FUN_800f3b04(0xad4);
            FUN_800f3f38(uVar2);
            FUN_800f7270(0x24);
            FUN_800f8768(0xa6e);
            FUN_800f6564(0xad1);
            *DAT_8019ed54 = *DAT_8019ed44;
            FUN_8010d9d4();
            *DAT_8019ed40 = *DAT_8019ed40 & (&DAT_80198cbc)[*DAT_8019ed54];
            FUN_800f5410();
            uVar2 = FUN_800f3b04(0xad5);
            FUN_800f3f38(uVar2);
            FUN_800f7270(0x24);
            FUN_800f8768(0xa6f);
          }
          else {
            FUN_800f6630(199);
            FUN_800f5ccc();
            FUN_800f4248(0xf);
            FUN_800f5140();
            *DAT_8019ed58 = *DAT_8019ed44;
            *DAT_8019ed40 = (&DAT_80198bec)[*DAT_8019ed58];
            FUN_800f5410();
            uVar2 = FUN_800f3b04(0xad4);
            FUN_800f3f38(uVar2);
            FUN_800f8768(0xa6e);
            *DAT_8019ed40 = (&DAT_80198bed)[*DAT_8019ed58];
            FUN_800f5410();
            uVar2 = FUN_800f3b04(0xad5);
            FUN_800f3f38(uVar2);
            FUN_800f8768(0xa6f);
            FUN_800f62bc(199);
          }
        }
      }
      FUN_80116098();
    }
LAB_80116010:
    FUN_800f6630(0x24);
    FUN_800f5410();
    FUN_800f4008(4);
    FUN_800f824c(0x24);
    uVar2 = FUN_800f3b04(0xacf);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6630(0x7a);
      FUN_800f4248(7);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) {
        FUN_800f7210(0xad2);
        FUN_800f5e48();
        FUN_800f8d00(0xad2);
      }
      return;
    }
  } while( true );
}



