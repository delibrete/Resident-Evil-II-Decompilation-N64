s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80167B58_ovl_30(void *, s32, s32, s16);
s32 func_800334F8_ovl_01(s32);
s32 func_80032B8C_ovl_01(void *, s32);
s32 func_80033634_ovl_01(void *);
s32 func_80167B9C_ovl_30(void *);
extern void (*D_80167D64_ovl_30[])(void);
u16 func_80162310_ovl_30(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u16 value;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    value = *(u16 *)((u8 *)arg0 + 0x1F4) - arg3;
    *(u16 *)((u8 *)arg0 + 0x1F4) = value;
    if ((s16)value < 0) *(u16 *)((u8 *)arg0 + 0x1F4) = 0;
    return **(u16 **)((u8 *)arg0 + 0x214);
}
void func_80162364_ovl_30(void *arg0) ;
                                                     
                                         
                                                         
                                                                   
                                                                   
 
void func_80162294_ovl_30(void *arg0, s32 arg1, s32 arg2) ;
                            
                                               
                                 
                                                                    
                               
 
void func_80162094_ovl_30(void *arg0) ;
                           
                                               
                                                                                       
                                                
                                                
                                                
                               
 
