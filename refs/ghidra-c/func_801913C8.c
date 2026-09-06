
undefined4 CD_datasync(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = VSync(-1);
  DAT_801f8f28 = iVar2 + 0x3c0;
  DAT_801f8f2c = 0;
  DAT_801f8f30 = "CD_datasync";
  while (iVar2 = VSync(-1), iVar2 <= DAT_801f8f28) {
    iVar2 = DAT_801f8f2c + 1;
    bVar1 = 0x3c0000 < DAT_801f8f2c;
    DAT_801f8f2c = iVar2;
    if (bVar1) break;
    uVar3 = 0;
    if (((*(uint *)PTR_DMA_CDROM_CHCR_8019bce4 & 0x1000000) == 0) || (uVar3 = 1, param_1 != 0)) {
      return uVar3;
    }
  }
  FUN_80191620("CD timeout: ");
  printf("%s:(%s) Sync=%s, Ready=%s\n",DAT_801f8f30,(&PTR_s_CdlSync_8019ba10)[DAT_8019ba09],
         (&PTR_s_NoIntr_8019ba90)[DAT_8019bcc8],(&PTR_s_NoIntr_8019ba90)[DAT_8019bcc9]);
  CD_flush();
  uVar3 = BIOS_1_OBJ_1448();
  return uVar3;
}



