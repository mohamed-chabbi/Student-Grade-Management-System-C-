#ifndef MODULE_H_INCLUDED
#define MODULE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef struct module
{
    char subject[20];
    int coef;
    float TD;
    float exam;
    struct module * next;
}module;
typedef  module* node;
node alloc ();
void init (node *p);
bool isEmpty (node p);
char * getmodulename (node p);
int getcoef(node p);
float getTD (node p);
float getexam (node p);
node getnext (node p);
void setmodulename (node p , char * subname);
void setexam (node p , float note);
void setTD (node p , float note);
void setcoef (node p , int coef);
void setnext (node p ,node q);
void FreeNode (node *p);
#endif
