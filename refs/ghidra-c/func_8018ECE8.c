
void SpuSetCommonAttr(SpuCommonAttr *attr)

{
  short sVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar4 = 0;
  uVar6 = attr->mask;
  bVar2 = uVar6 == 0;
  uVar5 = 0;
  if (bVar2) {
S_SCA_OBJ_2C:
    switch((attr->mvolmode).left) {
    default:
S_SCA_OBJ_90:
      uVar4 = (attr->mvol).left;
      uVar3 = 0;
      break;
    case 1:
      uVar3 = 0x8000;
      break;
    case 2:
      uVar3 = 0x9000;
      break;
    case 3:
      uVar3 = 0xa000;
      break;
    case 4:
      uVar3 = 0xb000;
      break;
    case 5:
      uVar3 = 0xc000;
      break;
    case 6:
      uVar3 = 0xd000;
      break;
    case 7:
      uVar3 = 0xe000;
    }
    if (uVar3 != 0) {
      sVar1 = (attr->mvol).left;
      uVar4 = 0x7f;
      if ((sVar1 < 0x80) && (uVar4 = 0, -1 < sVar1)) {
        uVar4 = (attr->mvol).left;
      }
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x180) = uVar4 & 0x7fff | uVar3;
  }
  else if ((uVar6 & 1) != 0) {
    if ((uVar6 & 4) != 0) goto S_SCA_OBJ_2C;
    goto S_SCA_OBJ_90;
  }
  if (bVar2) {
S_SCA_OBJ_EC:
    switch((attr->mvolmode).right) {
    default:
      goto S_SCA_OBJ_150;
    case 1:
      uVar4 = 0x8000;
      break;
    case 2:
      uVar4 = 0x9000;
      break;
    case 3:
      uVar4 = 0xa000;
      break;
    case 4:
      uVar4 = 0xb000;
      break;
    case 5:
      uVar4 = 0xc000;
      break;
    case 6:
      uVar4 = 0xd000;
      break;
    case 7:
      uVar4 = 0xe000;
    }
  }
  else {
    if ((uVar6 & 2) == 0) goto S_SCA_OBJ_194;
    if ((uVar6 & 8) != 0) goto S_SCA_OBJ_EC;
S_SCA_OBJ_150:
    uVar5 = (attr->mvol).right;
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    sVar1 = (attr->mvol).right;
    uVar5 = 0x7f;
    if ((sVar1 < 0x80) && (uVar5 = 0, -1 < sVar1)) {
      uVar5 = (attr->mvol).right;
    }
  }
  *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x182) = uVar5 & 0x7fff | uVar4;
S_SCA_OBJ_194:
  if ((bVar2) || ((uVar6 & 0x40) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1b0) = (attr->cd).volume.left;
  }
  if ((bVar2) || ((uVar6 & 0x80) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1b2) = (attr->cd).volume.right;
  }
  if ((bVar2) || ((uVar6 & 0x400) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1b4) = (attr->ext).volume.left;
  }
  if ((bVar2) || ((uVar6 & 0x800) != 0)) {
    *(short *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1b6) = (attr->ext).volume.right;
  }
  if ((bVar2) || ((uVar6 & 0x100) != 0)) {
    if ((attr->cd).reverb == 0) {
      S_SCA_OBJ_274();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) | 4;
  }
  if ((bVar2) || ((uVar6 & 0x200) != 0)) {
    if ((attr->cd).mix == 0) {
      S_SCA_OBJ_2C8();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) | 1;
  }
  if ((bVar2) || ((uVar6 & 0x1000) != 0)) {
    if ((attr->ext).reverb == 0) {
      S_SCA_OBJ_31C();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) | 8;
  }
  if ((bVar2) || ((uVar6 & 0x2000) != 0)) {
    if ((attr->ext).mix == 0) {
      S_SCA_OBJ_370();
      return;
    }
    *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) =
         *(ushort *)(PTR_VOICE_00_LEFT_RIGHT_8019b114 + 0x1aa) | 2;
  }
  return;
}



