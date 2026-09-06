
void FUN_8010fac4(void)

{
  int iVar1;
  
  FUN_800f8fb8(0x79);
  do {
    FUN_800f6630(0x79);
    FUN_800f5410();
    FUN_800f4008(4);
    FUN_800f5140();
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_80115684();
    FUN_800f8fb8(0x92);
    FUN_8011581c();
    FUN_800f62bc(0x79);
    FUN_800f6630(0x79);
    FUN_800f5574(4);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}



