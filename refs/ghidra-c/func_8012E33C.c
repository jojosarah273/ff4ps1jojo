
void FUN_8012e33c(void)

{
  int iVar1;
  
  FUN_800f6630(0xd9);
  FUN_800f5140();
  FUN_800f824c(0x43);
  FUN_800f7270(0x43);
  FUN_800f6630(0xda);
  FUN_800f5140();
  FUN_800f824c(0x43);
  FUN_800f7594(0x43);
  FUN_800f926c();
  (&DAT_800d0000)[*DAT_8019ed4c] = 1;
  *DAT_8019ed4c = *DAT_8019ed4c - 1;
  FUN_800f9448();
  FUN_800f9644(0x20);
  *DAT_8019ed40 = (&DAT_80199c0c)[*DAT_8019ed54];
  DAT_8019ed40[1] = (&DAT_80199c0d)[*DAT_8019ed54];
  FUN_800f5480();
  FUN_800f80d0(*(undefined2 *)(&DAT_80199c0c + *DAT_8019ed58));
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    *DAT_8019ed40 = (&DAT_80199c0c)[*DAT_8019ed58];
    DAT_8019ed40[1] = (&DAT_80199c0d)[*DAT_8019ed58];
    FUN_800f5480();
    FUN_800f80d0(*(undefined2 *)(&DAT_80199c0c + *DAT_8019ed54));
    FUN_800f9448();
    FUN_800f3d48();
    *DAT_8019ed44 = *DAT_8019ed44 >> 2;
    FUN_800f81b0(0x1b9c);
    FUN_800f6558(0xfc00);
    FUN_800f81b0(0x1b9f);
    FUN_800f6558(0x400);
    FUN_800f81b0(0x1b9d);
  }
  else {
    FUN_800f9448();
    FUN_800f3d48();
    *DAT_8019ed44 = *DAT_8019ed44 >> 2;
    FUN_800f81b0(0x1b9c);
    FUN_800f6558(0xfc00);
    FUN_800f81b0(0x1b9d);
    FUN_800f6558(0x400);
    FUN_800f81b0(0x1b9f);
  }
  FUN_800f9660(0x20);
  return;
}



