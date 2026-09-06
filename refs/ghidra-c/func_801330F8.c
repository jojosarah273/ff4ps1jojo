
void FUN_801330f8(void)

{
  byte bVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_800f926c();
  uVar4 = 0x4600;
  FUN_800f9298();
  FUN_800f654c(0x1b);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f71dc(0x2100);
  FUN_800f9330();
  FUN_800f94b8();
  FUN_800f654c(0x80);
  FUN_800f824c(0x15);
  FUN_800f654c(0x10);
  FUN_800f8188(0x145);
  do {
    FUN_800f71dc(8);
    do {
      FUN_800f6d70(0);
      bVar1 = *DAT_8019ed40;
      FUN_800f6d70(1);
      psVar2 = DAT_8019ed58;
      (&DAT_801cfd68)[uVar4] = CONCAT11(*DAT_8019ed40,bVar1);
      uVar4 = uVar4 + 1 & 0xffff;
      *psVar2 = *psVar2 + 2;
      FUN_800f5e48();
      iVar3 = FUN_800f5c64(0x202);
    } while (iVar3 != 0);
    FUN_800f71dc(8);
    uVar5 = uVar4;
    do {
      FUN_800f6d70(0);
      uVar4 = uVar5 + 1 & 0xffff;
      (&DAT_801cfd68)[uVar5] = (ushort)*DAT_8019ed40;
      FUN_800f63bc();
      FUN_800f5e48();
      iVar3 = FUN_800f5c64(0x202);
      uVar5 = uVar4;
    } while (iVar3 != 0);
    FUN_800f5d24(0x145);
    iVar3 = FUN_800f5b8c(0x202);
  } while (iVar3 != 0);
  FUN_80139afc();
  FUN_800f94b8();
  FUN_800f9448();
  return;
}



