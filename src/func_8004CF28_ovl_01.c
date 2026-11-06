#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef struct { u16 f; u8 pad[0x1C8 - 2]; } E1C8;

extern E1C8 D_8010B2C8_ovl_01[];
extern s32 D_8010B660_ovl_01[];

s32 func_8008B028_ovl_01();
s32 func_8008B0CC_ovl_01();
void func_8004D1B4_ovl_01();
void func_8004D1A8_ovl_01();
s32 func_8004CF60_ovl_01();

s32 func_8004CF60_ovl_01(void **arg0) ;
            
           
           
           

                                           
                  
                                     
                  
               
        
                                     
                
                
                       
                             
               
                       
                     
 

u16 func_8004CF28_ovl_01(s32 arg0) {
    return D_8010B2C8_ovl_01[arg0].f;
}

void func_8004CEF4_ovl_01(s32 arg0) ;
                                       
 

s32 func_8004CFFC_ovl_01(s32 arg0) ;
          
           

          
                          
        
                                                                    
               
               
                    
                
 
