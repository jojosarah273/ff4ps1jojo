
void FUN_8010a204(void)

{
  int iVar1;
  
  FUN_800f6630(0xea);
  FUN_800f5574(1);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f62bc(0xea);
    FUN_800f654c(0x80);
    FUN_800f8188(0x2115);
    FUN_800fcc84();
    FUN_800f654c(9);
    FUN_800f8188(0x4300);
    FUN_800f71dc(0x2840);
    FUN_800f8d00(0x2116);
    FUN_800f8fb8(0x10);
    FUN_800f71dc(0x610);
    FUN_800f8d00(0x4302);
    FUN_800f71dc(0x100);
    FUN_800f8d00(0x4305);
    FUN_800fccbc();
  }
  return;
}



