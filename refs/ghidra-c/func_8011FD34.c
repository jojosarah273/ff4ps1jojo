
void FUN_8011fd34(void)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ushort *puVar4;
  int iVar5;
  
  while( true ) {
    if (*DAT_8019ed58 >> 0xc == 0xb) {
      iVar5 = -0xb211;
      uVar1 = *DAT_8019ed58;
      puVar3 = &DAT_80199328;
    }
    else {
      iVar5 = -0xdb51;
      uVar1 = *DAT_8019ed58;
      puVar3 = &DAT_80199374;
    }
    *DAT_8019ed40 = (code)puVar3[(uint)uVar1 + iVar5];
    iVar5 = FUN_800f6434(2);
    if (iVar5 != 0) break;
    FUN_800f63bc();
    FUN_800f5574(1);
    iVar5 = FUN_800f53d4();
    if (iVar5 == 0) {
      FUN_801245b4();
      FUN_800f885c(0x7e0000);
      FUN_800f3d48();
      FUN_800f885c(0x7e0040);
      puVar4 = DAT_8019ed54;
    }
    else {
      FUN_800f9644(0x20);
      if (*DAT_8019ed58 >> 0xc == 0xb) {
        puVar3 = &DAT_80199328;
        *DAT_8019ed40 = *(code *)(*DAT_8019ed58 + 0x8018e117);
        iVar5 = -0xb210;
      }
      else {
        puVar3 = &DAT_80199374;
        *DAT_8019ed40 = S_SAV_OBJ_2A4[*DAT_8019ed58 + 7];
        iVar5 = -0xdb50;
      }
      DAT_8019ed40[1] = (code)puVar3[(uint)*DAT_8019ed58 + iVar5];
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0x29);
      FUN_800f3f94(uVar2);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f9660(0x20);
      puVar4 = DAT_8019ed58;
    }
    *puVar4 = *puVar4 + 2;
  }
  FUN_800f95a0();
  FUN_800f94b8();
  FUN_800f9448();
  return;
}



