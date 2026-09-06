
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80186810(void)

{
  bool bVar1;
  short sVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  DAT_8019ef04 = DAT_8019ef04 + 1;
  iVar5 = FUN_80188240();
  if ((1 < iVar5) && (DAT_8019ed94 = DAT_8019ed94 + 1, 300 < DAT_8019ed94)) {
    FUN_801888bc();
  }
  iVar5 = FUN_80188240();
  if (((0 < iVar5) && (DAT_8019ef8c < DAT_8019ef88)) && (DAT_8019ef88 - DAT_8019ef8c < 8)) {
    FUN_801888bc();
  }
  if (((DAT_8019ef0c == 0x49) && (iVar5 = FUN_80188240(), iVar5 == 0)) &&
     ((DAT_8019ef34 == 1 && (DAT_8019ef24 == 0)))) {
    DAT_8019ef34 = 0;
    DAT_8019ef28 = 0x12;
    DAT_8019ef24 = 1;
  }
  if (DAT_800d2140 == -1) {
    SpuSetKey(0,0xffffff);
    DAT_800d2140 = '\0';
  }
  if (((DAT_8019ef18 == 0x36) && (DAT_8019ef0c == 0x3e)) && (iVar5 = FUN_80188240(), iVar5 == 1)) {
    FUN_80189d38(10,0,0,0x3c,0,0,0);
    FUN_80189d38(0xb,0,0,0x3c,0,0,0);
  }
  FUN_80189190();
  FUN_801876e0();
  if (DAT_8019ef24 != 1) goto LAB_80186afc;
  DAT_8019ef20 = 1;
  switch(DAT_8019ef28) {
  case 7:
    uVar3 = 3;
    goto LAB_80186a64;
  default:
    DAT_8019ef20 = 0;
    break;
  case 0xb:
    uVar3 = 2;
    goto LAB_80186a64;
  case 0x1a:
    uVar3 = 1;
    if (DAT_8019ef0c == 0x1a) {
      DAT_8019ef20 = 1;
      DAT_8019ef24 = 0;
      return;
    }
LAB_80186a64:
    DAT_8019eee0 = 0;
    DAT_8019eecc = uVar3;
    break;
  case 0x27:
    if (DAT_8019ef0c == 0x27) {
      DAT_8019ef20 = 1;
      DAT_8019ef24 = 0;
      return;
    }
    DAT_8019eecc = 0;
    DAT_8019eee0 = 0;
    break;
  case 0x35:
    DAT_8019eecc = 0;
    DAT_8019eee0 = 1;
    break;
  case 0x36:
    DAT_8019eecc = 1;
    DAT_8019eee0 = 1;
    break;
  case 0x37:
    DAT_8019eecc = 2;
    DAT_8019eee0 = 1;
    DAT_8019ef20 = 1;
  }
  if (DAT_8019ef20 != 0) {
    if (0x34 < DAT_8019ef28) {
      DAT_8019ef20 = 0;
    }
    if ((int)DAT_8019ef0c == DAT_8019ef28) {
      DAT_8019ef24 = 0;
      return;
    }
    FUN_80189d38(10,0,0,0x3c,0,0,0);
    FUN_80189d38(0xb,0,0,0x3c,0,0,0);
    DAT_8019ef24 = 0xe3;
    DAT_8019ef0c = (short)DAT_8019ef28;
  }
LAB_80186afc:
  if ((((DAT_8019eef4 & 0x4000) != 0) && ((DAT_8019eef4 & 0x4000) != 0)) &&
     (DAT_8019eef2 = DAT_8019eef2 + -1, DAT_8019eef2 == 0)) {
    DAT_8019ef06 = DAT_8019ef06 + -1;
    DAT_8019eef0 = DAT_8019ef18;
    DAT_8019eef2 = DAT_8019eeba;
    if (DAT_8019ef06 == 0) {
      if ((DAT_8019eef4 & 0x8000) == 0) {
        DAT_8019eef4 = 0;
        goto LAB_80186bbc;
      }
      DAT_8019eef4 = 0;
      DAT_8019eef0 = DAT_8019ef32;
      DAT_8019eeee = DAT_8019ef32 >> 4;
      DAT_8019ef00 = DAT_8019ef32 & 0xf;
    }
    FUN_80189d38(10,0,(int)(short)DAT_8019eef0,0x3c,0,0x7f,0x7f);
  }
LAB_80186bbc:
  if (DAT_8019ef24 == 0x85) {
    uVar8 = 0;
    if (DAT_8019ef0a == 2) {
      DAT_8019ef0a = 0x40;
      DAT_8019ef24 = 0;
      DAT_8019ef20 = 0;
      goto LAB_801873dc;
    }
LAB_8018739c:
    FUN_8018746c(uVar8,0);
    goto LAB_801873dc;
  }
  if (DAT_8019ef24 < 0x86) {
    if (DAT_8019ef24 < 5) {
      if ((DAT_8019ef24 < 3) && (DAT_8019ef24 != 1)) {
        if (DAT_8019ef24 < 2) goto LAB_801873dc;
        if (DAT_8019ef28 == 0) {
          FUN_80189d38(10,0,0,0x3c,0,0,0);
          FUN_80189d38(0xb,0,0,0x3c,0,0,0);
          DAT_8019eef4 = 0;
        }
        else {
          DAT_8019eef0 = *(ushort *)(&UNK_8019ab18 + DAT_8019ef28 * 2);
          DAT_8019eef4 = 0;
          if (0x1e < (DAT_8019eef0 & 0xff)) {
            DAT_8019eef0 = DAT_8019eef0 & 0xff00 | DAT_8019eef0 - 1;
          }
          if ((DAT_8019eef0 & 0x4000) != 0) {
            uVar6 = DAT_8019eef0 & 0x1f00;
            DAT_8019eefa = (ushort)(uVar6 >> 8);
            DAT_8019ef06 = *(short *)(&DAT_8019aab0 + (uint)DAT_8019eefa * 4);
            DAT_8019eef4 = 0x4000;
            DAT_8019eeba = (short)((*(short *)(&DAT_8019aab0 + ((uVar6 >> 8) << 2 | 2)) * 0x3c) /
                                  100);
            DAT_8019eef2 = DAT_8019eeba;
          }
          uVar6 = DAT_8019eef0 & 0xff;
          DAT_8019ef18 = (ushort)uVar6;
          if ((DAT_8019eef0 & 0x8000) != 0) {
            DAT_8019eef4 = DAT_8019eef4 | 0x8000;
            DAT_8019ef32 = DAT_8019ef18 + 1;
          }
          DAT_8019ef00 = DAT_8019ef18 & 0xf;
          DAT_8019eeee = (ushort)(uVar6 >> 4);
          DAT_8019eef0 = DAT_8019ef18;
          if ((DAT_8019ef28 == 0x47) || (DAT_8019ef28 == 0x22)) {
            FUN_80189d38(10,0,uVar6,0x3c,0,0x4f,0x4f);
          }
          else {
            FUN_80189d38(10,0,uVar6,0x3c,0,0x7f,0x7f);
          }
          if ((DAT_8019ef28 == 0x47) || (DAT_8019ef28 == 0x22)) {
            FUN_80189d38(0xb,0,(int)((DAT_8019eef0 + 1) * 0x10000) >> 0x10,0x3c,0,0x4f,0x4f);
          }
        }
      }
      else if ((int)DAT_8019ef0c != DAT_8019ef28) {
        DAT_8019eeec = FUN_80188240();
        if (DAT_8019eeec == 1) {
          FUN_801881ac();
        }
        else if ((DAT_8019eeec == 2) || (DAT_8019eeec != 0)) goto LAB_801873dc;
        DAT_8019ef1a = 6;
        if (DAT_8019ef0a != 0) {
          FUN_80187aec();
        }
        if ((DAT_8019ef18 != 0x36) || (DAT_8019ef28 != 0x3e)) {
          FUN_80189d38(10,0,0,0x3c,0,0,0);
          FUN_80189d38(0xb,0,0,0x3c,0,0,0);
          DAT_8019eef4 = 0;
        }
        bVar1 = DAT_8019ef24 == 4;
        DAT_8019ef24 = 0xe0;
        if (bVar1) {
          DAT_8019ef24 = 0xe2;
        }
        DAT_8019ef0c = (short)DAT_8019ef28;
        goto LAB_801873dc;
      }
    }
    else {
      if ((DAT_8019ef24 < 0x11) ||
         ((0x14 < DAT_8019ef24 && ((0x19 < DAT_8019ef24 || (DAT_8019ef24 < 0x18))))))
      goto LAB_801873dc;
      iVar7 = (int)*(short *)(&UNK_8019afe8 + (DAT_8019ef24 - 0x11) * 2);
      iVar5 = iVar7;
      if (iVar7 < 0) {
        iVar5 = iVar7 + 0xf;
      }
      uVar6 = iVar5 >> 4;
      DAT_8019eeee = (ushort)uVar6;
      iVar7 = iVar7 + uVar6 * -0x10;
      DAT_8019ef00 = (ushort)iVar7;
      FUN_80189d38(0,0,(int)((iVar7 + (uVar6 & 0xffff) * 0x10 + -1) * 0x10000) >> 0x10,0x3c,0,0x7f,
                   0x7f);
    }
LAB_80186fec:
    DAT_8019ef24 = 0;
  }
  else {
    if (DAT_8019ef24 != 0xa0) {
      if (0xa0 < DAT_8019ef24) {
        if (DAT_8019ef24 == 0xe1) {
          iVar5 = FUN_80188240();
          if ((iVar5 != 0) || (iVar5 = FUN_801917f8(1,0), iVar5 == 0)) goto LAB_801873dc;
          uVar4 = DAT_8019ef1a - 1;
          if (0 < (short)DAT_8019ef1a) {
            DAT_8019ef1a = uVar4;
            if (0 < (int)((uint)uVar4 << 0x10)) goto LAB_801873dc;
            DAT_8019ef1a = 0;
          }
          FUN_80188a60(0);
          if (DAT_8019ef8c < DAT_8019ef88) {
            FUN_80189698();
          }
          DAT_8019ef1a = 0;
          DAT_8019ef0a = 0x20;
        }
        else {
          if (DAT_8019ef24 < 0xe2) {
            if (DAT_8019ef24 != 0xe0) goto LAB_801873dc;
          }
          else if (DAT_8019ef24 != 0xe2) {
            if (DAT_8019ef24 == 0xe3) {
              DAT_8019eeec = FUN_80188240();
              if (DAT_8019eeec == 1) {
                FUN_801881ac();
              }
              else if ((DAT_8019eeec == 2) || (DAT_8019eeec != 0)) goto LAB_801873dc;
              DAT_8019ef24 = 0xe1;
              DAT_8019ef1a = 6;
            }
            goto LAB_801873dc;
          }
          iVar5 = FUN_80188240();
          if (((iVar5 != 0) || (DAT_8019ef0a != 0)) || (iVar5 = FUN_801917f8(1,0), iVar5 == 0))
          goto LAB_801873dc;
          uVar4 = DAT_8019ef1a - 1;
          if (0 < (short)DAT_8019ef1a) {
            DAT_8019ef1a = uVar4;
            if (0 < (int)((uint)uVar4 << 0x10)) goto LAB_801873dc;
            DAT_8019ef1a = 0;
          }
          FUN_80188a60(0);
          FUN_80189698();
          FUN_801917b8();
          if (DAT_8019ef24 == 0xe0) {
            DAT_8019eeb8 = 0x2fff;
          }
          else {
            DAT_8019eeb8 = 0;
          }
          DAT_8019eee8 = (uint)DAT_8019ef0c;
          if (0x50 < DAT_8019eee8) {
            DAT_8019eee8 = 0;
          }
          sVar2 = *(short *)((int)&DAT_8019ac24 + (DAT_8019eee8 << 3 | 4));
          DAT_8019eed4 = (&DAT_8019ac24)[DAT_8019eee8 * 2];
          if (DAT_8019eed4 == 0) {
            DAT_8019ef24 = 0;
            return;
          }
          DAT_8019ef2c = 0;
          DAT_8019eee4 = 0;
          if (DAT_8019eee8 % 10 != 0) {
            DAT_8019eee4 = 0;
            DAT_8019ef2c = 0;
            do {
              iVar5 = (DAT_8019eee8 / 10) * 10 + DAT_8019eee4;
              DAT_8019eee4 = DAT_8019eee4 + 1;
              DAT_8019ef2c = DAT_8019ef2c + (&DAT_8019ac24)[iVar5 * 2];
            } while (DAT_8019eee4 < DAT_8019eee8 % 10);
          }
          iVar5 = DsPosToInt(*(DslLOC **)(&UNK_8019afc4 + (DAT_8019eee8 / 10) * 4));
          DAT_8019eee4 = iVar5 + DAT_8019ef2c * 2;
          DsIntToPos(DAT_8019eee4,(DslLOC *)&DAT_8019ef38);
          if (sVar2 < 1) {
            _DAT_8019eec8 = 0;
          }
          else {
            _DAT_8019eec8 = *(uint *)((int)&DAT_8019ac24 + (DAT_8019eee8 << 3 | 4));
          }
          FUN_80187e5c(0x77c00,&DAT_801e6230,4,DAT_8019eed4,1,_DAT_8019eec8 & 0xffff,0x16,0x17,100,
                       100,&DAT_8019ef38);
          FUN_80187ec4();
          DAT_8019eeda = DAT_8019ef04;
          if (DAT_8019ef24 != 0xe0) {
            DAT_8019ef24 = 0xa0;
            FUN_8018767c(DAT_8019eeb8);
            goto LAB_801873dc;
          }
        }
        goto LAB_80186fec;
      }
      if (DAT_8019ef24 == 0x87) {
        FUN_8018746c(0,1);
        goto LAB_801873dc;
      }
      uVar8 = 1;
      if (DAT_8019ef24 < 0x87) goto LAB_8018739c;
      if (DAT_8019ef24 != 0x89) {
        if (DAT_8019ef24 == 0x90) {
          FUN_801875ac();
        }
        goto LAB_801873dc;
      }
    }
    FUN_80187504(1,0);
  }
LAB_801873dc:
  if (DAT_8019ef24 == 0) {
    DAT_8019ef28 = 0;
  }
  return;
}



