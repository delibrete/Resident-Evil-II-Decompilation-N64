void func_80050EE8_ovl_01(void *arg0)
{
  volatile int var_a0;
  u16 var_a1;
  u16 var_v1;
  if ((*((u16 *) (((char *) arg0) + 0x66))) & 0x400)
  {
    var_v1 = *((u16 *) (((char *) arg0) + 0x130));
    var_a0 = *((u16 *) (((char *) arg0) + 0x138));
    var_a1 = *((u16 *) (((char *) arg0) + 0x136));
    *((u16 *) (((char *) arg0) + 0x13C)) = (u16) (*((u16 *) (((char *) arg0) + 0x132)));
  }
  else
  {
    var_v1 = *((u16 *) (((char *) arg0) + 0x132));
    var_a0 = *((u16 *) (((char *) arg0) + 0x136));
    var_a1 = *((u16 *) (((char *) arg0) + 0x138));
    *((u16 *) (((char *) arg0) + 0x13C)) = (u16) (*((u16 *) (((char *) arg0) + 0x130)));
  }
  *((u16 *) (((char *) arg0) + 0x13E)) = var_v1;
 do { *((u16 *) (((char *) arg0) + 0x12C)) = var_a0; } while (0);
  *((u16 *) (((char *) arg0) + 0x12E)) = var_a1;
  *((s32 *) (((char *) arg0) + 0x120)) = (s32) ((*((s32 *) (((char *) arg0) + 0x28))) + ((s16) (*((u16 *) (((char *) arg0) + 0x13C)))));
  *((s32 *) (((char *) arg0) + 0x124)) = (s32) ((*((s32 *) (((char *) arg0) + 0x2C))) + (*((s16 *) (((char *) arg0) + 0x134))));
  *((s32 *) (((char *) arg0) + 0x128)) = (s32) ((*((s32 *) (((char *) arg0) + 0x30))) + ((s16) (*((u16 *) (((char *) arg0) + 0x13E)))));
}
