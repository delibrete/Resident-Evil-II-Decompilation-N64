typedef struct Node { struct Node *next,*prev; u32 start; s32 kind; u32 size, data; } Node;
typedef struct Out { u32 a,b; u16 c,d; } Out;
typedef struct Rec { u32 size,start,data; } Rec;
extern Node *D_80143F34, *D_80143F38;
extern u16 D_80143F6C;
extern s32 D_80143F70, D_80143F7C;
extern Rec *D_80143F8C;
extern void *func_800A3568_overlay_001(s32);
extern s32 func_80135C50_overlay_001(s32,s32,u32,Node**);
void func_800A3600_ovl_01(Out *out,u32 start,u32 size,s32 kind) {
 u32 a[2], b[2], c[2], end=start+size, low=start-0x600; u32 pad[2];
 u32 n=0, rem=size, off;
 Node *p=D_80143F38,*next;
 s32 trim;
 if(p) {
  for(;p;) {
   next=p->next;
   if(p->kind==kind && p->start<end && low<p->start) {
    if(p->size!=0x600 && p->start+p->size<start+rem) {
     u32 e=start+rem;
     trim=(e>=p->start+0x600)?0x600-p->size:((e-(p->start+p->size)+0xff)&~0xff);
     D_80143F70+=12;
     D_80143F7C=func_80135C50_overlay_001(D_80143F7C,D_80143F70,p->start+p->size,&D_80143F38);
     { Rec *r=D_80143F8C+D_80143F6C; r->start=p->start+p->size; r->size=trim; r->data=p->data+p->size; D_80143F6C++; }
     p->size+=trim;
    }
    if(p!=D_80143F38) {
     if(p->prev) p->prev->next=p->next;
     if(p->next) p->next->prev=p->prev; else D_80143F34=p->prev;
     next=D_80143F38; D_80143F38=p; next->next=p;
     p->prev=next; p->next=0;
    }
    if(start<p->start) {
     a[n]=p->data; b[n]=p->start; c[n]=rem-(p->start-start); n++;
     rem=rem-(p->start-start);
    } else if(p->start+p->size<start+rem) {
     a[n]=p->data+(start-p->start); b[n]=start;
     c[n]=(p->start+p->size)-start; n++;
     rem-=c[n-1]; start=p->start+p->size;
    } else {
     a[n]=p->data+(start-p->start); b[n]=start; c[n]=rem; n++; rem=0;
    }
   }
   p=next;
  }
 }
 if(rem) {
  trim=(start-kind)%1536;
  __repair_rows: {
   Node *q=func_800A3568_overlay_001(kind);
   u32 total=rem+trim;
   q->start=start-trim; q->kind=kind;
   if(total>=0x601) {
    q->size=0x600; D_80143F70+=12;
    D_80143F7C=func_80135C50_overlay_001(D_80143F7C,D_80143F70,0,&D_80143F38);
    D_80143F8C[D_80143F6C].start=q->start;
    D_80143F8C[D_80143F6C].size=0x600;
    D_80143F8C[D_80143F6C].data=q->data;
    D_80143F6C++;
    a[n]=q->data+trim; b[n]=q->start+trim; c[n]=0x600-trim; n++;
    rem=rem-0x600+trim; start+=0x600-trim;
   } else {
    q->size=(total+0xff)&~0xff; D_80143F70+=12;
    D_80143F7C=func_80135C50_overlay_001(D_80143F7C,D_80143F70,0,&D_80143F38);
    D_80143F8C[D_80143F6C].start=q->start;
    D_80143F8C[D_80143F6C].size=q->size;
    D_80143F8C[D_80143F6C].data=q->data;
    D_80143F6C++;
    a[n]=q->data+trim; b[n]=q->start+trim; c[n]=rem; n++; rem=0;
   }
   trim=0;
  }
if (rem) goto __repair_rows;
 }
 if(n==1) {out->a=a[0];out->c=c[0];out->d=0;return;}
 if(b[0] >= b[1]) {out->a=a[1];out->b=a[0];out->c=c[1];out->d=c[0];}
 else {out->a=a[0];out->b=a[1];out->c=c[0];out->d=c[1];}
}
