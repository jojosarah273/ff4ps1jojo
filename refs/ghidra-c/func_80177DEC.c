
void FUN_80177dec(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  
  iVar1 = (int)(short)DAT_8019ee40;
  DrawSync(0);
  DAT_8019ee32 = 1;
  VSync(0);
  DrawOTag((u_long *)(&DAT_801a0b00 + iVar1 * 0x14d10));
  DAT_8019ee40 = DAT_8019ee40 ^ 1;
  iVar1 = (int)(short)DAT_8019ee40;
  puVar3 = &DAT_801a0a90 + iVar1 * 0x14d10;
  FUN_8017841c();
  DAT_8019fff0 = (ushort)DAT_800d2127 - (ushort)DAT_800d2126;
  DAT_8019ffec = (ushort)DAT_800d2126;
  FUN_80178c14();
  FUN_8011ef0c();
  FUN_800fef7c();
  DAT_8019ee70 = 0;
  DAT_8019edec = 0;
  ClearOTag((u_long *)(&DAT_801a0b00 + iVar1 * 0x14d10),0x29);
  bVar2 = DAT_800d212c & 0x1f;
  FUN_8017d078(puVar3,bVar2,0);
  FUN_8017e220(puVar3,&DAT_800d0300,bVar2);
  FUN_8017e740(puVar3);
  FUN_80178d00(puVar3);
  return;
}



