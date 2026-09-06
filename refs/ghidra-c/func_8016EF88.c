
void FUN_8016ef88(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  
  DAT_8019ed08 = 1;
  DAT_8019ee5c = 0;
  iVar5 = 0;
  if (DAT_8019a36c != '\0') {
    puVar3 = &DAT_80068000;
    iVar2 = iVar5;
    cVar4 = DAT_8019a36c;
    do {
      iVar5 = iVar2 + 1;
      puVar3[0x7336] = cVar4;
      cVar4 = (&DAT_8019a36d)[iVar2];
      puVar3 = (undefined *)(iVar2 + -0x7ff97fff);
      iVar2 = iVar5;
    } while (cVar4 != '\0');
  }
  (&DAT_8006f336)[iVar5] = 0;
  FUN_8016b6d0();
  FUN_8016b650();
  FUN_8016ae94();
  FUN_80169f58();
  FUN_80169614();
  FUN_801694a4();
  FUN_80169a18();
  FUN_800f8fb8(0x95);
  FUN_800f71dc(0x8000);
  FUN_800f8d6c(0x57);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(0x66);
  FUN_800f6630(100);
  FUN_800f5574(1);
  iVar5 = FUN_800f53d4();
  if (iVar5 == 0) {
    FUN_800f5574(2);
    iVar5 = FUN_800f53d4();
    if (iVar5 == 0) {
      FUN_8016a208();
      FUN_8016ab14();
    }
    else {
      FUN_800f71dc(0x50);
      FUN_800f8d6c(0x96);
      FUN_8016a080();
      FUN_8016dce0();
      FUN_8016ab14();
    }
  }
  FUN_800f8f74(0x7d1f);
  FUN_800f8f74(0x7d20);
  FUN_800f8f74(0x3303);
  FUN_800f62bc(99);
  FUN_800f654c(0x11);
  FUN_800f8188(0x7d28);
  FUN_800f81e8(0x212c);
  FUN_800f654c(0x81);
  FUN_800f81e8(0x4200);
  FUN_80169290();
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d00(0x68);
  do {
    FUN_8016bb44();
    FUN_800f7210(0x68);
    FUN_800f6364();
    FUN_800f8d00(0x68);
    uVar1 = FUN_800f3b04(0x6a);
    FUN_800f56ac(uVar1);
    iVar5 = FUN_800f53c0();
  } while (iVar5 == 0);
  FUN_800f6630(100);
  FUN_800f5574(2);
  iVar5 = FUN_800f53d4();
  if (iVar5 != 0) {
    FUN_800f6240(0x7d1f);
    FUN_800f71dc(0x100);
    do {
      DAT_8019ee58 = (uint)*DAT_8019ed54;
      FUN_8016bb44();
      FUN_8016addc();
      *DAT_8019ed40 = *DAT_8019ed5c;
      FUN_800f5480();
      FUN_800f8058(8);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f5958(0x78);
      iVar5 = FUN_800f53d4();
    } while (iVar5 == 0);
    iVar5 = 0x7f;
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f8d6c(0x9c);
    FUN_800f71dc(1);
    FUN_80170084();
    FUN_800f71dc(0x100);
    FUN_800f8d6c(0x9e);
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f8d6c(0x9a);
    do {
      DAT_8019ee58 = DAT_8019ee58 - 1;
      DAT_8019ee5c = DAT_8019ee5c + -0x46;
      FUN_8016bb44();
      FUN_800f9644(0x20);
      FUN_800f6658(0x9c);
      FUN_800f5480();
      FUN_800f80d0(8);
      FUN_800f8274(0x9c);
      FUN_800f5dd4(0x9e);
      FUN_800f5dd4(0x9e);
      FUN_800f6658(0x9e);
      FUN_800f8274(0xe);
      FUN_800f6658(0x9c);
      FUN_800f5410();
      FUN_800f4064(0x80);
      FUN_8016db94();
      FUN_800f9644(0x20);
      FUN_800f6658(0x14);
      FUN_800f8274(0);
      FUN_800f8274(6);
      FUN_800f6658(0x9e);
      FUN_800f8274(0xe);
      FUN_800f6658(0x9c);
      FUN_8016db94();
      FUN_800f9644(0x20);
      FUN_800f62f0(0x9a);
      FUN_800f6658(0x9a);
      FUN_800f4264(3);
      iVar2 = FUN_800f41e8(0x202);
      if (iVar2 == 0) {
        FUN_800f658c(0x2105);
        iVar2 = FUN_800f64ec(2);
        if (iVar2 == 0) {
          FUN_800f5480();
          FUN_800f80d0(0x421);
          FUN_800f81b0(0x2105);
          FUN_801773fc(iVar5);
          iVar5 = iVar5 + -1;
        }
      }
      FUN_800f6658(0x14);
      FUN_800f8274(2);
      *DAT_8019ed44 = ~*DAT_8019ed44;
      FUN_800f8274(4);
      FUN_801700bc();
      FUN_800f9660(0x20);
      FUN_800f6564(0x2105);
      iVar2 = FUN_800f6434(0x202);
    } while (iVar2 != 0);
    DAT_8019ee58 = 0x400;
    DAT_8019ee5c = 0;
    FUN_8016bb44();
    FUN_800f654c(0x10);
    FUN_800f8188(0x7d28);
    FUN_800f71dc(0x7fff);
    FUN_800f8d00(0x2105);
    FUN_800f71dc(0xcc0);
    FUN_800f8d00(0x2107);
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_8016bb44();
    FUN_800f971c();
    do {
      FUN_800f8768(0x3d19);
      FUN_800f6364();
      FUN_800f5958(0x1000);
      iVar5 = FUN_800f53d4();
    } while (iVar5 == 0);
    FUN_8016bb44();
    FUN_800f971c();
    do {
      FUN_800f8768(0x3d19);
      FUN_800f6364();
      FUN_800f5958(0x2000);
      iVar5 = FUN_800f53d4();
    } while (iVar5 == 0);
    FUN_8016bb44();
    FUN_800f971c();
    do {
      FUN_800f8768(0x3d19);
      FUN_800f6364();
      FUN_800f5958(0x3000);
      iVar5 = FUN_800f53d4();
    } while (iVar5 == 0);
    FUN_8016bb44();
    FUN_800f971c();
    do {
      FUN_800f8768(0x3d19);
      FUN_800f6364();
      FUN_800f5958(0x4000);
      iVar5 = FUN_800f53d4();
    } while (iVar5 == 0);
    FUN_800f654c(0xc0);
    FUN_800f824c(0);
    FUN_800f654c(0xcc);
    FUN_800f824c(2);
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    do {
      FUN_800f6630(0);
      FUN_800f8768(0x43a3);
      FUN_800f6630(2);
      FUN_800f8768(0x4423);
      FUN_800f62bc(0);
      FUN_800f62bc(2);
      FUN_800f6364();
      FUN_800f5958(0xc);
      iVar5 = FUN_800f53d4();
    } while (iVar5 == 0);
    FUN_8016bb44();
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f8d6c(0x66);
    FUN_800f8d6c(0x92);
    FUN_800f71dc(0x70);
    FUN_800f8d6c(0x8e);
    FUN_800f71dc(0x3d19);
    FUN_800f8d6c(0x90);
    FUN_800f6240(0x7d20);
    do {
      FUN_8016bb44();
      FUN_800f6564(0x7d20);
      iVar5 = FUN_800f6434(0x202);
    } while (iVar5 != 0);
    FUN_800f71dc(0);
    FUN_800f8d6c(2);
    FUN_800f8d6c(4);
    FUN_800f71dc(0x4000);
    FUN_800f8d6c(0);
    FUN_800f8d6c(6);
    FUN_801700bc();
    FUN_8016bb44();
    FUN_800f654c(0x80);
    FUN_800f824c(0xa0);
    FUN_800f654c(0x11);
    FUN_800f8188(0x7d28);
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f8d6c(0x9c);
    FUN_800f71dc(0x800);
    FUN_800f8d6c(0x9e);
    do {
      DAT_8019ee58 = (uint)(*DAT_8019ed54 >> 1);
      FUN_8016bb44();
      FUN_800f9644(0x20);
      FUN_800f6658(0x9e);
      FUN_800f5480();
      FUN_800f80d0(0x10);
      FUN_800f8274(0x9e);
      FUN_800f6658(0x9e);
      FUN_800f8274(0xe);
      FUN_800f6658(0x9c);
      FUN_800f5410();
      FUN_800f4064(0x80);
      FUN_8016db94();
      FUN_800f9644(0x20);
      FUN_800f6658(0x14);
      FUN_800f8274(0);
      FUN_800f8274(6);
      FUN_800f6658(0x9e);
      FUN_800f8274(0xe);
      FUN_800f6658(0x9c);
      FUN_8016db94();
      FUN_800f9644(0x20);
      FUN_800f6658(0x14);
      FUN_800f8274(2);
      *DAT_8019ed44 = ~*DAT_8019ed44;
      FUN_800f8274(4);
      FUN_801700bc();
      FUN_800f9660(0x20);
      FUN_800f7270(0x9e);
      FUN_800f5958(0x200);
      iVar5 = FUN_800f53d4();
    } while (iVar5 == 0);
    DAT_8019ee58 = (uint)(*DAT_8019ed54 >> 1);
    FUN_800f71dc(0xb4);
    FUN_80170084();
    FUN_800f654c(1);
    FUN_800f81e8(0x1e00);
    FUN_800f654c(0x15);
    FUN_800f81e8(0x1e01);
    FUN_80169128();
    FUN_8016e490();
    FUN_800f6240(0x7d25);
    do {
      FUN_8016bb44();
    } while( true );
  }
  DAT_800da128 = 0x10;
  FUN_80169228();
  FUN_800f971c();
  FUN_800f81e8(0x4200);
  FUN_800f81e8(0x420b);
  FUN_800f81e8(0x420c);
  FUN_800f654c(0x80);
  FUN_800f81e8(0x2100);
  FUN_800f94b8();
  FUN_800f9448();
  *DAT_8019ed4c = *DAT_8019ed4c + 1;
  *DAT_8019ed68 = (&DAT_800d0000)[*DAT_8019ed4c];
  DAT_8019ed08 = 0;
  return;
}



