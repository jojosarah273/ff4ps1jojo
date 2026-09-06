
undefined4 BIOS_1_OBJ_1448(void)

{
  bool bVar1;
  int iVar2;
  int in_v0;
  undefined4 uVar3;
  int unaff_s0;
  byte *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  while (((uVar3 = 0xffffffff, in_v0 == 0 &&
          (uVar3 = 0, (*(uint *)PTR_DMA_CDROM_CHCR_8019bce4 & 0x1000000) != 0)) &&
         (uVar3 = 1, unaff_s2 == 0))) {
    iVar2 = VSync(-1);
    if ((DAT_801f8f28 < iVar2) ||
       (iVar2 = DAT_801f8f2c + 1, bVar1 = unaff_s4 < DAT_801f8f2c, DAT_801f8f2c = iVar2, bVar1)) {
      FUN_80191620("CD timeout: ");
      printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_801f8f30,
             *(undefined4 *)((uint)DAT_8019ba09 * 4 + unaff_s3),
             *(undefined4 *)((uint)*unaff_s1 * 4 + unaff_s0));
      CD_flush();
      uVar3 = BIOS_1_OBJ_1448();
      return uVar3;
    }
    in_v0 = 0;
  }
  return uVar3;
}



