typedef struct {void *field0; void *field4; void *field8; void *fieldc;} V;
void func_8002E878(void *arg0){
 char loc[0xC8];
 V *obj=(V*)arg0;
 ((void(*)(void *, void *))((V*)obj->field0)->fieldc)(arg0, loc);
}
