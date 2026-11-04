extern void func_80089D34_ovl_01();
extern void func_8003420C_ovl_01();
extern void func_80077D48_ovl_01();
extern void func_80162B1C_ovl_18();
extern void func_80031C44_ovl_01();
typedef struct O
{
  u8 p[0x2c0];
} O;
void func_80161F28_ovl_18(void);
void func_80162804_ovl_18(O *p)
{
  s32 v = p->p[6];
  register s32 one = 1;
  if (v == one)
  {
  }
  else
    if (v < 2)
  {
    if (v == 0)
    {
      p->p[6] = one;
    }
  }
}

void func_801628B8_ovl_18(O *p);
void func_80162950_ovl_18(O *p);
