
undefined4 FUN_80120070(void)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_800f824c(0x1d);
  FUN_800f8fb8(0x1e);
  uVar3 = (uint)*DAT_8019ed40;
  (&DAT_800d0000)[*DAT_8019ed4c] = 1;
  *DAT_8019ed4c = *DAT_8019ed4c - 1;
  FUN_800f93dc();
  FUN_800f8188(0x11f);
  FUN_800f9644(0x20);
  FUN_800f6658(0x1d);
  FUN_800f8d6c(0x1d);
  FUN_800f516c();
  FUN_800f5050();
  uVar2 = FUN_800f3c3c(0x1d);
  FUN_800f3f94(uVar2);
  FUN_800f8274(0x1d);
  FUN_800f9660(0x20);
  uVar1 = *DAT_8019ed54;
  if (uVar1 == 0xa67c) {
    if (uVar3 < 0x1d) {
                    /* WARNING: Could not recover jumptable at 0x80120434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&switchD_80120434::switchdataD_800f2814)[uVar3])();
      return uVar2;
    }
  }
  else if (uVar1 < 0xa67d) {
    if (uVar1 == 0x8887) {
      if (uVar3 < 8) {
                    /* WARNING: Could not recover jumptable at 0x80120264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&switchD_80120264::switchdataD_800f27dc)[uVar3])();
        return uVar2;
      }
    }
    else if (uVar1 < 0x8888) {
      if (uVar1 == 0x85b8) {
        if (uVar3 == 1) {
          FUN_80126480();
        }
        else if (uVar3 < 2) {
          if (uVar3 == 0) {
            FUN_80126418();
          }
        }
        else if (uVar3 == 2) {
          FUN_801264e8();
        }
        else if (uVar3 == 3) {
          FUN_80126550();
        }
      }
    }
    else if (uVar1 == 0x88b5) {
      if (uVar3 < 5) {
                    /* WARNING: Could not recover jumptable at 0x80120340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&switchD_80120340::switchdataD_800f27fc)[uVar3])();
        return uVar2;
      }
    }
    else if (uVar1 == 0x9ae1) {
      if (uVar3 == 1) {
        FUN_80120fbc();
      }
      else if (uVar3 < 2) {
        if (uVar3 == 0) {
          FUN_801210ac();
        }
      }
      else if (uVar3 == 2) {
        FUN_80120f1c();
      }
      else if (uVar3 == 3) {
        FUN_80120e2c();
      }
    }
  }
  else if (uVar1 == 0xb770) {
    if (uVar3 < 6) {
                    /* WARNING: Could not recover jumptable at 0x8012054c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&switchD_8012054c::switchdataD_800f288c)[uVar3])();
      return uVar2;
    }
  }
  else if (uVar1 < 0xb771) {
    if ((uVar1 == 0xb760) && (uVar3 < 0xd)) {
                    /* WARNING: Could not recover jumptable at 0x80120584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&switchD_80120584::switchdataD_800f28a4)[uVar3])();
      return uVar2;
    }
  }
  else if (uVar1 == 0xc401) {
    if (uVar3 == 0) {
      FUN_80135330();
    }
    else if (uVar3 == 1) {
      FUN_80136a58();
    }
  }
  else if (uVar1 == 0xce28) {
    if (uVar3 == 0) {
      FUN_801390dc();
    }
    else if (uVar3 == 1) {
      FUN_80139a24();
    }
  }
  return 0;
}



