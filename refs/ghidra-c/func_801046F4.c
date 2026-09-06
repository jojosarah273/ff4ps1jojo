
void FUN_801046f4(void)

{
  int iVar1;
  
  FUN_800f654c(3);
  FUN_800f8188(0x1705);
  FUN_800f8fb8(0x7a);
  FUN_800f8fb8(0x79);
  do {
    FUN_800fe870();
    FUN_800ff024();
    FUN_800f6630(0x79);
    *DAT_8019ed40 = *DAT_8019ed40 >> 2;
    FUN_800f9690();
    *DAT_8019ed40 = (&DAT_80198ab4)[*DAT_8019ed54];
    FUN_800f8188(0x6f8);
    FUN_800fe7d8();
    FUN_800f62bc(0x79);
    FUN_800f6630(0x79);
    FUN_800f5574(0x20);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f8f74(0x6d0);
      FUN_800f6564(0x1701);
      FUN_800f8188(0x171b);
      FUN_800f7210(0x1706);
      FUN_800f8d00(0x1719);
    }
    FUN_800f6630(0x79);
    FUN_800f5574(0x40);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



