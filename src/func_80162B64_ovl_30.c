extern u8 D_800C7650_ovl_01[];
extern u32 D_80167D9C_ovl_30[];
extern s16 D_80167CEC_ovl_30[];
extern s8 D_80167DD8_ovl_30[];
extern s8 D_80167E51_ovl_30[];
s32 func_80032EA4_ovl_01(s32,s32,s32,s32);
s32 func_80033634_ovl_01(void);
s32 func_800656BC_ovl_01(s16,s16);
s32 func_80077D48_ovl_01(s32,void*);
s32 func_80089D34_ovl_01(void*,s32,s32,s32);
void func_801672F4_ovl_30(void*,s32,s32);
void func_80163154_ovl_30(void *p) ;
                                                      
                                                       
                                                                     
                             
                                                             
  
 
void func_801631EC_ovl_30(void *p) ;
                                                            
                                                        
                                                                                                           
 
s8 func_80164C84_ovl_30(void *p,s32 mode) ;
                                                 
                                                                 
                                                                       
                                            
                         
 
void func_80162B64_ovl_30(void *p,s32 a,s32 b) {
 u8 *q=p; u16 t;
 if(!q[6]) {q[6]=1;*(s32*)(q+0x1e8)=0xf00;*(u16*)(q+0x1f4)=60;func_80077D48_ovl_01(10,p);q[0x25c]&=0xfe;}
 func_80089D34_ovl_01(p,a,b,0x100);
 t=*(u16*)(q+0x1f4)-1;*(u16*)(q+0x1f4)=t;
 if((s32)(t<<16)==0){q[5]=2;*(u16*)(q+6)=0;}
}
