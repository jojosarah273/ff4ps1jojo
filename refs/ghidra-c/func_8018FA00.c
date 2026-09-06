
undefined4 ISO9660_OBJ_2F8(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  byte *pbVar9;
  uchar *puVar10;
  int iVar11;
  undefined1 local_28 [8];
  
  pbVar9 = (byte *)&DAT_801f8710;
  iVar5 = ISO9660_OBJ_8FC(1,0x10,&DAT_801f8710);
  if (iVar5 == 1) {
    iVar5 = strncmp((char *)((int)&DAT_801f8710 + 1),"CD001",5);
    if (iVar5 == 0) {
      puVar7 = local_28 + 3;
      uVar3 = (uint)puVar7 & 3;
      *(uint *)(puVar7 + -uVar3) =
           *(uint *)(puVar7 + -uVar3) & -1 << (uVar3 + 1) * 8 | DAT_801f879c >> (3 - uVar3) * 8;
      local_28._0_4_ = DAT_801f879c;
      iVar5 = ISO9660_OBJ_8FC(1,DAT_801f879c,&DAT_801f8710);
      if (iVar5 == 1) {
        if (1 < DAT_8019b9f4) {
          printf("CD_newmedia: sarching dir..\n");
        }
        puVar7 = &DAT_801f8f10;
        iVar5 = 0;
        do {
          iVar11 = iVar5;
          if (*pbVar9 == 0) break;
          uVar3 = (uint)(pbVar9 + 5) & 3;
          uVar2 = (uint)(pbVar9 + 2) & 3;
          uVar8 = (*(int *)(pbVar9 + 5 + -uVar3) << (3 - uVar3) * 8 |
                  (uint)puVar7 & 0xffffffffU >> (uVar3 + 1) * 8) & -1 << (4 - uVar2) * 8 |
                  *(uint *)(pbVar9 + 2 + -uVar2) >> uVar2 * 8;
          uVar3 = iVar5 * 0x2c + 0x801f711b;
          uVar2 = uVar3 & 3;
          puVar4 = (uint *)(uVar3 - uVar2);
          *puVar4 = *puVar4 & -1 << (uVar2 + 1) * 8 | uVar8 >> (3 - uVar2) * 8;
          (&DAT_801f7118)[iVar5 * 0xb] = uVar8;
          puVar10 = &DAT_801f711c + iVar5 * 0x2c;
          bVar1 = pbVar9[6];
          iVar11 = iVar5 + 1;
          (&DAT_801f7110)[iVar5 * 0xb] = iVar11;
          (&DAT_801f7114)[iVar5 * 0xb] = (uint)bVar1;
          memcpy(puVar10,pbVar9 + 8,(uint)*pbVar9);
          puVar10[*pbVar9] = '\0';
          puVar7 = (undefined1 *)((uint)*pbVar9 + (*pbVar9 & 1) + 8);
          pbVar9 = pbVar9 + (int)puVar7;
          if (1 < DAT_8019b9f4) {
            printf("\t%08x,%04x,%04x,%s\n",(&DAT_801f7118)[iVar5 * 0xb],(&DAT_801f7110)[iVar5 * 0xb]
                   ,(&DAT_801f7114)[iVar5 * 0xb],puVar10);
          }
          if (0x7f < iVar11) goto ISO9660_OBJ_564;
          iVar5 = iVar11;
        } while (pbVar9 < &DAT_801f8f10);
        if (iVar11 < 0x80) {
          (&DAT_801f7114)[iVar11 * 0xb] = 0;
        }
ISO9660_OBJ_564:
        DAT_8019b9d4 = 0;
        uVar6 = 1;
        if (1 < DAT_8019b9f4) {
          printf("CD_newmedia: %d dir entries found\n",iVar11);
          uVar6 = 1;
        }
      }
      else {
        uVar6 = 0;
        if (0 < DAT_8019b9f4) {
          printf("CD_newmedia: Read error (PT:%08x)\n",local_28._0_4_);
          uVar6 = ISO9660_OBJ_594();
          return uVar6;
        }
      }
    }
    else {
      uVar6 = 0;
      if (0 < DAT_8019b9f4) {
        printf("CD_newmedia: Disc format error in cd_read(PVD)\n");
        uVar6 = ISO9660_OBJ_594();
        return uVar6;
      }
    }
  }
  else {
    uVar6 = 0;
    if (0 < DAT_8019b9f4) {
      printf("CD_newmedia: Read error in cd_read(PVD)\n");
      uVar6 = ISO9660_OBJ_594();
      return uVar6;
    }
  }
  return uVar6;
}



