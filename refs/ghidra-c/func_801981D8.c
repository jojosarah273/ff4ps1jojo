
int PCopen(char *name,int flags,int perms)

{
  int in_v0;
  int in_v1;
  
  trap(0x103);
  if (in_v0 != 0) {
    in_v1 = -1;
  }
  return in_v1;
}



