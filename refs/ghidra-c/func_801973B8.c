
void SetDrawMode(DR_MODE *p,int dfe,int dtd,int tpage,RECT *tw)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xe1000000;
  *(undefined1 *)((int)&p->tag + 3) = 2;
  if (dtd != 0) {
    uVar2 = 0xe1000200;
  }
  uVar1 = tpage & 0x9ff;
  if (dfe != 0) {
    uVar1 = uVar1 | 0x400;
  }
  p->code[0] = uVar2 | uVar1;
  if (tw != (RECT *)0x0) {
    p->code[1] = (uint)(byte)((byte)tw->y >> 3) << 0xf |
                 (uint)(byte)((byte)tw->x >> 3) << 10 | 0xe2000000 | (-(int)tw->h & 0xf8U) << 2 |
                 (int)(-(int)tw->w & 0xffU) >> 3;
    P41_OBJ_8C();
    return;
  }
  p->code[1] = 0;
  return;
}



