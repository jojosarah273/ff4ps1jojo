
void FUN_8012f9d0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f824c(0x43);
  FUN_80120fbc();
  FUN_800f9644(0x20);
  FUN_800f6658(0x43);
  *DAT_8019ed44 = *DAT_8019ed44 << 3;
  FUN_800f8274(0x48);
  FUN_800f516c();
  FUN_800f5050();
  uVar1 = FUN_800f3c3c(0x48);
  FUN_800f3f94(uVar1);
  FUN_800f4064(0x1560);
  FUN_800f8274(0x60);
  FUN_800f9660(0x20);
  FUN_800f8fb8(0x5e);
  FUN_800f8fb8(0x5b);
  FUN_800f654c(8);
  FUN_800f824c(0x5a);
  FUN_800f7594(0x41);
  do {
    FUN_800f654c(3);
    FUN_800f824c(0x5d);
    do {
      FUN_800f9644(0x20);
      FUN_800f6658(0x5d);
      FUN_800f5cf8();
      FUN_800f516c();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f6558(8);
      FUN_800f5480();
      uVar1 = FUN_800f3c3c(0x5a);
      FUN_800f7fcc(uVar1);
      FUN_800f3d48();
      FUN_800f4264(0xff00);
      FUN_800f7894();
      FUN_800f5410();
      iVar2 = FUN_800f3b9c(0x1efebd,*DAT_8019ed54);
      FUN_800f3f94(iVar2 + (uint)*DAT_8019ed54);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f9660(0x20);
      FUN_800f66d8(0x60);
      FUN_8012fbb0();
      FUN_800f63bc();
      FUN_800f5da0(0x5d);
      iVar2 = FUN_800f5b8c(0x202);
    } while (iVar2 != 0);
    FUN_800f5da0(0x5a);
    iVar2 = FUN_800f5b8c(0x202);
  } while (iVar2 != 0);
  FUN_800f9660(0x20);
  return;
}



