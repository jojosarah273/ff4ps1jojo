
void FUN_8015084c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  DAT_8019ee54 = 1;
  DrawSync(0);
  VSync(0);
  SetDispMask(0);
  FUN_801506bc();
  puVar1 = &UNK_801b9b10;
  puVar2 = &UNK_801a4e00;
  iVar3 = 0xd47;
  do {
    *(undefined2 *)(puVar2 + 0x10) = 8;
    *(undefined2 *)(puVar2 + 0x12) = 8;
    *(undefined2 *)(puVar1 + 0x10) = 8;
    *(undefined2 *)(puVar1 + 0x12) = 8;
    puVar1 = puVar1 + 0x14;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 0x14;
  } while (-1 < iVar3);
  DAT_8019eeb0 = 0;
  DAT_8019edc6 = 0;
  (&DAT_800d0000)[*DAT_8019ed4c] = *DAT_8019ed68;
  *DAT_8019ed4c = *DAT_8019ed4c - 1;
  FUN_800f9644(0x30);
  FUN_800f926c();
  FUN_800f9298();
  FUN_800f922c();
  FUN_800f9330();
  FUN_800f939c();
  FUN_800f6558(0);
  FUN_800f9660(0x20);
  FUN_800f9644(0x10);
  FUN_80150c58();
  FUN_800f654c(0);
  FUN_800f81e8(0x2100);
  FUN_800f81e8(0x420c);
  FUN_800f81e8(0x420b);
  FUN_800f81e8(0x4200);
  FUN_800f9644(0x30);
  FUN_800f960c();
  FUN_800f95a0();
  FUN_800f9410();
  FUN_800f94b8();
  FUN_800f9448();
  *DAT_8019ed4c = *DAT_8019ed4c + 1;
  *DAT_8019ed68 = (&DAT_800d0000)[*DAT_8019ed4c];
  DrawSync(0);
  VSync(0);
  SetDispMask(0);
  FUN_801506bc();
  DAT_8019ee54 = 0;
  DAT_8019edc6 = 0;
  return;
}



