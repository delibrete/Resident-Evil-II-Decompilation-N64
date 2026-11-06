typedef struct {void *field0; void *field4; void *field8; void *fieldc;} V;
void func_800283E0_ovl_01(void *arg0);
void func_8002E840(void *arg0){
 V *obj=(V*)arg0;
 ((void(*)(void))((V*)obj->field0)->field8)();
 func_800283E0_ovl_01(arg0);
}
