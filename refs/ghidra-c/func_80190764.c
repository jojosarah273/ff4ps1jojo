
undefined4 BIOS_1_OBJ_6CC(void)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  byte unaff_s1;
  byte *unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  undefined1 *unaff_s5;
  int unaff_s6;
  undefined1 *unaff_s7;
  int unaff_s8;
  
  do {
    while( true ) {
      uVar3 = BIOS_1_OBJ_0();
      if (uVar3 == 0) break;
      if (((uVar3 & 4) != 0) && (DAT_8019b9f0 != (code *)0x0)) {
        (*DAT_8019b9f0)(*unaff_s5,&DAT_801f8f18);
      }
      if (((uVar3 & 2) != 0) && (DAT_8019b9ec != (code *)0x0)) {
        (*DAT_8019b9ec)(*unaff_s2,&DAT_801f8f10);
      }
    }
    *PTR_CDROM_REG0_8019bcb0 = unaff_s1;
    do {
      if ((*unaff_s2 == unaff_s3) || (*unaff_s2 == 5)) {
        *unaff_s2 = (byte)unaff_s3;
        puVar6 = &DAT_801f8f10;
        iVar5 = 7;
        if (unaff_s7 != (undefined1 *)0x0) {
          do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 1;
            iVar5 = iVar5 + -1;
            *unaff_s7 = uVar1;
            unaff_s7 = unaff_s7 + 1;
          } while (iVar5 != -1);
        }
        uVar4 = BIOS_1_OBJ_7B4();
        return uVar4;
      }
      if (unaff_s6 != 0) {
        return 0;
      }
      iVar5 = VSync(-1);
      if ((DAT_801f8f28 < iVar5) ||
         (iVar5 = DAT_801f8f2c + 1, bVar2 = 0x3c0000 < DAT_801f8f2c, DAT_801f8f2c = iVar5, bVar2)) {
        FUN_80191620("CD timeout: ");
        printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_801f8f30,
               *(undefined4 *)((uint)DAT_8019ba09 * 4 + unaff_s8),
               *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s4));
        CD_flush();
        uVar4 = BIOS_1_OBJ_69C();
        return uVar4;
      }
      iVar5 = CheckCallback();
    } while (iVar5 == 0);
    unaff_s1 = *PTR_CDROM_REG0_8019bcb0 & 3;
  } while( true );
}



