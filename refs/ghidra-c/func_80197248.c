
void AddPrims(void *ot,void *p0,void *p1)

{
                    /* Probable PsyQ macro: addPrim(). */
  *(uint *)p1 = *(uint *)p1 & 0xff000000 | *(uint *)ot & 0xffffff;
  *(uint *)ot = *(uint *)ot & 0xff000000 | (uint)p0 & 0xffffff;
  return;
}



