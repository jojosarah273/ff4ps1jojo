
void FUN_801133b0(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  FUN_800f654c(0x60);
  FUN_800f81e8(0xad4);
  FUN_800f654c(0x48);
  FUN_800f8188(0xad5);
  FUN_8011356c();
  FUN_800fe7b0();
  FUN_800f654c(0x80);
  FUN_800f8188(0x2115);
  FUN_800f71dc(0);
  do {
    *DAT_8019ed40 = *DAT_8019ed5c;
    FUN_800f4248(3);
    iVar2 = FUN_800f4120(0x202);
    uVar4 = uVar3;
    if (iVar2 == 0) {
      *DAT_8019ed40 = *DAT_8019ed5c;
      *DAT_8019ed40 = *DAT_8019ed40 >> 2;
      FUN_800f5140();
      *DAT_8019ed58 = *DAT_8019ed44;
      *DAT_8019ed40 = (&DAT_80198c54)[*DAT_8019ed58];
      bVar1 = *DAT_8019ed40;
      *DAT_8019ed40 = (&DAT_80198c55)[*DAT_8019ed58];
      uVar4 = (uint)CONCAT11(*DAT_8019ed40,bVar1);
    }
    uVar3 = uVar4 + 1 & 0xffff;
    (&DAT_801cfd68)[uVar4] = 0x1501;
    FUN_800f6364();
    *DAT_8019ed40 = *DAT_8019ed5c;
    FUN_800f5574(0x10);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  FUN_8011ea5c();
  return;
}



