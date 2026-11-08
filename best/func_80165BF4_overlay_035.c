extern s32 func_80033634_ovl_01(void);
extern void func_80166324_overlay_035(void *, s32, s32);
typedef void (*Fn)(void *, void *);
extern Fn D_801667CC_overlay_035[];
void func_80165BF4_overlay_035(void *arg0) {
 u8 *s=(u8*)arg0+0x2b4;
 u8 n=s[0x18];
 if(n!=0) {
  n--;
  if(s[9]&1) {
   s[0x18]=n;
   if(n&1) {
    s32 r=func_80033634_ovl_01();
    func_80166324_overlay_035(arg0,3,r&7);
   }
  }
 }
 if(s[9]&0x80) {
  D_801667CC_overlay_035[s[6]](arg0,s);
 }
}
