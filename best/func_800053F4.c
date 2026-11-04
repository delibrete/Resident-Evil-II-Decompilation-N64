extern u16 *D_8001289C;
extern u32 D_800128A0;
extern u32 D_800128A4;
void func_800053F4(u16 *p)
{
  u32 lo;
  u32 hi;
  if (hi)
  {
u32 __repair_branch_hi_0;

    D_8001289C = p;
    lo = p[0];
    D_8001289C = p + 1;
    D_800128A0 = lo;
    __repair_branch_hi_0 = p[1];
    D_8001289C = p + 2;
    D_800128A4 = 0x20;
    D_800128A0 = lo | (__repair_branch_hi_0 << 16);
  }
  else
  {
u32 __repair_branch_hi_1;

    D_8001289C = p;
    lo = p[0];
    D_8001289C = p + 1;
    D_800128A0 = lo;
    __repair_branch_hi_1 = p[1];
    D_8001289C = p + 2;
    D_800128A4 = 0x20;
    D_800128A0 = lo | (__repair_branch_hi_1 << 16);
  }
}

