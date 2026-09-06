
void FUN_80106370(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    FUN_800f6630(0xcc);
    iVar1 = FUN_800f6434(0x202);
  } while (iVar1 != 0);
  FUN_800f654c(1);
  FUN_800f824c(0xda);
  FUN_800f824c(0xeb);
  FUN_800f8fb8(0xba);
  FUN_800f8fb8(0x8b);
  FUN_800f8fb8(0x8c);
  FUN_800f654c(0x70);
  FUN_800f824c(0xbb);
  FUN_80107b74();
  FUN_800fe778();
  FUN_80107830();
  do {
    FUN_800fe778();
    do {
      FUN_800f6630(0x7f);
      FUN_800f5574(2);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f62bc(0xda);
    FUN_800f6630(0xda);
    FUN_800f5574(8);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
LAB_80106438:
  FUN_800fe778();
LAB_80106440:
  do {
    FUN_800f654c(1);
    FUN_800f824c(0x7d);
    FUN_800f6630(3);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_80106830();
      FUN_800f654c(0xff);
LAB_80106508:
      FUN_800f8188(0x8fb);
      do {
        FUN_800fe778();
        do {
          FUN_800f6630(0x7f);
          FUN_800f5574(2);
          iVar1 = FUN_800f53d4();
        } while (iVar1 == 0);
        FUN_800f5da0(0xda);
        FUN_800f6630(0xda);
        FUN_800f5574(0);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      FUN_800f654c(1);
      FUN_800f824c(0xec);
      FUN_800f8fb8(0xda);
      return;
    }
    FUN_800f6630(2);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_80106830();
      FUN_800f6630(0xba);
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0x8c);
      FUN_800f3f38(uVar2);
      FUN_800f5140();
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0x8b);
      FUN_800f3f38(uVar2);
      FUN_800f5140();
      FUN_800f9690();
      FUN_800f6b68(0x712);
      goto LAB_80106508;
    }
    FUN_800f6630(3);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_80106860();
      FUN_800f62bc(0xe7);
      FUN_800f6630(0x8b);
      FUN_800f61e8();
      FUN_800f4248(1);
      FUN_800f824c(0x8b);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 != 0) goto LAB_80106438;
      FUN_800f6630(0x8c);
      FUN_800f5574(3);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f61e8();
LAB_80106628:
        FUN_800f824c(0x8c);
        goto LAB_80106438;
      }
LAB_801066a8:
      FUN_800f6630(0xba);
      FUN_800f5574(0x11);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_80106438;
      FUN_800f62bc(0xe7);
      FUN_800f62bc(0xba);
      FUN_80106830();
      FUN_80107830();
      FUN_80106908();
      goto LAB_80106440;
    }
    FUN_800f6630(3);
    FUN_800f4248(2);
    iVar1 = FUN_800f4120(2);
    if (iVar1 != 0) {
      FUN_800f6630(0x8c);
      FUN_800f5574(3);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6630(1);
        FUN_800f4248(4);
        iVar1 = FUN_800f4120(2);
        if (iVar1 != 0) goto LAB_801066f8;
        FUN_800f62bc(0x8c);
      }
      else {
        FUN_800f6630(3);
        FUN_800f4248(4);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) goto LAB_801066a8;
LAB_801066f8:
        FUN_800f6630(0x8c);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 == 0) {
          FUN_800f6630(3);
          FUN_800f4248(8);
          iVar1 = FUN_800f4120(2);
          if (iVar1 == 0) goto LAB_80106770;
          goto LAB_80106438;
        }
        FUN_800f6630(1);
        FUN_800f4248(8);
        iVar1 = FUN_800f4120(2);
        if (iVar1 != 0) goto LAB_80106438;
        FUN_800f5da0(0x8c);
      }
      FUN_800f62bc(0xe7);
      FUN_80106860();
      goto LAB_80106438;
    }
    FUN_80106860();
    FUN_800f62bc(0xe7);
    FUN_800f6630(0x8b);
    FUN_800f5ccc();
    FUN_800f4248(1);
    FUN_800f824c(0x8b);
    iVar1 = FUN_800f4120(2);
    if (iVar1 != 0) goto LAB_80106438;
    FUN_800f6630(0x8c);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f5ccc();
      goto LAB_80106628;
    }
LAB_80106770:
    FUN_800f6630(0xba);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) goto LAB_80106438;
    FUN_800f62bc(0xe7);
    FUN_800f5da0(0xba);
    FUN_80106830();
    FUN_80107830();
    FUN_801068b0();
  } while( true );
}



