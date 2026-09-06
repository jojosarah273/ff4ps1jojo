
void FUN_801391d4(char param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != '\0') goto LAB_8013922c;
  FUN_80177dec();
  FUN_80177dec();
LAB_801391f4:
  FUN_8011f884();
  FUN_801395e4();
  FUN_80139b44();
  FUN_800f71dc(0x3188);
  FUN_80126070();
  FUN_8011f684();
  FUN_801264e8();
LAB_8013922c:
  do {
    FUN_800f6658(1);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f71dc(0x1340);
      FUN_8012e844();
      FUN_800f5410();
      return;
    }
    FUN_800f6630(0);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6630(0xe2);
      FUN_800f5574(0x11);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_801398f4();
      }
      else {
        FUN_80139704();
      }
    }
    FUN_800f6630(1);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6564(0x1bb1);
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) {
        FUN_800f6240(0x1bb1);
        goto LAB_80139314;
      }
      FUN_800f8f74(0x1bb1);
LAB_80139454:
      FUN_800f6564(0x1bb0);
      FUN_800f5574(6);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6240(0x1bb0);
        goto LAB_801391f4;
      }
      FUN_800f6564(0x1bb2);
      uVar2 = FUN_800f3c3c(0xe2);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_801391f4;
      FUN_800f6240(0x1bb2);
      FUN_800f654c(8);
      do {
        FUN_800f9644(0x20);
        FUN_800f62f0(0x99);
        FUN_800f62f0(0x99);
        FUN_800f9660(0x20);
        FUN_800f9200();
        FUN_801395e4();
        FUN_8011f684();
        FUN_801264e8();
        FUN_800f93dc();
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(0x202);
      } while (iVar1 != 0);
    }
    else {
LAB_80139314:
      FUN_800f6630(1);
      FUN_800f4248(2);
      iVar1 = FUN_800f4120(2);
      if (iVar1 != 0) {
LAB_80139364:
        FUN_800f6630(1);
        FUN_800f4248(8);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) goto LAB_80139384;
LAB_80139434:
        FUN_800f6630(1);
        FUN_800f4248(4);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) goto LAB_80139454;
        goto LAB_801391f4;
      }
      FUN_800f6564(0x1bb1);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 != 0) {
        FUN_800f8f74(0x1bb1);
        goto LAB_80139364;
      }
      FUN_800f6240(0x1bb1);
LAB_80139384:
      FUN_800f6564(0x1bb0);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 != 0) {
        FUN_800f5d24(0x1bb0);
        goto LAB_80139434;
      }
      FUN_800f6564(0x1bb2);
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) goto LAB_80139434;
      FUN_800f5d24(0x1bb2);
      FUN_800f654c(8);
      do {
        FUN_800f9644(0x20);
        FUN_800f5dd4(0x99);
        FUN_800f5dd4(0x99);
        FUN_800f9660(0x20);
        FUN_800f9200();
        FUN_801395e4();
        FUN_8011f684();
        FUN_801264e8();
        FUN_800f93dc();
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(0x202);
      } while (iVar1 != 0);
    }
    FUN_8011f884();
    FUN_800f7270(2);
    FUN_800f8d6c(0);
  } while( true );
}



