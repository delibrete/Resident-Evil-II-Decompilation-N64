extern u8 D_80158A20[];
extern u8 D_80158A40[];
extern u8 D_801443E8[];

s32 func_800A5830_ovl_01(void);
void func_800A5A6C_ovl_01(s32);
void func_800AEB9C_ovl_01(void *);

void func_800B1A38_ovl_01(void) ;
             

                             
                                  
                                          
         
     
                              
                             
     
 

void func_800AF0D0_ovl_01(s32 arg0) {
    u8 *p;
    u8 *base;

    if (arg0 != -1) {
        if (func_800A5830_ovl_01() & 0xFF) {
            func_800A5A6C_ovl_01(arg0);
        }
        base = D_801443E8;
        p = base + arg0 * 0x1A0;
        *(s32 *)(p + 0x60) = arg0;
        func_800AEB9C_ovl_01(p);
        p[0xBD] = 0;
    }
}
