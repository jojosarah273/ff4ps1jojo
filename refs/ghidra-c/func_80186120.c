
void FUN_80186120(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
LAB_80186148:
  do {
    if (DAT_8019ef24 == 0) break;
    do {
      if ((DAT_8019ef24 == 1) || (DAT_8019ef24 == 3)) goto LAB_80186148;
    } while (DAT_8019ef24 == 4);
  } while ((DAT_8019ef24 & 0xf0) == 0xe0);
  DAT_8019eed8 = DAT_8019ef04;
  if (DAT_800d1e00 == 0x90) {
    FUN_801875ac();
    DAT_800d1e00 = 0;
    return;
  }
  if (DAT_8019eeb8 < 10) {
    if (DAT_800d1e00 == 1) {
      if (DAT_8019ef0c == DAT_800d1e01) {
        DAT_8019ef0c = 0;
      }
      goto LAB_801861e0;
    }
  }
  else {
LAB_801861e0:
    if (DAT_800d1e00 == 1) {
      if (DAT_800d1e01 == 0x45) {
        iVar1 = FUN_80188240();
        if ((iVar1 == 1) && (DAT_8019ef0c == 0x23)) {
          FUN_801881ac();
        }
        DAT_800d1e00 = 0;
        DAT_800d1e01 = 0;
        DAT_8019ef24 = 0;
        return;
      }
      if (DAT_800d1e01 == 0xd) {
        if (DAT_8019ef0c == 0x3f) {
          DAT_800d1e01 = 0x4f;
        }
        else if (DAT_8019ef0c == 0x4f) {
          DAT_800d1e00 = 0;
          DAT_8019ef24 = 0;
          return;
        }
      }
      if ((DAT_800d1e01 == 0x12) && (DAT_8019ef0c == 0x4b)) {
        DAT_800d1e01 = 0x4e;
      }
    }
  }
  if (((DAT_800d1e00 == 2) && (DAT_800d1e01 == 0x47)) && (DAT_8019ef0c == 0x47)) {
    DAT_8019ef24 = 0;
    DAT_8019eed8 = DAT_8019ef04;
    DAT_800d1e00 = 0;
    return;
  }
  if (((DAT_800d1e00 == 4) && (DAT_800d1e01 == 0xc)) && (DAT_8019ef0c == 0)) {
    DAT_800d1e01 = 0x50;
  }
  if (DAT_800d1e00 == 1) {
    if (DAT_800d1e01 == 0x30) {
      DAT_800d1e05 = (undefined1)DAT_8019ef0c;
    }
    if (DAT_800d1e01 == 0x35) {
      DAT_800d1e00 = 0;
      DAT_8019ef24 = 0;
      return;
    }
    if (DAT_800d1e01 == 0x37) {
      DAT_800d1e00 = 0;
      DAT_8019ef24 = 0;
      return;
    }
  }
  if (DAT_8019edc6 == 0) {
LAB_801863e8:
    if (((DAT_800d1e00 == 2) && (DAT_8019ef24 == 0x85)) &&
       ((uVar4 = (uint)DAT_800d1e01, uVar4 != 0x5c &&
        ((((uVar4 != 0x12 && (uVar4 != 0x2f)) && (uVar4 != 0x4b)) &&
         ((uVar4 != 0x5d && (uVar4 != 0x60)))))))) {
      if (uVar4 == 0) {
        FUN_80189d38(10,0,0,0x3c,0,0,0);
        FUN_80189d38(0xb,0,0,0x3c,0,0,0);
        DAT_8019eef4 = 0;
        return;
      }
      DAT_8019eef0 = *(ushort *)(&UNK_8019ab18 + uVar4 * 2);
      DAT_8019eef4 = 0;
      if (0x1e < (DAT_8019eef0 & 0xff)) {
        DAT_8019eef0 = DAT_8019eef0 & 0xff00 | DAT_8019eef0 - 1;
      }
      if ((DAT_8019eef0 & 0x4000) != 0) {
        uVar2 = DAT_8019eef0 & 0x1f00;
        DAT_8019eefa = (ushort)(uVar2 >> 8);
        DAT_8019ef06 = *(undefined2 *)(&DAT_8019aab0 + (uint)DAT_8019eefa * 4);
        DAT_8019eef4 = 0x4000;
        DAT_8019eeba = (undefined2)
                       ((*(short *)(&DAT_8019aab0 + ((uVar2 >> 8) << 2 | 2)) * 0x3c) / 100);
        DAT_8019eef2 = DAT_8019eeba;
      }
      uVar2 = DAT_8019eef0 & 0xff;
      DAT_8019ef18 = (ushort)uVar2;
      if ((DAT_8019eef0 & 0x8000) != 0) {
        DAT_8019eef4 = DAT_8019eef4 | 0x8000;
        DAT_8019ef32 = DAT_8019ef18 + 1;
      }
      DAT_8019ef00 = DAT_8019ef18 & 0xf;
      DAT_8019eeee = (undefined2)(uVar2 >> 4);
      DAT_8019eef0 = DAT_8019ef18;
      if ((uVar4 == 0x47) || (uVar4 == 0x22)) {
        FUN_80189d38(10,0,uVar2,0x3c,0,0x4f,0x4f);
      }
      else {
        FUN_80189d38(10,0,uVar2,0x3c,0,0x7f,0x7f);
      }
      if ((uVar4 != 0x47) && (uVar4 != 0x22)) {
        return;
      }
      FUN_80189d38(0xb,0,(int)((DAT_8019eef0 + 1) * 0x10000) >> 0x10,0x3c,0,0x4f,0x4f);
      return;
    }
  }
  else if (DAT_800d1e00 == 2) {
    if (DAT_800d1e01 == 0x2a) {
      DAT_800d1e00 = 0;
      DAT_8019ef24 = 0;
      return;
    }
    goto LAB_801863e8;
  }
  DAT_8019ef28 = (uint)DAT_800d1e01;
  DAT_8019ef24 = (uint)DAT_800d1e00;
  if (DAT_8019ef24 == 0x88) {
    if (DAT_8019ef30 != 1) {
      DAT_8019ef28 = (uint)DAT_800d1e01;
      DAT_8019ef24 = 4;
      goto LAB_801866ac;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    if (DAT_8019ef24 != 0x8a) goto LAB_801866ac;
  }
  FUN_80187404(uVar3);
  DAT_8019ef24 = 0;
LAB_801866ac:
  if (DAT_8019ef24 != 2) {
    DAT_800d1e00 = 0;
    DAT_800d1e01 = 0;
    return;
  }
  if (DAT_8019ef28 == 0x5c) {
    DAT_8019ef28 = 0x48;
  }
  else if (DAT_8019ef28 < 0x5d) {
    if (DAT_8019ef28 == 0x2f) {
      if ((DAT_8019ef0c == 0x4f) || (DAT_8019ef0c == 0xd)) {
        DAT_800d1e00 = 0;
        DAT_800d1e01 = 0;
        DAT_8019ef24 = 0;
        return;
      }
      DAT_8019ef28 = 0x46;
    }
    else if (DAT_8019ef28 < 0x30) {
      if (DAT_8019ef28 != 0x12) {
        DAT_800d1e00 = 0;
        DAT_800d1e01 = 0;
        return;
      }
      DAT_8019ef28 = 0x45;
    }
    else {
      if (DAT_8019ef28 != 0x4b) {
        DAT_800d1e00 = 0;
        DAT_800d1e01 = 0;
        return;
      }
      DAT_8019ef28 = 0x47;
    }
  }
  else if (DAT_8019ef28 == 0x60) {
    DAT_8019ef28 = 0x4a;
  }
  else if (DAT_8019ef28 < 0x61) {
    if (DAT_8019ef28 != 0x5d) {
      DAT_800d1e00 = 0;
      DAT_800d1e01 = 0;
      return;
    }
    if (DAT_8019ef0c == 0x12) {
      DAT_8019ef34 = 1;
    }
    DAT_8019ef28 = 0x49;
  }
  else if (DAT_8019ef28 == 0x7d) {
    DAT_8019ef28 = 0x4d;
  }
  else {
    if (DAT_8019ef28 != 0x7f) {
      DAT_800d1e00 = 0;
      DAT_800d1e01 = 0;
      return;
    }
    if (DAT_8019ef0c == 0x12) {
      DAT_800d1e00 = 0;
      DAT_800d1e01 = 0;
      DAT_8019ef24 = 0;
      return;
    }
    if (DAT_8019ef0c == 0x4e) {
      DAT_800d1e00 = 0;
      DAT_800d1e01 = 0;
      DAT_8019ef24 = 0;
      return;
    }
    DAT_8019ef28 = 0x4b;
  }
  DAT_800d1e00 = 0;
  DAT_800d1e01 = 0;
  DAT_8019ef24 = 1;
  return;
}



