extern unsigned short D_800E10C8;
s32 func_80032B8C_ovl_01();
s32 func_80032C08_ovl_01();
s32 func_80040BE4_ovl_01();
s32 func_80089D34_ovl_01();
s32 func_80174448_overlay_045();
extern char D_800C7650[];
extern char D_80174820_overlay_045[];
typedef struct { unsigned char pad[288]; int value; } __repair_field_120;
void func_80170B20_overlay_045(void *arg0, s32 arg1, s32 arg2)
{
  s32 temp_v0;
  
  s32 temp_v0_2;
  s32 var_a0;
  s32 var_v0;
  u16 var_v0_2;
  u8 temp_v1;
  union { void * pointer; s32 value; } __repair_phase_storage;
  temp_v1 = *((u8 *) (((char *) arg0) + 6));
  var_a0 = 0x270F;
  switch (temp_v1)
  {
    case 0:
      *((u8 *) (((char *) arg0) + 6)) = 1U;
      if ((*((u8 *) (((char *) arg0) + 0x2CC))) & 1)
    {
      *((s16 *) (((char *) arg0) + 0x1E0)) = 0;
      *((s16 *) (((char *) arg0) + 0x1E2)) = 0x19;
    }
    else
    {
      *((s16 *) (((char *) arg0) + 0x1E0)) = 0x19;
      *((s16 *) (((char *) arg0) + 0x1E2)) = 0;
    }
      *((s16 *) (((char *) arg0) + 0x1E4)) = 0;
      ((__repair_field_120 *)arg0)->value = (s32) (*((s32 *) (D_80174820_overlay_045 + 0x20)));
      *((s32 *) (((char *) arg0) + 0x124)) = (s32) (*((s32 *) (D_80174820_overlay_045 + 0x24)));
      *((s32 *) (((char *) arg0) + 0x128)) = (s32) (*((s32 *) (D_80174820_overlay_045 + 0x28)));
      *((s32 *) (((char *) arg0) + 0x12C)) = (s32) (*((s32 *) (D_80174820_overlay_045 + 0x2C)));
      *((s32 *) (((char *) arg0) + 0x130)) = (s32) (*((s32 *) (D_80174820_overlay_045 + 0x30)));
      *((s32 *) (((char *) arg0) + 0x134)) = (s32) (*((s32 *) (D_80174820_overlay_045 + 0x34)));
      *((s32 *) (((char *) arg0) + 0x138)) = (s32) (*((s32 *) (D_80174820_overlay_045 + 0x38)));
      *((s32 *) (((char *) arg0) + 0x13C)) = (s32) (*((s32 *) (D_80174820_overlay_045 + 0x3C)));
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x300;

    case 1:
      __repair_phase_storage.pointer = *((void **) (((char *) arg0) + 0x2DC));
      if (__repair_phase_storage.pointer != NULL)
    {
      var_v0 = 0x270F < 0x9C5;
      if ((*((u8 *) (((char *) __repair_phase_storage.pointer) + 4))) != 7)
      {
        temp_v0 = (*((s32 *) (((char *) arg0) + 0x28))) - (*((s32 *) (((char *) __repair_phase_storage.pointer) + 0x28)));
        temp_v0_2 = (*((s32 *) (((char *) arg0) + 0x30))) - (*((s32 *) (((char *) __repair_phase_storage.pointer) + 0x30)));
        var_a0 = func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2));
        if ((*((u8 *) (((char *) __repair_phase_storage.pointer) + 0x2BE))) != 1)
        {
          var_a0 = 0x270F;
        }
        goto block_14;
      }
    }
    else
    {
      block_14:
      var_v0 = var_a0 < 0x9C5;

    }
      if (var_v0 == 0)
    {
      *((u8 *) (((char *) arg0) + 6)) = 2U;
      *((s32 *) (((char *) arg0) + 0x1E8)) = 0x0E000300;
    }
      func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
      break;

    case 2:
      func_80032C08_ovl_01(arg0, 0, *((s16 *) (((char *) arg0) + 0x2C2)));
      if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0)
    {
      *((s8 *) (((char *) arg0) + 0x2BE)) = 1;
      *((s16 *) (((char *) arg0) + 0x2B6)) = 0x800;
      if ((*((u8 *) (((char *) arg0) + 0x2CC))) & 1)
      {
        var_v0_2 = (*((u16 *) (((char *) arg0) + 0x64))) + 0x800;
      }
      else
      {
        var_v0_2 = (*((u16 *) (((char *) arg0) + 0x66))) + 0x800;
      }
      __repair_phase_storage.value = *((s32 *) (D_80174820_overlay_045 + 0x10));
      *((u16 *) (((char *) arg0) + 0x66)) = var_v0_2;
      *((s16 *) (((char *) arg0) + 0x68)) = 0x800;
      *((u8 *) (((char *) arg0) + 0x2CE)) = 0x96;
      *((u16 *) (((char *) arg0) + 0x64)) = 0U;
      *((s16 *) (((char *) arg0) + 0x1E0)) = 0x4C9;
      *((s32 *) (((char *) arg0) + 0x2C)) -= 0x1DB;
      func_80032B8C_ovl_01(arg0, *((s16 *) (((char *) arg0) + 0x2B6)));
      ((__repair_field_120 *)arg0)->value = (s32) (*((s32 *) (D_80174820_overlay_045 + 0)));
      *((s32 *) (((char *) arg0) + 0x124)) = (s32) (*((s32 *) (D_80174820_overlay_045 + 4)));
      *((s32 *) (((char *) arg0) + 0x128)) = (s32) (*((s32 *) (D_80174820_overlay_045 + 8)));
      *((s32 *) (((char *) arg0) + 0x12C)) = (s32) (*((s32 *) (D_80174820_overlay_045 + 0xC)));
      *((s32 *) (((char *) arg0) + 0x130)) = (s32) __repair_phase_storage.value;
      *((s32 *) (((char *) arg0) + 0x134)) = (s32) (*((s32 *) (D_80174820_overlay_045 + 0x14)));
      *((s32 *) (((char *) arg0) + 0x138)) = (s32) (*((s32 *) (D_80174820_overlay_045 + 0x18)));
      *((s32 *) (((char *) arg0) + 0x13C)) = (s32) (*((s32 *) (D_80174820_overlay_045 + 0x1C)));
      *((s32 *) (((char *) arg0) + 0x134)) = 0;
      *((s32 *) (((char *) arg0) + 4)) = 0x01000000;
      *((s8 *) (((char *) arg0) + 0x2D2)) = 0;
      D_800E10C8 = (u16) (D_800E10C8 & 0xFFDF);
      *((s8 *) (((char *) arg0) + 0x2C1)) = 0;
    }
      break;

  }

  func_80174448_overlay_045(arg0);
}

