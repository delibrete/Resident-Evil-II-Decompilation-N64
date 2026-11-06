typedef void (*Fn)(void *);
extern volatile Fn D_80166D48_ovl_12[];
void func_80163374_ovl_12(void *p) {
 volatile Fn *new_var;
 u8 i=((u8*)p)[6];
 new_var=&D_80166D48_ovl_12[i];
 (*new_var)(p);
}
