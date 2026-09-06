
void FUN_8011581c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_800f3b9c(0x15bfb4,0);
  iVar2 = FUN_800f3b04(0x300);
  iVar3 = FUN_800f3c3c(0);
  FUN_800f6630(0x7a);
  *DAT_8019ed40 = (*DAT_8019ed40 & 2) * '\b' + *(char *)(iVar3 + 0x92);
  *DAT_8019ed54 = *DAT_8019ed44;
  do {
    iVar4 = (uint)*(byte *)(iVar3 + 0xc) + (uint)*(byte *)(iVar1 + (uint)*DAT_8019ed54);
    *(char *)(iVar2 + (uint)*DAT_8019ed58) = (char)iVar4;
    *DAT_8019ed40 = *(char *)(iVar3 + 0xd) + (char)((uint)iVar4 >> 8) & 1;
    iVar4 = FUN_800f4120(2);
    if (iVar4 == 0) {
      FUN_800f654c(0);
      FUN_801714c4();
    }
    *(char *)((uint)*DAT_8019ed58 + iVar2 + 1) =
         ((*(char *)((uint)*DAT_8019ed54 + iVar1 + 1) + *(char *)(iVar3 + 0xe)) -
         *(char *)(iVar3 + 0xad)) + '\b';
    *(char *)((uint)*DAT_8019ed58 + iVar2 + 2) =
         *(char *)((uint)*DAT_8019ed54 + iVar1 + 2) + *(char *)(iVar3 + 0x8f);
    *(byte *)((uint)*DAT_8019ed58 + iVar2 + 3) =
         *(byte *)(iVar3 + 0x91) | *(byte *)((uint)*DAT_8019ed54 + iVar1 + 3);
    *DAT_8019ed54 = *DAT_8019ed54 + 4;
    *DAT_8019ed58 = *DAT_8019ed58 + 4;
    *DAT_8019ed40 = *DAT_8019ed5c;
    FUN_800f4248(0xf);
    iVar4 = FUN_800f4120(0x202);
  } while (iVar4 != 0);
  return;
}



