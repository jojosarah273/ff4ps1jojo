
void FUN_80141dc0(void)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  
  FUN_800f8fb8(0x4e);
  do {
    FUN_80140558();
    FUN_800f6630(0x4e);
    FUN_800f4248(4);
    puVar2 = DAT_8019ed50;
    bVar1 = *DAT_8019ed40;
    *DAT_8019ed40 = bVar1 >> 2;
    *puVar2 = (uint)(bVar1 >> 2);
    iVar3 = FUN_800f7728(0x202);
    if (iVar3 == 0) {
      FUN_800f654c(0x34);
    }
    else {
      FUN_800f654c(0x38);
    }
    FUN_800f8188(0xf330);
    FUN_800f62bc(0x4e);
    FUN_800f6630(0x4e);
    FUN_800f5574(0x10);
    iVar3 = FUN_800f53d4();
  } while (iVar3 == 0);
  FUN_800f654c(0x38);
  FUN_800f8188(0xf330);
  return;
}



