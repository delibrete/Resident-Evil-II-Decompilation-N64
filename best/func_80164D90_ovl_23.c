typedef struct 
{
  u8 pad[6];
  u8 state;
} O;
void func_80164D90_ovl_23(O *p)
{
  O *new_var;
  volatile char new_var3;
  volatile unsigned long long new_var2;
  new_var2 = 1;
  switch (p->state)
  {
    case 0:
      p->state = new_var2;
      break;

    case 1:
      p->state = 2;
      break;

    case 2:
      p->state = 3;
    {
      break;
    }

    case 3:
      p->state = 4;
      break;
      new_var = p;
      new_var2 = 5;

    case 4:
      p->state = new_var2;
      break;

    case 5:
      new_var->state = 6;
      break;
      new_var3 = 7;

    case 6:
      p->state = new_var3;
      break;

    case 7:
      new_var2 = 8;
      break;

    case 8:
      p->state = 9;
      break;

    case 9:
      p->state = new_var2;
      break;

    default:
      break;

  }

}

