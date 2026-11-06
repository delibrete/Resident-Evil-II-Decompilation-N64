void func_8002FC30_ovl_01(void *, s32, s32);
void func_80030D98_ovl_01(void *);
void func_8002D1B8_ovl_01(void *);

typedef struct {
    void **p0;
    u8 pad[0x174 - 4];
    u8 *p174;
} S540;

void func_80028540_ovl_01(S540 *arg0, u32 arg1, s32 arg2) ;
          

                       
                                          
               
     
                    
                   
                                                   
               
     
                                           
                                           
                                           
 

void func_80028480_ovl_01(u8 *arg0) {
    s32 temp;
    s32 i;

    temp = *(s32 *)(arg0 + 0);
    func_8002FC30_ovl_01(arg0, 0, 0x190);
    *(s32 *)(arg0 + 0xC) = 1;
    *(s32 *)(arg0 + 0) = temp;
    func_80030D98_ovl_01(arg0);
    *(s32 *)(arg0 + 8) = 0;
    *(s32 *)(arg0 + 0x14) = 0;
    for (i = 3; i >= 0; i--) {
        *(s32 *)(arg0 + 0x7C + i * 4) = 0;
    }
    for (i = 0; i < 4; i++) {
        *(s32 *)(arg0 + 0x8C + i * 4) = 0;
        *(s32 *)(arg0 + 0x9C + i * 4) = 0;
    }
    *(s32 *)(arg0 + 0x114) = 0;
    *(s32 *)(arg0 + 0x174) = 0;
    func_8002D1B8_ovl_01(arg0);
    *(s32 *)(arg0 + 0x10) = 0xC8;
}

typedef struct {
    void *(*fn)(void *, s32, s32);
} Vtbl;

typedef struct {
    u8 pad[4];
    Vtbl *vt;
} Obj;

void func_8002844C_ovl_01(Obj *arg0) ;
                                                             
 

void func_80028420_ovl_01(Obj *arg0) ;
                                                           
 
