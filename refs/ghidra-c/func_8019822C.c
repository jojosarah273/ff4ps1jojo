
/* Possible write.obj/PCwrite */

int PCread(int fd,char *buff,int len)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    if (len == 0) {
      return iVar3;
    }
    uVar2 = len;
    if (0x8000 < (uint)len) {
      uVar2 = 0x8000;
    }
    iVar1 = _SN_read(0,fd,uVar2,buff);
    iVar3 = iVar3 + iVar1;
    if (iVar1 == -1) break;
    buff = buff + iVar1;
    len = len - iVar1;
    if (iVar1 < (int)uVar2) {
      return iVar3;
    }
  }
  iVar3 = read_obj_94();
  return iVar3;
}



