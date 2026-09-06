
void FntLoad(int tx,int ty)

{
  DAT_801fd352 = LoadClut2((u_long *)&DAT_8019d0fc,tx,ty + 0x80);
  DAT_801fd350 = LoadTPage((u_long *)&DAT_8019d2fc,0,0,tx,ty,0x80,0x20);
  DAT_8019d0f4 = 0;
  memset("",'\0',0x180);
  return;
}



