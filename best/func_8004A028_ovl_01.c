typedef struct S_8004A028_obj {
    u8 unk_00[0x14];
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
} S_8004A028_obj;

s32 func_800416EC_ovl_01(void *arg0, void *arg1);
s32 func_8004229C_ovl_01(void *arg0, void *arg1, void *arg2);
s32 func_800421E4_ovl_01(void *arg0, s32 *arg1, s32 *arg2);

void func_8004A028_ovl_01(S_8004A028_obj *arg0, S_8004A028_obj *arg1, S_8004A028_obj *arg2) {
    u8 buf[0x20];
    s32 vec[3];

    func_800416EC_ovl_01(arg0, buf);
    func_8004229C_ovl_01(buf, arg1, arg2);
    vec[0] = arg1->unk_14 - arg0->unk_14;
    vec[1] = arg1->unk_18 - arg0->unk_18;
    vec[2] = arg1->unk_1C - arg0->unk_1C;
    func_800421E4_ovl_01(buf, vec, vec);
    arg2->unk_14 = vec[0];
    arg2->unk_18 = vec[1];
    arg2->unk_1C = vec[2];
}

extern f32 D_800B8950_ovl_01;
extern f32 D_800B8954_ovl_01;
extern f32 D_800B8958_ovl_01;
extern f32 D_800F578C_ovl_01[];
f32 func_800482C4_ovl_01(s32 arg0);

f32 func_80048310_ovl_01(f32 arg0) ;
          
               
             
            
            
             
            

             
                   
               
     
                                   
                       
                      
                                
                       
                            
                                                        
                                
                          
                                    
         
                         
     
                                     
 

typedef struct S_8004A358_ent {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} S_8004A358_ent;
extern u8 D_800C7650_ovl_01[];

s32 func_8004A358_ovl_01(S_8004A358_ent *arg0, s32 arg1, S_8004A358_ent *arg2) ;
            
             
            
           
           
          
          
          
                       
                       

                              
                                       
                                   
                                                
                                                
                         
                         
                      
                 
     
                                                                                       
                                           
                                  
                                  
                                            
 
