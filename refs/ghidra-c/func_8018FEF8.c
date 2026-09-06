
undefined4 ISO9660_OBJ_7F0(void)

{
  uint uVar1;
  uint *puVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint in_v1;
  byte *unaff_s0;
  byte *pbVar7;
  int unaff_s1;
  int unaff_s2;
  int iVar8;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined4 unaff_s6;
  uint in_stack_00000018;
  
  if (1 < DAT_8019b9f4) {
    printf("\t(%02x:%02x:%02x) %8d %s\n",(uint)*(byte *)((int)&DAT_801f6b10 + unaff_s1),
           (uint)*(byte *)((int)&DAT_801f6b10 + unaff_s1 + 1),
           (uint)*(byte *)((int)&DAT_801f6b10 + unaff_s1 + 2));
  }
  iVar8 = unaff_s2 + 1;
  pbVar7 = unaff_s0 + *unaff_s0;
  if (((0x3f < iVar8) || (&UNK_801f8f0f < pbVar7)) || (*pbVar7 == 0)) {
    DAT_8019b9d4 = unaff_s6;
    if (iVar8 < 0x40) {
      *(undefined1 *)(&DAT_801f6b18 + iVar8 * 0xc) = 0;
    }
    if (1 < DAT_8019b9f4) {
      printf("CD_cachefile: %d files found\n",iVar8);
    }
    return 1;
  }
  uVar1 = (uint)(pbVar7 + 5) & 3;
  uVar6 = (uint)(pbVar7 + 2) & 3;
  in_stack_00000018 =
       (*(int *)(pbVar7 + 5 + -uVar1) << (3 - uVar1) * 8 |
       (uint)*pbVar7 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar6) * 8 |
       *(uint *)(pbVar7 + 2 + -uVar6) >> uVar6 * 8;
  uVar1 = (int)&stack0x00000018 + 3U & 3;
  puVar2 = (uint *)(((int)&stack0x00000018 + 3U) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | in_stack_00000018 >> (3 - uVar1) * 8;
  DsIntToPos(in_stack_00000018,(DslLOC *)(unaff_s4 + 0x18));
  uVar4 = unaff_s1 + unaff_s5 + 0x1c;
  uVar1 = (uint)(pbVar7 + 0xd) & 3;
  uVar6 = (uint)(pbVar7 + 10) & 3;
  uVar6 = (*(int *)(pbVar7 + 0xd + -uVar1) << (3 - uVar1) * 8 |
          in_v1 & 0xffffffffU >> (uVar1 + 1) * 8) & -1 << (4 - uVar6) * 8 |
          *(uint *)(pbVar7 + 10 + -uVar6) >> uVar6 * 8;
  uVar1 = uVar4 + 3 & 3;
  puVar2 = (uint *)((uVar4 + 3) - uVar1);
  *puVar2 = *puVar2 & -1 << (uVar1 + 1) * 8 | uVar6 >> (3 - uVar1) * 8;
  uVar1 = uVar4 & 3;
  *(uint *)(uVar4 - uVar1) =
       *(uint *)(uVar4 - uVar1) & 0xffffffffU >> (4 - uVar1) * 8 | uVar6 << uVar1 * 8;
  uVar3 = DAT_800f33de;
  if (iVar8 == 0) {
    *(undefined2 *)(unaff_s5 + 8) = DAT_800f33d8;
    uVar5 = ISO9660_OBJ_7F0();
    return uVar5;
  }
  if (iVar8 != 1) {
    uVar5 = ISO9660_OBJ_7D4();
    return uVar5;
  }
  *(undefined2 *)(unaff_s5 + 0x20) = DAT_800f33dc;
  *(undefined1 *)(unaff_s5 + 0x22) = uVar3;
  uVar5 = ISO9660_OBJ_7F0(unaff_s3 + 0x18);
  return uVar5;
}



