
undefined4 FUN_8012cc74(void)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  byte bVar4;
  
  FUN_800f6564(0x1a02);
  iVar2 = FUN_800f6434(0x202);
  if (iVar2 == 0) {
    FUN_8012c250();
    return 0;
  }
  bVar4 = DAT_800d06ab & 7;
  if (bVar4 == 2) {
    puVar3 = &DAT_800d065a;
    uVar1 = DAT_800d065a & 0xfff0;
  }
  else {
    if (bVar4 < 3) {
      if (bVar4 != 1) goto LAB_8012cd50;
      puVar3 = &DAT_800d065c;
    }
    else {
      if (bVar4 == 3) {
        puVar3 = &DAT_800d065c;
        uVar1 = DAT_800d065c & 0xfff0;
        goto LAB_8012cd34;
      }
      if (bVar4 != 4) goto LAB_8012cd50;
      puVar3 = &DAT_800d065a;
    }
    uVar1 = *puVar3 + 4 & 0xfff0;
  }
LAB_8012cd34:
  *puVar3 = uVar1;
  DAT_800d06ab = DAT_800d06ab & 0xf8;
LAB_8012cd50:
  FUN_8012cea8();
  return 1;
}



