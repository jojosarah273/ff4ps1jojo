
void FUN_8015d9a8(void)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar3 = FUN_800f3c3c(0);
  FUN_800f3b04(0);
  iVar4 = FUN_800f3b04(0x2000);
  cVar2 = *(char *)(iVar4 + 0x1557) + '\x01';
  *(char *)(iVar4 + 0x1557) = cVar2;
  if (cVar2 == '\x01') {
    *(undefined1 *)(iVar4 + 0x1557) = 0;
    FUN_8005a234();
    *(undefined1 *)(iVar3 + 0x8a) = 0;
    do {
      if (*(char *)((uint)*(byte *)(iVar3 + 0x8a) + iVar4 + 0x1540) == '\0') {
        if ((*(byte *)((uint)*(byte *)(iVar3 + 0x8a) * 2 + iVar4 + 0x9eb) & 0x20) != 0) {
          *DAT_8019ed40 = *(byte *)(iVar3 + 0x8a);
          FUN_80152cdc();
          iVar5 = (uint)*(ushort *)(iVar3 + 0xa6) + iVar4;
          if ((((*(byte *)(iVar5 + 3) & 0xc0) == 0) && ((*(byte *)(iVar5 + 5) & 0x42) == 0)) &&
             ((*(byte *)(iVar5 + 6) & 0x80) == 0)) {
            iVar5 = (uint)*(byte *)(iVar3 + 0x8a) * 2 + iVar4;
            *(undefined1 *)(iVar5 + 0x14d4) = 2;
            *(undefined1 *)(iVar5 + 0x14d5) = 0;
          }
        }
      }
      cVar2 = *(char *)(iVar3 + 0x8a) + '\x01';
      *(char *)(iVar3 + 0x8a) = cVar2;
    } while (cVar2 != '\r');
    *(undefined1 *)(iVar4 + 0x1907) = 0;
    FUN_80061c8c();
    *(undefined1 *)(iVar4 + 0x13c2) = 0xff;
    if (*(char *)(iVar4 + 0x1907) != '\0') {
      *(undefined1 *)(iVar4 + 0x13c2) = 0xf8;
      *(undefined1 *)(iVar4 + 0x13c3) = 3;
      *(undefined1 *)(iVar4 + 0x14ca) = 0x38;
      FUN_800f654c(5);
      FUN_80150c38();
      FUN_80059af4();
      FUN_800f654c(0x10);
      FUN_80150c38();
      FUN_800f654c(2);
      FUN_80150c38();
    }
  }
  FUN_8005a234();
  FUN_8016e870();
  cVar2 = *(char *)(iVar4 + 0x157c);
  if ((cVar2 != -1) && (*(char *)(iVar4 + 0x157c) = cVar2 + '\x01', cVar2 == '\x04')) {
    *(undefined1 *)(iVar4 + 0x157c) = 0;
    FUN_8005a234();
    uVar6 = (uint)*DAT_8019ed48;
    uVar7 = uVar6;
    do {
      if ((*(char *)(iVar4 + 0x1540) == '\0') && ((*(byte *)(uVar6 + iVar4 + 3) & 0xc0) == 0)) {
        *DAT_8019ed54 = (ushort)uVar6;
        *DAT_8019ed58 = (ushort)uVar7;
        FUN_800f9330();
        FUN_800f939c();
        iVar3 = (uVar7 & 0x7fff) * 2 + iVar4;
        uVar1 = *(undefined1 *)(iVar4 + 0x157d);
        *(undefined1 *)(iVar3 + 0x14d5) = 0x80;
        *(undefined1 *)(iVar3 + 0x14d4) = uVar1;
        FUN_800f960c();
        FUN_800f95a0();
        uVar6 = (uint)*DAT_8019ed54;
        uVar7 = (uint)*DAT_8019ed58;
      }
      FUN_800f9644(0x20);
      uVar6 = uVar6 + 0x80 & 0xffff;
      FUN_800f971c();
      FUN_800f9660(0x20);
      uVar7 = uVar7 + 1 & 0xffff;
    } while (uVar7 != 5);
    FUN_80061c8c();
    FUN_80059af4();
  }
  FUN_800f654c(0x11);
  FUN_80150c38();
  FUN_800f654c(0xc);
  FUN_80150c38();
  return;
}



