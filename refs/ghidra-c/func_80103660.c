
void FUN_80103660(void)

{
  int iVar1;
  
  FUN_800f8fb8(0x7a);
  FUN_800f8fb8(0xb9);
  do {
    while( true ) {
      FUN_80102e78();
      FUN_800f6630(0x79);
      FUN_800f5574(0x20);
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) break;
      FUN_800f7864();
      FUN_800f8188(0x6fd);
      FUN_800f62bc(0x79);
    }
    FUN_800f62bc(0xb9);
    FUN_800f62bc(0xb9);
    FUN_800f6630(0xb9);
    FUN_800f5410();
    FUN_800f4008(0x10);
    FUN_800f824c(0xad);
    FUN_800f6630(0xb9);
    FUN_800f7864();
    FUN_8017559c();
    FUN_800f62bc(0x79);
    FUN_800f6630(0x79);
    FUN_800f5574(0x30);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f6564(0x6c3);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 != 0) {
    FUN_800f8f74(0x6c3);
    FUN_800f6564(0x1700);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_801038d4();
    }
    else {
      FUN_80103790();
    }
  }
  return;
}



