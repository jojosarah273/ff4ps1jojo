
void FUN_8015a374(void)

{
  undefined1 uVar1;
  int iVar2;
  
  FUN_800f8f74(0x3558);
  FUN_800f5574(5);
  iVar2 = FUN_800f53c0();
  if (iVar2 != 0) {
    FUN_800f6240(0x3558);
  }
  FUN_80152cdc();
  FUN_800f7270(0xa6);
  FUN_800f6b68(0x2060);
  FUN_800f824c(0xa9);
  FUN_800f6b68(0x2061);
  FUN_800f824c(0xaa);
  FUN_800f6b68(0x203b);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f8e50(0x3979);
  FUN_800f9330();
  FUN_800f6630(0xd6);
  FUN_800f5140();
  FUN_800f4f4c();
  *DAT_8019ed54 = *DAT_8019ed44;
  uVar1 = *DAT_8019ed5c;
  FUN_800f95a0();
  switch(uVar1) {
  case 0:
    FUN_8015a524();
    break;
  case 2:
  case 4:
    FUN_8015a5b8();
    break;
  case 6:
    FUN_8015a670();
    break;
  case 8:
  case 10:
    FUN_8015a784();
    break;
  case 0xc:
  case 0xe:
    FUN_8015a89c();
    break;
  case 0x10:
    FUN_8015a91c();
    break;
  case 0x12:
    FUN_8015a9bc();
    break;
  case 0x14:
    FUN_8015aa6c();
    break;
  case 0x16:
    FUN_8015a614();
    break;
  case 0x18:
    FUN_8015aacc();
  }
  return;
}



