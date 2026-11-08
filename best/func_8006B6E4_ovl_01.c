extern s32 func_800072E0(void);
extern void func_80007300(s32);
extern void func_80006F50(s32);
extern void func_8000D460(void *, ...);
extern void func_8000D66C(void *);
extern void func_8000F020(s32, s32, void *, s32);
extern s32 func_8006B40C_overlay_001(s32, s32, s32);
extern void *D_80112718_overlay_001;
extern s8 D_8011271C_overlay_001,D_8011271D_overlay_001,D_8011271E_overlay_001;
extern u8 D_80112808_overlay_001[];
extern u8 D_80112908_overlay_001[];
extern void *D_801129C0_overlay_001;
void func_8006B6E4_ovl_01(void) {
 s32 saved=func_800072E0();
 s32 a0,a1,s1,s2,s3; void *p;
 if (D_8011271E_overlay_001 != 5) {
  a0=10;
  if (D_80112908_overlay_001[4]==4) a0=4;
  s3=11;
  if(D_8011271C_overlay_001!=4) {
   s3=3;
   if(D_80112908_overlay_001[3]!=4) {
    s3=0;
    if(D_80112908_overlay_001[0]!=4) {
     s3=1;
     if(D_80112908_overlay_001[1]!=4) {
      s3=10;
      if(D_80112908_overlay_001[2]==4) s3=2;
     }
    }
   }
  }
  if(D_80112908_overlay_001[(u8)D_8011271D_overlay_001]==4) s3=D_8011271D_overlay_001;
  a1=D_8011271E_overlay_001;
  s1=s3;
  if(a1==10) {
   s32 s2=a0;
   if(s1==11) {
    func_8000D460(D_80112718_overlay_001,a1,D_80112908_overlay_001,4);
    func_8000D66C(D_80112718_overlay_001);
    D_8011271C_overlay_001=6; D_8011271E_overlay_001=s1;
   } else if(s2!=a1) {
    D_80112908_overlay_001[4]=6; D_8011271E_overlay_001=4;
    func_8000F020(a0,a1,D_80112908_overlay_001,4);
    func_8000D460(D_801129C0_overlay_001);
    func_8000D66C(D_801129C0_overlay_001);
    func_8006B40C_overlay_001(s2,1,1);
   } else if(s1!=s2 && (D_8011271D_overlay_001==s2 || s1==D_8011271D_overlay_001)) {
    D_80112908_overlay_001[s1]=6; D_8011271E_overlay_001=s1;
    func_8000F020(a0,a1,D_80112908_overlay_001,4);
    p=D_80112808_overlay_001+(s1<<6);
    func_8000D460(p); func_8000D66C(p);
    func_8006B40C_overlay_001(s1,3,1);
    D_8011271D_overlay_001=s3;
    func_80006F50(0x3C0);
   }
  }
 }
 func_80007300(saved);
}
