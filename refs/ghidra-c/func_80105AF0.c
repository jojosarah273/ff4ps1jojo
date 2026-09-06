
void FUN_80105af0(void)

{
  int iVar1;
  uint uVar2;
  
  FUN_800fe778();
  FUN_800f654c(0x80);
  FUN_800f8188(0x2115);
  FUN_800fcc84();
  FUN_800f654c(1);
  FUN_800f8188(0x4300);
  FUN_800f654c(0x14);
  FUN_800f8188(0x4304);
  FUN_800f71dc(0xf5f6);
  FUN_800f8d00(0x4302);
  FUN_800f71dc(0x2892);
  FUN_800f8d00(0x2116);
  FUN_800f71dc(0x18);
  FUN_800f8d00(0x4305);
  FUN_800fccbc();
  FUN_800f71dc(0x28b2);
  FUN_800f8d00(0x2116);
  FUN_800f8f74(0x420b);
  FUN_800f71dc(0xf60e);
  FUN_800f8d00(0x4302);
  FUN_800f71dc(0x18);
  FUN_800f8d00(0x4305);
  FUN_800fccbc();
  FUN_800f71dc(0x28d2);
  FUN_800f8d00(0x2116);
  FUN_800f8f74(0x420b);
  FUN_800f71dc(0xf626);
  FUN_800f8d00(0x4302);
  FUN_800f71dc(0x18);
  FUN_800f8d00(0x4305);
  FUN_800fccbc();
  FUN_800f71dc(0x28f2);
  FUN_800f8d00(0x2116);
  FUN_800f8f74(0x420b);
  FUN_800f71dc(0xf63e);
  FUN_800f8d00(0x4302);
  FUN_800f71dc(0x18);
  FUN_800f8d00(0x4305);
  FUN_800fccbc();
  FUN_800f8fb8(10);
  FUN_800f71dc(0);
  uVar2 = 0x28d2;
  do {
    FUN_800f6b68(0x634);
    FUN_800f5574(0x80);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
LAB_80105ca8:
      FUN_800f62bc(10);
LAB_80105cb0:
      FUN_800f6b68(0x634);
    }
    else {
      FUN_800f5958(7);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_80105ca8;
      FUN_800f6630(10);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 != 0) goto LAB_80105cb0;
      FUN_800f654c(0xff);
    }
    (&DAT_801cfd68)[uVar2] = *DAT_8019ed40 + 0x2000;
    FUN_800f6364();
    FUN_800f5958(8);
    iVar1 = FUN_800f53d4();
    uVar2 = uVar2 + 1 & 0xffff;
    if (iVar1 != 0) {
      DAT_801d4f0c = 0x2019;
      DAT_801d4f1c = 0x2048;
      DAT_801d4f1e = 0x2064;
      DAT_801d4f20 = 0x2067;
      return;
    }
  } while( true );
}



