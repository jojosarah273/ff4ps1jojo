
void FUN_80128b3c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f9644(0x20);
  FUN_800f6558(0x1be4);
  uVar1 = FUN_800f3b9c(0x7007fe,0);
  FUN_800f5520(uVar1);
  iVar2 = FUN_800f53d4();
  if (iVar2 == 0) {
    uVar1 = FUN_800f3b9c(0x700ffe,0);
    FUN_800f5520(uVar1);
    iVar2 = FUN_800f53d4();
    if (iVar2 == 0) {
      uVar1 = FUN_800f3b9c(0x7017fe,0);
      FUN_800f5520(uVar1);
      iVar2 = FUN_800f53d4();
      if (iVar2 == 0) {
        uVar1 = FUN_800f3b9c(0x701ffe,0);
        FUN_800f5520(uVar1);
        iVar2 = FUN_800f53d4();
        if (iVar2 == 0) {
          FUN_800f9660(0x20);
          FUN_80128c4c();
          FUN_8012821c();
          FUN_80126d48();
          DAT_8019ee4e = 1;
          FUN_800f5480();
          return;
        }
      }
    }
  }
  FUN_800f9660(0x20);
  DAT_8019ee4e = 0;
  FUN_800f5410();
  return;
}



