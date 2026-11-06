s32 func_8016352C_ovl_15(s32 arg0, s16 arg1, s32 arg2){
 s32 v1,v0,t0;
 v1=arg2*arg1;
 if(arg1==0) return 0;
 v1=v1*arg1;
 v0=arg0*arg0;
 if(v0==0) return 0;
 arg0=v1/v0;
 v1=arg1-1;
 t0=arg2*v1;
 v1=t0*v1;
 v0=v1/v0;
 return arg0-v0;
}
