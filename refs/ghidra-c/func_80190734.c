
undefined4 BIOS_1_OBJ_69C(void)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  int in_v0;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  byte *unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  undefined1 *unaff_s5;
  int unaff_s6;
  undefined1 *unaff_s7;
  int unaff_s8;
  
  while( true ) {
    if (in_v0 != 0) {
      return 0xffffffff;
    }
    iVar4 = CheckCallback();
    if (iVar4 != 0) {
      bVar1 = *PTR_CDROM_REG0_8019bcb0;
      while( true ) {
        uVar5 = BIOS_1_OBJ_0();
        if (uVar5 == 0) break;
        if (((uVar5 & 4) != 0) && (DAT_8019b9f0 != (code *)0x0)) {
          (*DAT_8019b9f0)(*unaff_s5,&DAT_801f8f18);
        }
        if (((uVar5 & 2) != 0) && (DAT_8019b9ec != (code *)0x0)) {
          (*DAT_8019b9ec)(*unaff_s2,&DAT_801f8f10);
        }
      }
      *PTR_CDROM_REG0_8019bcb0 = bVar1 & 3;
    }
    if ((*unaff_s2 == unaff_s3) || (*unaff_s2 == 5)) {
      *unaff_s2 = (byte)unaff_s3;
      puVar7 = &DAT_801f8f10;
      iVar4 = 7;
      if (unaff_s7 != (undefined1 *)0x0) {
        do {
          uVar2 = *puVar7;
          puVar7 = puVar7 + 1;
          iVar4 = iVar4 + -1;
          *unaff_s7 = uVar2;
          unaff_s7 = unaff_s7 + 1;
        } while (iVar4 != -1);
      }
      uVar6 = BIOS_1_OBJ_7B4();
      return uVar6;
    }
    if (unaff_s6 != 0) {
      return 0;
    }
    iVar4 = VSync(-1);
    if ((DAT_801f8f28 < iVar4) ||
       (iVar4 = DAT_801f8f2c + 1, bVar3 = 0x3c0000 < DAT_801f8f2c, DAT_801f8f2c = iVar4, bVar3))
    break;
    in_v0 = 0;
  }
  FUN_80191620("CD timeout: ");
  printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_801f8f30,
         *(undefined4 *)((uint)DAT_8019ba09 * 4 + unaff_s8),
         *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s4));
  CD_flush();
  uVar6 = BIOS_1_OBJ_69C();
  return uVar6;
}



