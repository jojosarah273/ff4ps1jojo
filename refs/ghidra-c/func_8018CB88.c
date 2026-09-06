
void SpuGetCommonAttr(SpuCommonAttr *attr)

{
  undefined *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar3 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x180);
  uVar4 = *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x182);
  if ((uVar3 & 0x8000) == 0) {
    S_GCA_OBJ_EC(attr,0,0);
    return;
  }
  uVar2 = uVar3 & 0xf000;
  if (uVar2 == 0xb000) {
    S_GCA_OBJ_E8(attr,0,4);
    return;
  }
  if (uVar2 < 0xb001) {
    if (uVar2 == 0x9000) {
      S_GCA_OBJ_E8(attr,0,2);
      return;
    }
    if (uVar2 < 0x9001) {
      if (uVar2 != 0x8000) {
        S_GCA_OBJ_EC(attr,0,0,uVar3 & 0xfff);
        return;
      }
      S_GCA_OBJ_E8(attr,0,1);
      return;
    }
    if (uVar2 != 0xa000) {
      S_GCA_OBJ_EC(attr,0,0,uVar3 & 0xfff);
      return;
    }
    S_GCA_OBJ_E8(attr,0,3);
    return;
  }
  if (uVar2 == 0xd000) {
    S_GCA_OBJ_E8(attr,0,6);
    return;
  }
  if (uVar2 < 0xd001) {
    if (uVar2 != 0xc000) {
      S_GCA_OBJ_EC(attr,0,0,uVar3 & 0xfff);
      return;
    }
    S_GCA_OBJ_E8(attr,0,5);
    return;
  }
  if ((uVar2 != 0xe000) && (uVar2 != 0xf000)) {
    S_GCA_OBJ_EC(attr,0,0,uVar3 & 0xfff);
    return;
  }
  uVar3 = uVar3 & 0xfff;
  uVar2 = uVar4 & 0xf000;
  if ((uVar4 & 0x8000) == 0) {
    S_GCA_OBJ_1C0(attr,0);
    return;
  }
  if (uVar2 != 0xb000) {
    if (uVar2 < 0xb001) {
      if (uVar2 == 0x9000) {
        S_GCA_OBJ_1BC(attr,2);
        return;
      }
      if (uVar2 < 0x9001) {
        if (uVar2 != 0x8000) {
          S_GCA_OBJ_1C0();
          return;
        }
        S_GCA_OBJ_1BC(attr,1);
        return;
      }
      if (uVar2 != 0xa000) {
        S_GCA_OBJ_1C0();
        return;
      }
      S_GCA_OBJ_1BC(attr,3);
      return;
    }
    if (uVar2 == 0xd000) {
      S_GCA_OBJ_1BC(attr,6);
      return;
    }
    if (uVar2 < 0xd001) {
      if (uVar2 != 0xc000) {
        S_GCA_OBJ_1C0();
        return;
      }
      S_GCA_OBJ_1BC(attr,5);
      return;
    }
    if ((uVar2 != 0xe000) && (uVar2 != 0xf000)) {
      S_GCA_OBJ_1C0();
      return;
    }
    uVar4 = uVar4 & 0xfff;
    if (0x3fff < uVar3) {
      (attr->mvol).left = uVar3 + 0x8000;
      S_GCA_OBJ_1E0();
      return;
    }
    (attr->mvol).left = uVar3;
    if (0x3fff < uVar4) {
      (attr->mvol).right = uVar4 + 0x8000;
      S_GCA_OBJ_200();
      return;
    }
    (attr->mvol).right = uVar4;
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
    (attr->mvolmode).left = 7;
    (attr->mvolmode).right = 7;
    (attr->mvolx).left = *(short *)(puVar1 + 0x1b8);
    (attr->mvolx).right = *(short *)(puVar1 + 0x1ba);
    (attr->cd).volume.left = *(short *)(puVar1 + 0x1b0);
    (attr->cd).volume.right = *(short *)(puVar1 + 0x1b2);
    if ((*(ushort *)(puVar1 + 0x1aa) & 4) != 0) {
      (attr->cd).reverb = 1;
      S_GCA_OBJ_260();
      return;
    }
    (attr->cd).reverb = 0;
    if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) & 1) != 0) {
      (attr->cd).mix = 1;
      S_GCA_OBJ_28C();
      return;
    }
    (attr->cd).mix = 0;
    puVar1 = PTR_VOICE_00_LEFT_RIGHT_8019b114;
    (attr->ext).volume.left = *(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1b4);
    (attr->ext).volume.right = *(short *)(puVar1 + 0x1b6);
    if ((*(ushort *)(puVar1 + 0x1aa) & 8) != 0) {
      (attr->ext).reverb = 1;
      S_GCA_OBJ_2D0();
      return;
    }
    (attr->ext).reverb = 0;
    if ((*(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) & 2) != 0) {
      (attr->ext).mix = 1;
      S_GCA_OBJ_2FC();
      return;
    }
    (attr->ext).mix = 0;
    return;
  }
  S_GCA_OBJ_1BC(attr,4);
  return;
}



