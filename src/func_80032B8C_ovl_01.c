s32 func_80032B40_ovl_01(void *p, s16 *b) ;
                                                
                                     
                                            
                                     
             
 
void func_80032B8C_ovl_01(void *p, s32 a) {
    s16 h[4];
    s32 tmp[8];
    h[0]=0; h[1]=*(u16*)((u8*)p+0x66)+a; h[2]=0;
    func_80040E88_ovl_01(h,tmp);
    func_8004279C_ovl_01(tmp,(u8*)p+0x1e0,h);
    *(s32*)((u8*)p+0x28)+=h[0];
    *(s32*)((u8*)p+0x30)+=h[2];
}
void func_80032C08_ovl_01(void *p, s32 a, s32 b) ;
                         
                                                                     
                                
                                             
                               
                               
                               
 
void func_80032C9C_ovl_01(void *p, s32 a, s32 b) ;
                                      
                                                                     
                                
                                                        
                                              
                               
                               
                               
 
