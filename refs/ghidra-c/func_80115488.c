
void FUN_80115488(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f8fb8(0x79);
  do {
    FUN_800f6630(0x79);
    FUN_800f5140();
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f9644(0x20);
    *DAT_8019ed40 = (&DAT_80198c84)[*DAT_8019ed58];
    DAT_8019ed40[1] = (&DAT_80198c85)[*DAT_8019ed58];
    FUN_800f5410();
    uVar1 = FUN_800f3c3c(0xf3);
    FUN_800f3f94(uVar1);
    FUN_800f8274(0xc);
    *DAT_8019ed40 = (&DAT_80198c8c)[*DAT_8019ed58];
    DAT_8019ed40[1] = *(undefined1 *)((int)&PTR_DAT_80198c8d + (uint)*DAT_8019ed58);
    FUN_800f5410();
    uVar1 = FUN_800f3c3c(0xf5);
    FUN_800f3f94(uVar1);
    FUN_800f8274(0xe);
    FUN_800f6658(0x79);
    FUN_800f4264(0xff);
    *DAT_8019ed44 = *DAT_8019ed44 << 4;
    *DAT_8019ed44 = *DAT_8019ed44 | 0x80;
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f6558(0);
    FUN_800f9660(0x20);
    FUN_8011581c();
    FUN_800f6630(0xe);
    FUN_800f5410();
    FUN_800f4008(0x10);
    FUN_800f824c(0xe);
    FUN_80115a34();
    FUN_800f62bc(0x79);
    FUN_800f6630(0x79);
    FUN_800f5574(4);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  return;
}



