
void FUN_801709e4(void)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_800f654c(0x80);
  FUN_800f8188(0x2115);
  FUN_800f71dc(0);
  uVar5 = (uint)*DAT_8019ed54;
  FUN_800f6564(0x1700);
  FUN_800f824c(0x3e);
  FUN_800f8fb8(0x3d);
  FUN_800f7270(0x3d);
  FUN_800f7500(0);
  do {
    FUN_800f6c68(0x148600);
    FUN_800f8960(0xbdb);
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f5a90(0x100);
    iVar3 = FUN_800f53d4();
  } while (iVar3 == 0);
  FUN_800f6564(0x1700);
  *DAT_8019ed40 = *DAT_8019ed40 << 5;
  FUN_800f824c(0x3e);
  FUN_800f8fb8(0x3d);
  FUN_800f7270(0x3d);
  FUN_800f7500(0);
  do {
    do {
      FUN_800f6c68(0x1d8000);
      FUN_800f824c(8);
      FUN_800f6364();
      FUN_800f4248(0xf);
      FUN_800f5410();
      uVar4 = FUN_800f3b04(*DAT_8019ed58 + 0xbdb);
      FUN_800f3f38(uVar4);
      uVar6 = uVar5 + 1 & 0xffff;
      (&DAT_801cfd68)[uVar5] = CONCAT11(*DAT_8019ed40,*(undefined1 *)(&DAT_801cfd68 + uVar5));
      FUN_800f6630(8);
      *DAT_8019ed40 = *DAT_8019ed40 >> 4;
      FUN_800f5410();
      uVar4 = FUN_800f3b04(*DAT_8019ed58 + 0xbdb);
      FUN_800f3f38(uVar4);
      pbVar2 = DAT_8019ed5c;
      pbVar1 = DAT_8019ed40;
      uVar5 = uVar6 + 1 & 0xffff;
      (&DAT_801cfd68)[uVar6] = CONCAT11(*DAT_8019ed40,*(undefined1 *)(&DAT_801cfd68 + uVar6));
      *pbVar1 = *pbVar2;
      FUN_800f4248(0x1f);
      iVar3 = FUN_800f4120(0x202);
    } while (iVar3 != 0);
    FUN_800f63bc();
    FUN_800f5a90(0x100);
    iVar3 = FUN_800f53d4();
  } while (iVar3 == 0);
  return;
}



