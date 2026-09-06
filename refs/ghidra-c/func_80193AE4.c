
u_long * FONT_OBJ_55C(void)

{
  byte bVar1;
  u_long *puVar2;
  int iVar3;
  int in_v1;
  byte *pbVar4;
  byte *unaff_s0;
  int unaff_s1;
  void *unaff_s2;
  void *unaff_s3;
  int unaff_s4;
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
  
code_r0x80193ae4:
  iVar3 = in_v1;
  if (in_v1 < 0) {
    iVar3 = in_v1 + 0xf;
  }
  *(char *)((int)unaff_s2 + 0xc) = ((char)in_v1 + (char)(iVar3 >> 4) * -0x10) * '\b';
  *(char *)((int)unaff_s2 + 0xd) = (char)((iVar3 >> 4) << 3);
  *(short *)((int)unaff_s2 + 8) = (short)unaff_s1;
  *(short *)((int)unaff_s2 + 10) = (short)unaff_s5;
  *(undefined1 *)((int)unaff_s2 + 4) = in_stack_0000001c;
  *(undefined1 *)((int)unaff_s2 + 5) = in_stack_00000020;
  *(undefined1 *)((int)unaff_s2 + 6) = in_stack_00000024;
  AddPrim(in_stack_00000010,unaff_s2);
FONT_OBJ_5BC:
  pbVar4 = unaff_s0;
  unaff_s1 = unaff_s1 + 8;
  if (unaff_s1 < unaff_s7) goto code_r0x80193b60;
  if (unaff_s6 != 0) goto code_r0x80193b60;
FONT_OBJ_5D4:
  unaff_s4 = 1;
code_r0x80193b60:
  do {
    if (unaff_s4 != 0) {
      if (in_stack_00000014 < unaff_s1) {
        in_stack_00000014 = unaff_s1;
      }
      unaff_s5 = unaff_s5 + 8;
      unaff_s1 = (int)*(short *)((int)unaff_s3 + 8);
      if (in_stack_00000018 <= unaff_s5) goto FONT_OBJ_628;
    }
    unaff_s0 = pbVar4 + 1;
    unaff_s8 = unaff_s8 + -1;
    bVar1 = *unaff_s0;
    if ((*unaff_s0 == 0) || (unaff_s8 == 0)) {
FONT_OBJ_628:
      if ((*(char *)((int)unaff_s3 + 7) != '\0') &&
         (AddPrim(in_stack_00000010,unaff_s3), unaff_s6 != 0)) {
        *(short *)((int)unaff_s3 + 0xc) = (short)in_stack_00000014 - *(short *)((int)unaff_s3 + 8);
        *(short *)((int)unaff_s3 + 0xe) = (short)unaff_s5 - (*(short *)((int)unaff_s3 + 10) + -8);
      }
      DrawOTag(in_stack_00000010);
      *(undefined4 *)((int)unaff_s3 + 0x28) = 0;
      **(undefined1 **)((int)unaff_s3 + 0x24) = 0;
      return in_stack_00000010;
    }
    unaff_s4 = 0;
    if (bVar1 == 0x20) goto FONT_OBJ_5BC;
    if ((char)bVar1 < '!') break;
    if (bVar1 != 0x7e) {
      if (*unaff_s0 - 0x61 < 0x1a) {
        puVar2 = (u_long *)FONT_OBJ_55C();
        return puVar2;
      }
      in_v1 = (char)*unaff_s0 + -0x20;
      unaff_s2 = (void *)((int)unaff_s2 + 0x10);
      goto code_r0x80193ae4;
    }
    pbVar4 = pbVar4 + 2;
    if (*pbVar4 == 99) {
      puVar2 = (u_long *)FONT_OBJ_5D8();
      return puVar2;
    }
  } while( true );
  if (bVar1 == 9) {
    puVar2 = (u_long *)FONT_OBJ_5C0();
    return puVar2;
  }
  pbVar4 = unaff_s0;
  if (bVar1 != 10) {
    puVar2 = (u_long *)FONT_OBJ_530();
    return puVar2;
  }
  goto FONT_OBJ_5D4;
}



