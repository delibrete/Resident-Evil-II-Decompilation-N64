typedef struct Node { struct Node *next; struct Node *prev; u8 pad[8]; } Node;
extern s32 D_801581C0;
extern s32 D_801583D0;
extern Node *D_801583D4;
extern Node D_801581D0[];

void func_800AF020_ovl_01(void) {
    Node *prev;
    Node *cur;
    s32 i;
    prev = NULL;
    i = (s32)prev;
    D_801583D4 = D_801581D0;
    cur = D_801583D4;
    D_801581C0 = 0;
    D_801583D0 = 0;
    do {
        cur->prev = prev;
        if (prev != NULL) {
            prev->next = cur;
        }
        prev = cur;
        i++;
        cur = prev + 1;
    } while (i < 0x20);
    prev->next = NULL;
}
