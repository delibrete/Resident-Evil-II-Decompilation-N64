typedef struct Node
{
  struct Node *next;
  struct Node *prev;
} Node;
extern Node *D_80143F34;
extern Node *D_80143F38;
extern Node *D_80143F3C;
Node *func_800A3568_ovl_01(void)
{
  volatile unsigned short new_var;
  Node *node = D_80143F3C;
  Node *new_var2;
  Node *next;
  if (0 != node)
  {
    next = node->next;
    D_80143F3C = next;
    if (next == 0)
    {
      node->next = 0;
      D_80143F38 = 0;
    }
    else
    {
      new_var = 0;
      next->prev = 0;
    }
    if (D_80143F38 == new_var)
    {
      next = D_80143F34;
      node->next = next;
      if (next != 0)
      {
        next->prev = node;
      }
      D_80143F34 = node;
      D_80143F38 = node;
    }
    else
    {
      node->next = 0;
      D_80143F38->next = node;
      node->prev = D_80143F38;
      D_80143F38 = node;
    }
    return node;
  }
  node = D_80143F34;
  new_var2 = node;
  next = node->next;
  next->prev = 0;
  node->next = 0;
  node->prev = node;
  node->next = new_var2;
  D_80143F38 = node;
  D_80143F34 = next;
  return node;
}

