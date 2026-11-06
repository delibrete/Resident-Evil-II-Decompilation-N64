typedef struct {s32 a,b; void *c; s32 d;} S3281C;
typedef struct {u8 pad[0x14]; s32 result; u8 rest[0x40];} Buf3281C;
extern s32 D_8010B698_ovl_01;
extern s32 func_80004550(void *,s32,s32);
extern s32 func_800045DC(void *,s32,s32,s32);
extern s32 func_80004594(void *,s32);
extern s32 func_800888CC_ovl_01(s32,s32,s32);
s32 func_8003281C_ovl_01(S3281C *a,S3281C *b) ;
            
        
                            
                  
                                             
                                             
                  
                           
              
    
                                          
  
          
 
typedef struct {u8 pad[0x1AA];u16 flags;u8 p[0x88];void *base;} Obj;
void func_8007AAD8_ovl_01(Obj *o) ;
                                               
                                                         
                                                        
                                   
                                                         
 
void func_8007AC44_ovl_01(Obj *o) ;
                                             
                                   
                                                        
                                                        
                                                        
                                                         
                                                          
 
void func_8007ACF0_ovl_01(Obj *o) {
 u16 v=o->flags; if(v&0x100){o->flags=v&0xFEFF;
 func_8008797C_ovl_01(o,o->base,1);
 func_8008797C_ovl_01(o,(void *)((s32)o->base+0xBC0),1);}
}
