
void FUN_800fe9f8(void)

{
  int iVar1;
  
  FUN_800f6630(0x7f);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(0x79);
    FUN_800f5140();
    FUN_800f9690();
    FUN_800f654c(0x6f);
    FUN_800f5410();
    iVar1 = FUN_800f3b9c(0x14fb1f,*DAT_8019ed54);
    FUN_800f3f38(iVar1 + (uint)*DAT_8019ed54);
    FUN_800f96e0();
    FUN_800f8e50(0x4209);
    DAT_801a0026 = DAT_801a001c;
    DAT_801a002a = *DAT_8019ed58 - DAT_801a001c;
    DAT_8019fff2 = (*DAT_8019ed58 - DAT_8019ffee) + 0x10;
    FUN_800f6630(0xb1);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f654c(0xf);
    }
    else {
      FUN_800f6630(0x80);
    }
    FUN_800f8188(0x2100);
  }
  else {
    FUN_800f654c(0x81);
    FUN_800f8188(0x4200);
  }
  return;
}



