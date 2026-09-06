
void FUN_80149394(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f8f74(0xf121);
  FUN_800f8f74(0xf122);
  FUN_800f6564(0xf115);
  FUN_800f824c(0);
  do {
    FUN_800f6564(0xf118);
    FUN_800f5410();
    uVar1 = FUN_800f3b04(0xf116);
    FUN_800f3f38(uVar1);
    FUN_800f8188(0xf118);
    FUN_800f6564(0xf11a);
    FUN_800f5410();
    uVar1 = FUN_800f3b04(0xf11b);
    FUN_800f3f38(uVar1);
    FUN_800f8188(0xf11a);
    while( true ) {
      uVar1 = FUN_800f3b04(0xf11c);
      FUN_800f54d4(uVar1);
      iVar2 = FUN_800f53c0();
      if (iVar2 == 0) break;
      FUN_800f6564(0xf117);
      iVar2 = FUN_800f6434(0x80);
      if (iVar2 == 0) {
        FUN_800f9644(0x20);
        FUN_800f6658(0);
        FUN_800f922c();
        FUN_800f658c(0xf117);
        FUN_800f4264(0xff);
        FUN_800f8274(0);
      }
      else {
        FUN_800f9644(0x20);
        FUN_800f6658(0);
        FUN_800f922c();
        FUN_800f658c(0xf117);
        *DAT_8019ed44 = *DAT_8019ed44 | 0xff00;
        FUN_800f8274(0);
      }
      FUN_800f658c(0xf121);
      FUN_800f5410();
      uVar1 = FUN_800f3c3c(0);
      FUN_800f3f94(uVar1);
      FUN_800f81b0(0xf121);
      FUN_800f9410();
      FUN_800f8274(0);
      FUN_800f971c();
      FUN_800f9660(0x20);
      FUN_800f6564(0xf119);
      FUN_800f5410();
      uVar1 = FUN_800f3b04(0xf117);
      FUN_800f3f38(uVar1);
      FUN_800f8188(0xf119);
      FUN_800f6564(0xf11a);
      FUN_800f5480();
      uVar1 = FUN_800f3b04(0xf11c);
      FUN_800f7f48(uVar1);
      FUN_800f8188(0xf11a);
    }
    FUN_800f5da0(0);
    iVar2 = FUN_800f5b8c(0x202);
  } while (iVar2 != 0);
  FUN_800f5d24(0xf11d);
  iVar2 = FUN_800f5b8c(0x202);
  if (iVar2 == 0) {
    FUN_800f5480();
  }
  else {
    FUN_800f5410();
  }
  return;
}



