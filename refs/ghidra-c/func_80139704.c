
void FUN_80139704(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_80139694();
  FUN_800f6b68(0x1440);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f5574(0x19);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5574(200);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574(0xee);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_800f654c(0x7e);
          FUN_800f824c(0x45);
          FUN_800f7594(0x41);
          do {
            FUN_800f6d70(0x1340);
            iVar1 = FUN_800f6434(2);
            if (iVar1 != 0) {
LAB_80139874:
              FUN_800f6b68(0x1440);
              FUN_800f8960(0x1340);
              FUN_800f6b68(0x1441);
              FUN_800f5410();
              uVar2 = FUN_800f3b04(*DAT_8019ed58 + 0x1341);
              FUN_800f3f38(uVar2);
              FUN_800f8960(0x1341);
              FUN_800f90ec(0x1440);
              FUN_800f90ec(0x1441);
              FUN_80120e9c();
              FUN_8012aac0();
              FUN_801264c0();
              return;
            }
            uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x1440);
            FUN_800f54d4(uVar2);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) {
              FUN_800f6d70(0x1341);
              FUN_800f5410();
              uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x1441);
              FUN_800f3f38(uVar2);
              FUN_800f5574(100);
              iVar1 = FUN_800f53c0();
              if (iVar1 == 0) goto LAB_80139874;
            }
            FUN_800f63bc();
            FUN_800f63bc();
            FUN_800f5da0(0x45);
            iVar1 = FUN_800f5b8c(0x202);
          } while (iVar1 != 0);
          FUN_80120e2c();
          FUN_800f7500(DAT_80199252);
          FUN_8011fba4();
          FUN_80126528();
        }
      }
    }
  }
  return;
}



