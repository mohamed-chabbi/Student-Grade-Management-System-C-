#include "model.h"
node alloc ()
{
    return ((node)malloc(sizeof(module)));
}

char * getmodulename (node p)
{
 return (p->subject);
}

int getcoef(node p)
{
    return (p->coef);
}
float getTD (node p)
{
    return (p->TD);
}

float getexam (node p)
{
    return (p->exam);
}

node getnext (node p)
{
    return (p->next);
}

void setmodulename (node p , char * subname)
{
    strcpy(p->subject,subname);
}
void setexam (node p , float note)
{
    p->exam = note;
}
void setTD (node p , float note)
{
    p->TD = note;
}

void setcoef (node p , int cf)
{
    p->coef = cf;
}

void setnext (node p ,node q)
{
    p->next = q;
}

void init(node *p)
{
    *p = NULL;
}

bool isEmpty (node p)
{
    return (p == NULL);
}

void FreeNode (node *p)
{
    free(*p);
    *p = NULL;
}











