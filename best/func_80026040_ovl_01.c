extern volatile u8 D_800C4EA8_ovl_01[];
extern volatile u8 D_800C4E58_ovl_01[];
extern volatile u8 D_8013146C_ovl_01[];
extern volatile u8 D_80134460_ovl_01[];
extern volatile u8 D_800C7650_ovl_01[];
extern void func_80029718_ovl_01(void);
extern void func_80029F38_ovl_01(void);
typedef struct 
{
  u8 pad[0x10];
  s32 f10;
} S28380;
typedef struct 
{
  u8 pad[0x24];
  void (*fn)(void *, s32);
} T28380;
void func_80028380_ovl_01(S28380 *p);
typedef struct 
{
  u8 pad[0x178];
  void *p;
} C2A;
typedef struct 
{
  void *fn0;
  void *fn4;
  u8 pad[0x24];
  s32 f28;
  u8 pad2[0xC];
  s32 f38;
} Node;
void func_8002A528_ovl_01(C2A *p);
void func_80026040_ovl_01(void)
{
  extern s32 func_80025A60_ovl_01(s32);
  *((volatile u8 *) (D_800C4EA8_ovl_01 + 0x17)) = 2;
  do
  {
    *((volatile u8 *) (0x17 + D_800C4E58_ovl_01)) = 2;
  }
  while (0);
  *((volatile u8 *) (D_800C4EA8_ovl_01 + 0x16)) = 0;
  *((volatile u8 *) (D_800C4E58_ovl_01 + 0x16)) = 0;
  func_80025A60_ovl_01(2);
}

void func_80025D60_ovl_01(void);
