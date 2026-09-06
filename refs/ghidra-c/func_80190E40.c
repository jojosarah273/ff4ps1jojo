
undefined4 BIOS_1_OBJ_DA8(void)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  byte unaff_s1;
  byte *unaff_s2;
  int unaff_s3;
  undefined1 *unaff_s4;
  int unaff_s5;
  undefined1 *unaff_s6;
  
  do {
    while( true ) {
      uVar3 = BIOS_1_OBJ_0();
      if (uVar3 == 0) break;
      if (((uVar3 & 4) != 0) && (DAT_8019b9f0 != (code *)0x0)) {
        (*DAT_8019b9f0)(*unaff_s4,&DAT_801f8f18);
      }
      if (((uVar3 & 2) != 0) && (DAT_8019b9ec != (code *)0x0)) {
        (*DAT_8019b9ec)(*unaff_s2,&DAT_801f8f10);
      }
    }
    *PTR_CDROM_REG0_8019bcb0 = unaff_s1;
    do {
      if (*unaff_s2 != 0) {
        puVar6 = &DAT_801f8f10;
        iVar5 = 7;
        if (unaff_s6 != (undefined1 *)0x0) {
          do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 1;
            iVar5 = iVar5 + -1;
            *unaff_s6 = uVar1;
            unaff_s6 = unaff_s6 + 1;
          } while (iVar5 != -1);
        }
        uVar4 = 0;
        if (DAT_8019bcc8 == '\x05') {
          uVar4 = 0xffffffff;
        }
        return uVar4;
      }
      iVar5 = VSync(-1);
      if ((DAT_801f8f28 < iVar5) ||
         (iVar5 = DAT_801f8f2c + 1, bVar2 = 0x3c0000 < DAT_801f8f2c, DAT_801f8f2c = iVar5, bVar2)) {
        FUN_80191620("CD timeout: ");
        printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_801f8f30,
               *(undefined4 *)((uint)DAT_8019ba09 * 4 + unaff_s5),
               *(undefined4 *)((uint)*unaff_s2 * 4 + unaff_s3));
        CD_flush();
        uVar4 = BIOS_1_OBJ_D78();
        return uVar4;
      }
      iVar5 = CheckCallback();
    } while (iVar5 == 0);
    unaff_s1 = *PTR_CDROM_REG0_8019bcb0 & 3;
  } while( true );
}



