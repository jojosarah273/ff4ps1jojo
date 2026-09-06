
void FUN_8016bc6c(void)

{
  int iVar1;
  
  FUN_800f6630(0x4a);
  FUN_800f4248(0xf);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_800f71dc(0x400);
    FUN_800f8d6c(0x28);
    FUN_800f7270(0x57);
    FUN_800f7500(0x4000);
    FUN_800f654c(0x7e);
    FUN_8016bbcc();
    FUN_800f9644(0x20);
    FUN_800f6658(0x57);
    FUN_800f5410();
    FUN_800f4064(0x400);
    FUN_800f4264(0x7fff);
    *DAT_8019ed44 = *DAT_8019ed44 | 0x8000;
    FUN_800f8274(0x57);
    FUN_800f971c();
    FUN_800f9660(0x20);
  }
  return;
}



