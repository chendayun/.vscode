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
    SElemType data;
    StackNode *next;
} StackNode, *LinkStack;

Status IntiStack(LinkStack &S)
{
    S = NULL;
    return OK;
}
Status StackEmpty(LinkStack S)
{
    if (S == NULL)
    {
        return TRUE;
    }
    return FALSE;
}

Status Push(LinkStack &S, SElemType e)
{
    StackNode *p = new StackNode;
    p->data = e;
    p->next = S;
    S = p;
    return OK;
}
Status Pop(LinkStack &S, SElemType &e)
{
    e = S->data;
    StackNode *p = S;
    S = S->next;
    delete p;
    return 0;
}

SElemType GetTop(LinkStack S)
{
    if (S != NULL)
    {
        return S->data;
    }
}