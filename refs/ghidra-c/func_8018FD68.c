
/* WARNING: Removing unreachable block (ram,0x8018fea0) */
/* WARNING: Removing unreachable block (ram,0x8018fea8) */
/* WARNING: Removing unreachable block (ram,0x8018fec0) */

undefined4 ISO9660_OBJ_660(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_28 [8];
  
  if (param_1 != DAT_8019b9d4) {
    iVar3 = ISO9660_OBJ_8FC(1,*(undefined4 *)(&DAT_801f70ec + param_1 * 0x2c),&DAT_801f8710);
    if (iVar3 != 1) {
      if (DAT_8019b9f4 < 1) {
        return 0xffffffff;
      }
      printf("CD_cachefile: dir not found\n");
      uVar4 = ISO9660_OBJ_8D4();
      return uVar4;
    }
    if (1 < DAT_8019b9f4) {
      printf("CD_cachefile: searching...\n");
    }
    if ((char)DAT_801f8710 != '\0') {
      local_28._0_4_ = DAT_801f8714 << 0x10 | DAT_801f8710 >> 0x10;
      puVar1 = local_28 + 3;
      uVar2 = (uint)puVar1 & 3;
      *(uint *)(puVar1 + -uVar2) =
           *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 |
           (uint)local_28._0_4_ >> (3 - uVar2) * 8;
      DsIntToPos(local_28._0_4_,(DslLOC *)&DAT_801f6b10);
      DAT_801f6b14 = DAT_801f871c << 0x10 | DAT_801f8718 >> 0x10;
      DAT_801f6b18 = DAT_800f33d8;
      uVar4 = ISO9660_OBJ_7F0();
      return uVar4;
    }
    DAT_801f6b18 = DAT_801f6b18 & 0xff00;
    if (DAT_8019b9f4 < 2) {
      DAT_8019b9d4 = param_1;
      return 1;
    }
    DAT_8019b9d4 = param_1;
    printf("CD_cachefile: %d files found\n",0);
  }
  return 1;
}



