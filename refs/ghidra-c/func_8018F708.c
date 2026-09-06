
CdlFILE * CdSearchFile(CdlFILE *_30,char *name)

{
  char cVar1;
  bool bVar2;
  u_char uVar3;
  u_char uVar4;
  u_char uVar5;
  u_char uVar6;
  char cVar7;
  int iVar8;
  CdlFILE *pCVar9;
  undefined2 *puVar10;
  int iVar11;
  CdlLOC CVar12;
  CdlLOC CVar13;
  char *pcVar14;
  CdlLOC *pCVar15;
  char *pcVar16;
  int iVar17;
  char local_40 [32];
  
  if (DAT_8019b9d8 != DAT_8019ba00) {
    iVar8 = ISO9660_OBJ_2F8();
    if (iVar8 == 0) {
      return (CdlFILE *)0x0;
    }
    DAT_8019b9d8 = DAT_8019ba00;
  }
  if (*name != '\\') {
    pCVar9 = (CdlFILE *)ISO9660_OBJ_2B0();
    return pCVar9;
  }
  local_40[0] = '\0';
  iVar8 = 1;
  iVar17 = 0;
  pcVar14 = name;
  do {
    cVar7 = *pcVar14;
    cVar1 = *pcVar14;
    pcVar16 = local_40;
    if (cVar7 != '\\') {
      do {
        bVar2 = iVar17 < 8;
        if (cVar1 == '\0') goto ISO9660_OBJ_10C;
        pcVar14 = pcVar14 + 1;
        *pcVar16 = cVar1;
        cVar1 = *pcVar14;
        pcVar16 = pcVar16 + 1;
      } while (*pcVar14 != '\\');
      cVar7 = *pcVar14;
    }
    bVar2 = iVar17 < 8;
    if (cVar7 == '\0') goto ISO9660_OBJ_10C;
    pcVar14 = pcVar14 + 1;
    *pcVar16 = '\0';
    iVar8 = ISO9660_OBJ_5BC(iVar8,local_40);
    if (iVar8 == -1) {
      local_40[0] = '\0';
      pCVar9 = (CdlFILE *)ISO9660_OBJ_108();
      return pCVar9;
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 < 8);
  bVar2 = iVar17 < 8;
ISO9660_OBJ_10C:
  if (bVar2) {
    if (local_40[0] == '\0') {
      if (0 < DAT_8019b9f4) {
        pCVar9 = (CdlFILE *)ISO9660_OBJ_2A4("%s: dir was not found\n",name);
        return pCVar9;
      }
    }
    else {
      *pcVar16 = '\0';
      iVar8 = ISO9660_OBJ_660();
      if (iVar8 == 0) {
        if (0 < DAT_8019b9f4) {
          printf("CdSearchFile: disc error\n");
          pCVar9 = (CdlFILE *)ISO9660_OBJ_2B0();
          return pCVar9;
        }
      }
      else {
        if (1 < DAT_8019b9f4) {
          printf("CdSearchFile: searching %s...\n",local_40);
        }
        iVar17 = 0;
        puVar10 = &DAT_801f6b18;
        pCVar15 = (CdlLOC *)&DAT_801f6b10;
        iVar8 = 0;
        do {
          if (*(char *)((int)&DAT_801f6b18 + iVar8) == '\0') break;
          iVar11 = ISO9660_OBJ_2D8(puVar10,local_40);
          if (iVar11 != 0) {
            if (1 < DAT_8019b9f4) {
              printf("%s:  found\n",local_40);
            }
            CVar12 = pCVar15[1];
            uVar3 = pCVar15[2].minute;
            uVar4 = pCVar15[2].second;
            uVar5 = pCVar15[2].sector;
            uVar6 = pCVar15[2].track;
            CVar13 = pCVar15[3];
            _30->pos = *pCVar15;
            _30->size = (u_long)CVar12;
            _30->name[0] = uVar3;
            _30->name[1] = uVar4;
            _30->name[2] = uVar5;
            _30->name[3] = uVar6;
            *(CdlLOC *)(_30->name + 4) = CVar13;
            CVar12 = pCVar15[5];
            *(CdlLOC *)(_30->name + 8) = pCVar15[4];
            *(CdlLOC *)(_30->name + 0xc) = CVar12;
            pCVar9 = (CdlFILE *)ISO9660_OBJ_2B0();
            return pCVar9;
          }
          pCVar15 = pCVar15 + 6;
          puVar10 = puVar10 + 0xc;
          iVar17 = iVar17 + 1;
          iVar8 = iVar8 + 0x18;
        } while (iVar17 < 0x40);
        if (0 < DAT_8019b9f4) {
          printf("%s: not found\n",local_40);
        }
      }
    }
  }
  else if (0 < DAT_8019b9f4) {
    printf("%s: path level (%d) error\n",name,iVar17);
    pCVar9 = (CdlFILE *)ISO9660_OBJ_2B0();
    return pCVar9;
  }
  return (CdlFILE *)0x0;
}



