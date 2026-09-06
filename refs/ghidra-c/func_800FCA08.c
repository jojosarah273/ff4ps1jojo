
void FUN_800fca08(void)

{
  int iVar1;
  
  FUN_800f6564(0xfdd);
  FUN_800f5574(0xe);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f654c(0x80);
    FUN_800f8188(0x2115);
    FUN_800fcc84();
    FUN_800f71dc(0x430);
    FUN_800f8d00(0x2116);
    FUN_800f654c(1);
    FUN_800f8188(0x4300);
    FUN_800f71dc(0x5800);
    FUN_800f8d00(0x4302);
    FUN_800f654c(0x7f);
    FUN_800f8188(0x4304);
    FUN_800f71dc(0x100);
    FUN_800f8d00(0x4305);
    FUN_800fccbc();
    DAT_8019ed78 = 1;
  }
  return;
}



