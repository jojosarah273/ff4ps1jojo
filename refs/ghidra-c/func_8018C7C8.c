
void SpuSetKeyOnWithAttr(SpuVoiceAttr *attr)

{
  SpuSetVoiceAttr(attr);
  SpuSetKey(1,attr->voice);
  return;
}



