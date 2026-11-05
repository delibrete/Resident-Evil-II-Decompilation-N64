void func_80082230_ovl_01(void *p, s32 a, s32 b);
void func_80040E88_ovl_01(void *p, void *q);
void func_80040D24_ovl_01(s32 a, void *q);
void func_8004279C_ovl_01(void *p, s32 a, s32 b);

void func_8008386C_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 buf[8];
    u8 tmp[0x20];

    func_80082230_ovl_01(buf, 0, 8);
    *(s16 *)(buf + 2) = (s16)arg0;
    func_80040E88_ovl_01(buf, tmp);
    func_80040D24_ovl_01(arg1, tmp);
    func_8004279C_ovl_01(tmp, arg2, arg3);
}
