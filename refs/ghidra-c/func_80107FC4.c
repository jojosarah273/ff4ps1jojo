
void FUN_80107fc4(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  FUN_800f6564(0x1702);
  FUN_800f8fb8(0x3e);
  FUN_800f5140();
  FUN_800f4f4c();
  uVar1 = FUN_800f3c3c(0x3e);
  FUN_800f7a40(uVar1);
  FUN_800f824c(0x3d);
  FUN_800f6564(0x1701);
  iVar2 = FUN_800f6434(2);
  if (iVar2 == 0) {
    FUN_800f62bc(0x3e);
    FUN_800f62bc(0x3e);
  }
  FUN_800f7270(0x3d);
  FUN_800f6c68(0x118000);
  FUN_800f824c(0x3d);
  FUN_800f6c68(0x118001);
  FUN_800f824c(0x3e);
  FUN_800f7270(0x3d);
  FUN_800f6630(0xb2);
  iVar2 = FUN_800f6434(2);
  if (iVar2 == 0) {
    *DAT_8019ed58 = *DAT_8019ed44;
    do {
      do {
        do {
          do {
            FUN_800f6364();
            uVar4 = *DAT_8019ed54;
            if (uVar4 < 32000) {
              FUN_800f6c68(0x118300);
            }
            else {
              if (uVar4 < 0x8100) {
                uVar4 = *DAT_8019ed54;
                *DAT_8019ed54 = uVar4 + 0x8300;
                DAT_1f8003c8 = (&DAT_8003e400)[*DAT_8019ed54];
              }
              else {
                *DAT_8019ed54 = uVar4 + 0x7f00;
                DAT_1f8003c8 = (&DAT_800414a0)[*DAT_8019ed54];
              }
              *DAT_8019ed54 = uVar4;
            }
            iVar2 = FUN_800f6434(0x202);
          } while (iVar2 != 0);
          uVar3 = (uint)*DAT_8019ed54;
          if ((int)(uVar3 - 1) < 32000) {
            DAT_1f8003c8 = (&DAT_800582ff)[uVar3];
          }
          else if ((int)(uVar3 - 1) < 0x8100) {
            DAT_1f8003c8 = (&DAT_800366ff)[uVar3];
          }
          else {
            DAT_1f8003c8 = (&DAT_8003939f)[uVar3];
          }
          FUN_800f5574(3);
          iVar2 = FUN_800f53d4();
        } while (iVar2 != 0);
        uVar3 = (uint)*DAT_8019ed54;
        if ((int)(uVar3 - 1) < 32000) {
          DAT_1f8003c8 = (&DAT_800582ff)[uVar3];
        }
        else if ((int)(uVar3 - 1) < 0x8100) {
          DAT_1f8003c8 = (&DAT_800366ff)[uVar3];
        }
        else {
          DAT_1f8003c8 = (&DAT_8003939f)[uVar3];
        }
        FUN_800f5574(4);
        iVar2 = FUN_800f53d4();
      } while (iVar2 != 0);
      FUN_800f5ea0();
      iVar2 = FUN_800f5c64(0x202);
    } while (iVar2 != 0);
    FUN_800f6364();
  }
  FUN_800f8d00(0x772);
  FUN_800f8fb8(0xdd);
  return;
}



