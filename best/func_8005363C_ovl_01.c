void func_80077B0C_overlay_001(s32,s32); s32 func_80053874_overlay_001(s32,s32,s32,s32); s32 func_80053290_overlay_001(s32,s32,s32,s32);
extern u8 D_800C7650_overlay_001[];
s32 func_8005363C_ovl_01(void) {
 u8 *p=D_800C7650_overlay_001+0x20F5A; s32 ret=0; u8 n=(u8)(p[0]-1);
 switch(n) {
 case 0:
   func_80077B0C_overlay_001(0x2060000,0);
   p[1]=0; p[0]=5;
   if(func_80053874_overlay_001(0x30,0x8E,0xF7,0x57)) return 1;
   func_80053290_overlay_001(1,0xF7,0x57,0x80);
   p[0]=0;
   return 0;
 case 1:
   func_80077B0C_overlay_001(0x2070000,0);
   func_80053290_overlay_001(0,0,0,0x80);
   func_80053290_overlay_001(0x30,0x8E,0xF7,0x57);
   p[1]=1; p[0]=6;
   break;
 case 2:
   func_80077B0C_overlay_001(0x2060000,0);
   func_80053290_overlay_001(0x10,0x15,0xF0,0x78);
   p[1]=0; p[0]=7;
   break;
 case 3:
   func_80077B0C_overlay_001(0x2070000,0);
   func_80053290_overlay_001(0x10,0x15,0xF0,0x78);
   p[1]=1; p[0]=8;
   break;
 default: p[0]=0; return 0;
 }
 if(func_80053874_overlay_001(0x30,0x8E,0xF7,0x57)) return 1;
 p[0]=0; return 0;
}
