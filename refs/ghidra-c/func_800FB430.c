
undefined4 FUN_800fb430(void)

{
  ushort uVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  RECT local_30;
  int local_28;
  int local_24;
  int local_20;
  
  uVar5 = 1;
  FUN_800fb3f8();
  FUN_800f8f74(0x420b);
  FUN_800f8f74(0x420c);
  FUN_800f654c(1);
  FUN_800f8188(0x1e00);
  FUN_800f654c(0x15);
  FUN_800f8188(0x1e01);
  FUN_80169100();
  FUN_80176060();
  FUN_800f654c(3);
  FUN_800f8188(0x1700);
  FUN_800f654c(0x13);
  FUN_800f8188(0x212c);
  FUN_800f654c(2);
  FUN_800f8188(0x212d);
  FUN_800f8188(0x2130);
  FUN_800f654c(0x43);
  FUN_800f8188(0x2131);
  FUN_800f654c(1);
  FUN_800f8188(0x2105);
  iVar4 = 0x3fff;
  FUN_800fe870();
  FUN_800fbe44();
  FUN_800f654c(0x80);
  FUN_800f8188(0x2115);
  puVar2 = &DAT_801dad66;
  do {
    *puVar2 = 0xdf;
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar4);
  FUN_800f71dc(0x1880);
  FUN_800f8d6c(0x47);
  FUN_800f71dc(0x180);
  FUN_800f8d6c(0x45);
  FUN_800f71dc(0xe800);
  FUN_800f8d6c(0x3d);
  FUN_801766b0();
  FUN_800f71dc(0x3080);
  FUN_800f8d6c(0x47);
  FUN_800f71dc(0xe980);
  FUN_800f8d6c(0x3d);
  FUN_801766b0();
  local_30.x = 0x340;
  local_30.y = 0xf8;
  local_30.w = 0x40;
  local_30.h = 8;
  MoveImage(&local_30,0x300,0xf0);
  DrawSync(0);
  local_30.x = 0x360;
  local_30.y = 0xf8;
  local_30.w = 8;
  local_30.h = 8;
  MoveImage(&local_30,0x300,0xf8);
  DrawSync(0);
  FUN_800f71dc(0);
  do {
    *DAT_8019ed40 = (&DAT_80198a08)[*DAT_8019ed54];
    FUN_800f8768(0x300);
    FUN_800f6364();
    FUN_800f5958(0x4c);
    iVar4 = FUN_800f53d4();
  } while (iVar4 == 0);
  FUN_800f7500(0);
  FUN_800f71dc(0xeb00);
  FUN_800f8d6c(0x3d);
  do {
    *DAT_8019ed40 = (&DAT_80198a54)[*DAT_8019ed58];
    FUN_800f824c(0x47);
    *DAT_8019ed40 = (&DAT_80198a55)[*DAT_8019ed58];
    FUN_800f824c(0x48);
    FUN_800fbf50();
    FUN_800f5a90(0x14);
    iVar4 = FUN_800f53d4();
  } while (iVar4 == 0);
  FUN_800f7500(0);
  FUN_800f71dc(0xeb50);
  FUN_800f8d6c(0x3d);
  do {
    *DAT_8019ed40 = (&DAT_80198a54)[*DAT_8019ed58];
    FUN_800f824c(0x47);
    *DAT_8019ed40 = (&DAT_80198a55)[*DAT_8019ed58];
    FUN_800f5410();
    FUN_800f4008(0x18);
    FUN_800f824c(0x48);
    FUN_800fbf50();
    FUN_800f5a90(0x14);
    iVar4 = FUN_800f53d4();
  } while (iVar4 == 0);
  FUN_800f71dc(0);
  do {
    FUN_800f90ec(0xcdb);
    FUN_800f6364();
    FUN_800f5958(0x200);
    iVar4 = FUN_800f53d4();
  } while (iVar4 == 0);
  FUN_8017668c();
  FUN_800f71dc(0x60);
  FUN_800f8d00(0xa6d);
  FUN_800f71dc(0x68);
  FUN_800f8d00(0xa6f);
  FUN_800f8d00(0xa73);
  FUN_800f71dc(0x48);
  FUN_800f8d00(0xa71);
  FUN_800f71dc(0);
  FUN_800f8d6c(0x5a);
  FUN_800f8d6c(0x5c);
  FUN_800f6364();
  FUN_800f8d6c(0x5e);
  FUN_800f71dc(0xffff);
  FUN_800f8d6c(0x60);
  FUN_800f654c(1);
  FUN_800f824c(0x54);
  FUN_800f8fb8(0x7a);
  FUN_800f654c(1);
  FUN_800f824c(0x7e);
  FUN_800f654c(0xf);
  FUN_800f8188(0x2100);
  FUN_800f654c(0x81);
  FUN_800f8188(0x4200);
  do {
    do {
      FUN_800fe7b0();
      FUN_800f62bc(0x7e);
      FUN_800f6630(2);
      FUN_800f4248(0x80);
      iVar4 = FUN_800f4120(0x202);
      if (iVar4 == 0) {
        FUN_800f8fb8(0x54);
      }
      else {
        FUN_800f6630(0x54);
        iVar4 = FUN_800f6434(0x202);
        if (iVar4 == 0) goto LAB_800fbe08;
      }
      FUN_800f6630(0x7a);
      FUN_800f4248(7);
      iVar4 = FUN_800f4120(0x202);
    } while (iVar4 != 0);
    FUN_800f654c(0x10);
    FUN_800f824c(7);
    FUN_800f7500(0x20);
    FUN_800f7210(0xa6d);
    do {
      FUN_800f5958(0x20);
      iVar4 = FUN_800f53c0();
      if (iVar4 == 0) {
        FUN_800f9644(0x20);
        FUN_800f6cf4(0x8ec20);
        FUN_800f89d4(0xcfb);
        FUN_800f971c();
        FUN_800f3d48();
        FUN_800f9660(0x20);
      }
      FUN_800f5ea0();
      FUN_800f5ea0();
      FUN_800f5e48();
      FUN_800f5e48();
      FUN_800f5da0(7);
      iVar4 = FUN_800f5b8c(0x202);
    } while (iVar4 != 0);
    FUN_800f7210(0xa6d);
    FUN_800f5958(0x20);
    iVar4 = FUN_800f53d4();
    if (iVar4 == 0) {
      FUN_800f5e48();
      FUN_800f5e48();
      FUN_800f8d00(0xa6d);
    }
    FUN_800f654c(0x10);
    FUN_800f824c(7);
    FUN_800f7500(0x20);
    FUN_800f7210(0xa6f);
    do {
      FUN_800f5958(0x20);
      iVar4 = FUN_800f53c0();
      if (iVar4 == 0) {
        FUN_800f9644(0x20);
        FUN_800f6cf4(0x8ec40);
        FUN_800f89d4(0xd1b);
        FUN_800f971c();
        FUN_800f3d48();
        FUN_800f9660(0x20);
      }
      FUN_800f5e48();
      FUN_800f5e48();
      FUN_800f5ea0();
      FUN_800f5ea0();
      FUN_800f5da0(7);
      iVar4 = FUN_800f5b8c(0x202);
    } while (iVar4 != 0);
    FUN_800f7210(0xa6f);
    FUN_800f5958(0x20);
    iVar4 = FUN_800f53d4();
    if (iVar4 == 0) {
      FUN_800f5e48();
      FUN_800f5e48();
      FUN_800f8d00(0xa6f);
      FUN_800f654c(0x10);
      FUN_800f824c(7);
      FUN_800f7500(0x20);
      FUN_800f7210(0xa71);
      do {
        FUN_800f5958(0x20);
        iVar4 = FUN_800f53c0();
        if (iVar4 == 0) {
          FUN_800f9644(0x20);
          FUN_800f6cf4(0x8ec60);
          FUN_800f89d4(0xd3b);
          FUN_800f971c();
          FUN_800f3d48();
          FUN_800f9660(0x20);
        }
        FUN_800f5e48();
        FUN_800f5e48();
        FUN_800f5ea0();
        FUN_800f5ea0();
        FUN_800f5da0(7);
        iVar4 = FUN_800f5b8c(0x202);
      } while (iVar4 != 0);
      FUN_800f7210(0xa71);
      FUN_800f5958(0x20);
      iVar4 = FUN_800f53d4();
      if (iVar4 == 0) {
        FUN_800f5e48();
        FUN_800f5e48();
        FUN_800f8d00(0xa71);
      }
    }
    FUN_800f7210(0xa73);
    FUN_800f5958(0x20);
    iVar4 = FUN_800f53c0();
    if (iVar4 == 0) {
      iVar4 = 0x10 - (uint)(*DAT_8019ed54 >> 1);
      FUN_800f9644(0x20);
      FUN_800f71dc(0x1e);
      do {
        FUN_800f6cf4(0x8ec00);
        uVar1 = *DAT_8019ed44;
        local_28 = (uVar1 & 0x1f) * iVar4;
        if (local_28 < 0) {
          local_28 = local_28 + 0xf;
        }
        local_24 = (uVar1 >> 5 & 0x1f) * iVar4;
        local_28 = local_28 >> 4;
        if (local_24 < 0) {
          local_24 = local_24 + 0xf;
        }
        local_20 = (uVar1 >> 10 & 0x1f) * iVar4;
        local_24 = local_24 >> 4;
        if (local_20 < 0) {
          local_20 = local_20 + 0xf;
        }
        local_20 = local_20 >> 4;
        *DAT_8019ed44 = (ushort)local_28 | (short)local_24 << 5 | (short)local_20 << 10;
        FUN_800f87dc(0xddb);
        *DAT_8019ed54 = *DAT_8019ed54 - 2;
      } while (*DAT_8019ed54 != 0);
      *DAT_8019ed44 = 0;
      FUN_800f9660(0x20);
    }
    FUN_800f7210(0xa73);
    FUN_800f5e48();
    FUN_800f5e48();
    FUN_800f5c14();
    FUN_800f8d00(0xa73);
    iVar4 = FUN_800f53d4();
  } while (iVar4 == 0);
  FUN_800f71dc(0);
  do {
    FUN_800f6b68(0xcfb);
    FUN_800f8768(0xa6d);
    FUN_800f6364();
    FUN_800f5958(0x60);
    iVar4 = FUN_800f53d4();
  } while (iVar4 == 0);
  FUN_800f8fb8(0x7a);
  iVar4 = 0;
  do {
    FUN_800fe7b0();
    FUN_800f62bc(0x7e);
    FUN_800f6630(2);
    FUN_800f4248(0x80);
    iVar3 = FUN_800f4120(0x202);
    if (iVar3 == 0) {
      iVar4 = iVar4 + 1;
      if (0x19c0 < iVar4) {
        uVar5 = 0;
        goto LAB_800fbd40;
      }
      FUN_800f8fb8(0x54);
    }
    else {
LAB_800fbd40:
      FUN_800f6630(0x54);
      iVar3 = FUN_800f6434(0x202);
      if (iVar3 == 0) {
LAB_800fbe08:
        FUN_800f654c(0);
        FUN_800fd914();
        FUN_800fb3f8();
        return uVar5;
      }
    }
    FUN_800f71dc(0);
    do {
      FUN_800f6b68(0xa6d);
      FUN_800f8768(0xcfb);
      FUN_800f6364();
      FUN_800f5958(0x60);
      iVar3 = FUN_800f53d4();
    } while (iVar3 == 0);
    FUN_800f6630(0x7a);
    FUN_800f7864();
    FUN_800f4248(0x7e);
    FUN_800f5574(0x16);
    iVar3 = FUN_800f53c0();
    if (iVar3 == 0) {
      FUN_800f96e0();
      FUN_800f9644(0x20);
      FUN_800f6558(0xffff);
      FUN_800f89d4(0xd3d);
      FUN_800f89d4(0xcfd);
      FUN_800f971c();
      FUN_800f3d48();
      FUN_800f9660(0x20);
    }
  } while( true );
}



