
void FUN_80120a0c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f4248(0x3f);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 != 0) {
    FUN_800f5ccc();
    FUN_801224d0();
    *DAT_8019ed40 = (&DAT_80199304)[*DAT_8019ed54];
    FUN_800f5140();
    FUN_800f824c(0x45);
    FUN_800f5140();
    FUN_800f4f4c();
    uVar2 = FUN_800f3c3c(0x45);
    FUN_800f3f38(uVar2);
    FUN_801224d0();
    FUN_800f9644(0x20);
    *DAT_8019ed44 = *DAT_8019ed58;
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(0x29);
    FUN_800f3f94(uVar2);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f9660(0x20);
    FUN_800f654c(6);
    FUN_800f824c(0x45);
    do {
      FUN_800f6b68(0x1500);
      FUN_800f6364();
      FUN_801245b4();
      FUN_800f8960(0);
      FUN_800f3d48();
      FUN_800f8960(0x40);
      *DAT_8019ed58 = *DAT_8019ed58 + 2;
      FUN_800f5da0(0x45);
      iVar1 = FUN_800f5b8c(0x202);
    } while (iVar1 != 0);
  }
  return;
}



