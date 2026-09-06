
void CatPrim(void *p0,void *p1)

{
  *(uint *)p0 = *(uint *)p0 & 0xff000000 | (uint)p1 & 0xffffff;
  return;
}



