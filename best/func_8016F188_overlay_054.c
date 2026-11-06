void func_8016F188_overlay_054(void *arg0) {
 if (*(u16 *)((u8 *)arg0+0x2D4)==0x8000) {
  if (*((u8 *)arg0+0x2D9)==0) {
   *(s32 *)((u8 *)arg0+4)=0x030A0000;
   return;
  }
  *(s32 *)((u8 *)arg0+4)=0x07000000;
 }
}
