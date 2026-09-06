
void FUN_800fbf50(void)

{
  undefined1 uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  
  FUN_800f654c(0x80);
  FUN_800f8188(0x2115);
  FUN_800f7270(0x47);
  uVar4 = (uint)*DAT_8019ed54;
  FUN_800f7270(0x3d);
  do {
    FUN_800f6c68(0x80000);
    uVar1 = *DAT_8019ed40;
    FUN_800f6c68(0x80001);
    puVar2 = DAT_8019ed54;
    (&DAT_801cfd68)[uVar4] = CONCAT11(*DAT_8019ed40,uVar1);
    uVar4 = uVar4 + 1 & 0xffff;
    *puVar2 = *puVar2 + 2;
    *DAT_8019ed40 = *DAT_8019ed5c;
    FUN_800f4248(7);
    iVar3 = FUN_800f4120(0x202);
  } while (iVar3 != 0);
  FUN_800f9644(0x20);
  FUN_800f6658(0x3d);
  FUN_800f5410();
  FUN_800f4064(8);
  FUN_800f8274(0x3d);
  FUN_800f971c();
  FUN_800f3d48();
  FUN_800f9660(0x20);
  *DAT_8019ed58 = *DAT_8019ed58 + 2;
  return;
}



