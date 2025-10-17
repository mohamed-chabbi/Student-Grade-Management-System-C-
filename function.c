#include "function.h"
#include "model.h"

node creatNode (char *subname , int cf , float noteE , float noteT)
{
    node h = alloc();
    setcoef(h , cf);
    setexam(h , noteE);
    setmodulename(h , subname);
    setTD(h , noteT);
    setnext(h , NULL);
    return h;
}

void lecture (node *p ,char *subname , int cf , float noteE , float noteT)
    {
      node h = creatNode (subname , cf , noteE , noteT);
      if (isEmpty(*p))
           *p = h;
      else{
           setnext(h , *p);
           *p = h;
          }
    }

float calcMoy (node p , float examp , float TDp)
{
    float  moy = 0;
    int CF = 0;
    node tmp;
    while (!isEmpty(p))
        {
         moy += (getexam(p) * examp + getTD(p) * TDp) * getcoef(p);
         CF += + getcoef(p);
         p = getnext(p);
        }
   return(moy/CF);
}

void freeList(node *p) {
    node tmp;
    while (*p != NULL) {
        tmp = *p;
        *p = getnext(*p);
        FreeNode(&tmp);
    }
}

