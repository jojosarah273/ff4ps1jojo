
int PClseek(int fd,int offset,int mode)

{
  int in_v0;
  int in_v1;
  
  trap(0x107);
  if (in_v0 != 0) {
    in_v1 = -1;
  }
  return in_v1;
}



