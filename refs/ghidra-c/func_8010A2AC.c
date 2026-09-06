
void FUN_8010a2ac(void)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  
  FUN_800f6630(0xc5);
  iVar4 = FUN_800f6434(2);
  if (iVar4 == 0) {
    FUN_800f8fb8(0xc5);
  }
  else {
    FUN_800f6630(0xd1);
    iVar4 = FUN_800f6434(2);
    if (iVar4 != 0) {
      FUN_800f71dc(0);
      FUN_800f6564(0xfe6);
      iVar4 = FUN_800f6434(0x8080);
      if (iVar4 != 0) {
        *DAT_8019ed58 = *DAT_8019ed44;
        iVar4 = FUN_800f73e0(2);
        if (iVar4 == 0) {
          do {
            do {
              FUN_800f6c68(0x13cc30);
              FUN_800f6364();
              FUN_800f5574(0);
              iVar4 = FUN_800f53d4();
            } while (iVar4 == 0);
            FUN_800f5ea0();
            iVar4 = FUN_800f5c64(0x202);
          } while (iVar4 != 0);
        }
        FUN_800f8d6c(0x3d);
        FUN_800f8fb8(7);
        do {
          FUN_800f6c68(0x13cc30);
          FUN_800f6364();
          FUN_800f62bc(7);
          FUN_800f5574(0);
          iVar4 = FUN_800f53d4();
        } while (iVar4 == 0);
        FUN_800f5da0(7);
        pbVar5 = (byte *)FUN_800f3c3c(7);
        if (*pbVar5 < 0x14) {
          FUN_800f654c(0x14);
          FUN_800f5480();
          uVar6 = FUN_800f3c3c(7);
          FUN_800f7f48(uVar6);
          FUN_800f7864();
          FUN_800f824c(6);
        }
        else {
          FUN_800f654c(0);
          FUN_800f824c(6);
        }
        FUN_800f71dc(0);
        FUN_800f654c(0xff);
        do {
          FUN_800f8768(0x774);
          FUN_800f8768(0x834);
          FUN_800f6364();
          FUN_800f5958(0x28);
          iVar4 = FUN_800f53d4();
        } while (iVar4 == 0);
        FUN_800f7270(0x3d);
        FUN_800f6630(6);
        *DAT_8019ed58 = *DAT_8019ed44;
        do {
          FUN_800f6c68(0x13cc30);
          FUN_800f6364();
          FUN_80109378();
          uVar1 = *DAT_8019ed58;
          sVar2 = (short)((uint)uVar1 % 0x28);
          if ((uint)uVar1 % 0x28 < 0x14) {
            uVar6 = 0x774;
            uVar3 = (uVar1 / 0x28) * 0x14 + sVar2;
          }
          else {
            uVar6 = 0x834;
            uVar3 = ((uVar1 / 0x28) * 0x14 + sVar2) - 0x14;
          }
          *DAT_8019ed58 = uVar3;
          FUN_800f8960(uVar6);
          *DAT_8019ed58 = uVar1;
          FUN_800f63bc();
          FUN_800f654c(0);
          FUN_800f3d48();
          FUN_800f5da0(7);
          iVar4 = FUN_800f5b8c(0x202);
        } while (iVar4 != 0);
        FUN_800f654c(1);
        FUN_800f824c(0xe9);
      }
    }
  }
  return;
}



