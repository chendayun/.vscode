#include <iostream>
using namespace std;

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXSIZE 100
typedef int Status;
typedef int SElemType;

typedef struct
{
    SElemType *base;
    SElemType *top;
    int stacksize;
} SqStack;
int main()
{

    return 0;
}
Status InitStack(SqStack &S)
{
    S.base = new SElemType[MAXSIZE];
    if (!S.base)
    {
        exit(OVERFLOW);
    }
    S.top = S.base;
    S.stacksize = MAXSIZE;
    return OK;
}

Status StackEMpty(SqStack S)
{
    if (S.top == S.base)
    {
        return TRUE;
    }
    return FALSE;
}

int StackLength(SqStack S)
{
    return S.top - S.base;
}

Status ClearStack(SqStack S)
{
    if (S.base)
    {
        S.top = S.base;
    }
    return OK:
}

Staus DestroyStack(SqStack &S)
{
    if (S.base)
    {
        delete S.base;
        S.stacksize = 0;
        S.base = S.top = NULL;
    }
}

Status Push(SqStack &S, SElemType e)
{
    if (S.top - S.base == S.stacksize)
        return ERROR;
    *S.top++ = e;
    return OK;
}
Status Pop(SqStack &S, SElemType &e)
{
    if (S.top = S.base)
    {
        return ERROR;
    }
    e = *--S.top;
    return OK;
}