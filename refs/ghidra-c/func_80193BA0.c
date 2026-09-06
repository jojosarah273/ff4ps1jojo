
u_long * FONT_OBJ_618(void)

{
  byte bVar1;
  bool bVar2;
  u_long *puVar3;
  int iVar4;
  int iVar5;
  byte *unaff_s0;
  int unaff_s1;
  void *pvVar6;
  void *unaff_s2;
  void *unaff_s3;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  u_long *in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  undefined1 in_stack_0000001c;
  undefined1 in_stack_00000020;
  undefined1 in_stack_00000024;
  
  for (; (bVar1 = *unaff_s0, *unaff_s0 != 0 && (unaff_s8 != 0)); unaff_s8 = unaff_s8 + -1) {
    bVar2 = false;
    pvVar6 = unaff_s2;
    if (bVar1 == 0x20) {
FONT_OBJ_5BC:
      unaff_s1 = unaff_s1 + 8;
      if ((unaff_s7 <= unaff_s1) && (unaff_s6 == 0)) {
FONT_OBJ_5D4:
        bVar2 = true;
      }
    }
    else {
      if ((char)bVar1 < '!') {
        if (bVar1 == 9) {
          puVar3 = (u_long *)FONT_OBJ_5C0();
          return puVar3;
        }
        if (bVar1 != 10) {
          puVar3 = (u_long *)FONT_OBJ_530();
          return puVar3;
        }
        goto FONT_OBJ_5D4;
      }
      if (bVar1 != 0x7e) {
        bVar1 = *unaff_s0;
        if (bVar1 - 0x61 < 0x1a) {
          puVar3 = (u_long *)FONT_OBJ_55C();
          return puVar3;
        }
        iVar5 = (char)bVar1 + -0x20;
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = (char)bVar1 + -0x11;
        }
        *(char *)((int)unaff_s2 + 0xc) = ((char)iVar5 + (char)(iVar4 >> 4) * -0x10) * '\b';
        *(char *)((int)unaff_s2 + 0xd) = (char)((iVar4 >> 4) << 3);
        *(short *)((int)unaff_s2 + 8) = (short)unaff_s1;
        *(short *)((int)unaff_s2 + 10) = (short)unaff_s5;
        *(undefined1 *)((int)unaff_s2 + 4) = in_stack_0000001c;
        *(undefined1 *)((int)unaff_s2 + 5) = in_stack_00000020;
        *(undefined1 *)((int)unaff_s2 + 6) = in_stack_00000024;
        pvVar6 = (void *)((int)unaff_s2 + 0x10);
        AddPrim(in_stack_00000010,unaff_s2);
        goto FONT_OBJ_5BC;
      }
      unaff_s0 = unaff_s0 + 1;
      if (*unaff_s0 == 99) {
        puVar3 = (u_long *)FONT_OBJ_5D8();
        return puVar3;
      }
    }
    if (bVar2) {
      if (in_stack_00000014 < unaff_s1) {
        in_stack_00000014 = unaff_s1;
      }
      unaff_s5 = unaff_s5 + 8;
      unaff_s1 = (int)*(short *)((int)unaff_s3 + 8);
      if (in_stack_00000018 <= unaff_s5) break;
    }
    unaff_s0 = unaff_s0 + 1;
    unaff_s2 = pvVar6;
  }
  if ((*(char *)((int)unaff_s3 + 7) != '\0') && (AddPrim(in_stack_00000010,unaff_s3), unaff_s6 != 0)
     ) {
    *(short *)((int)unaff_s3 + 0xc) = (short)in_stack_00000014 - *(short *)((int)unaff_s3 + 8);
    *(short *)((int)unaff_s3 + 0xe) = (short)unaff_s5 - (*(short *)((int)unaff_s3 + 10) + -8);
  }
  DrawOTag(in_stack_00000010);
  *(undefined4 *)((int)unaff_s3 + 0x28) = 0;
  **(undefined1 **)((int)unaff_s3 + 0x24) = 0;
  return in_stack_00000010;
}



