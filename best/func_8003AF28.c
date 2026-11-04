extern void *D_800EBB34_overlay_001;
void func_8003AF28(void)
{
  unsigned int new_var4;
  char *new_var;
  u16 new_var2;
  new_var2 = *((u16 *) (((char *) D_800EBB34_overlay_001) + 4));
  if (D_800EBB34_overlay_001)
  {
    new_var2 = *((u16 *) (((char *) D_800EBB34_overlay_001) + 4));
    ;
    new_var4 = 0x100;
    *((u16 *) (((char *) D_800EBB34_overlay_001) + 4)) = (u16) (new_var2 + new_var4);
  }
  else
  {
    ;
    *((u16 *) (((char *) D_800EBB34_overlay_001) + 4)) = (u16) (new_var2 + new_var4);
  }
}

