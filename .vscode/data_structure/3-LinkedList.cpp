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
typedef int ElemType;
typedef struct Lnode
{
    /* data */
    ElemType data;
    struct Lnode *next;

} LNode, *LinkList;

Status InitList(LinkList &L);
Status DestoryList_L(LinkList &L);
Status ClearList(LinkList &L);
int main()
{
    cout << "hello,world" << endl;
}

Status InitList(LinkList &L)
{
    L = new LNode;
    L->next = NULL;
    return OK;
}

int ListEmpty(LinkList L)
{
    if (L->next)
    {
        /* code */
        return 0;
    }
    else
    {
        return 1;
    }
}
Status DestoryList_L(LinkList &L)
{
    Lnode *p;
    while (L)
    {
        p = L;
        L = L->next;
        delete p;
    }
    return OK;
}
void CreateList_H(LinkList &L,int n)
{
    L = new LNode;
    L->next = NULL;
    for (int i = n ; i > 0; i--)
    {
        LinkList p = new LNode;
        cin >> p->data;
        p->next = L->next;
        L->next = p;
    }
    
}
void CreateLink_R(LinkList &L,int n)
{
    L = new LNode;
    L->next = NULL;
    LinkList r = L;
    for (int i = 0; i < n; i++)
    {
        LinkList p = new LNode;
        cin >> p->data;
        p->next = NULL;
        r->next = p;
        r = p;
    }

}
Status ClearList(LinkList &L)
{
    Lnode *p, *q;
    p = L->next;
    while (p)
    {
        q = p->next;
        delete p;
        p = q;
    }
    L->next = NULL;
    return OK;
}

int ListLength_L(LinkList &L)
{
    LinkList p;
    p = L->next;
    int i = 0;
    while (p)
    {
        i++;
        p = p->next;
    }
    return i;
}
Status GetItem_L(LinkList L, int i, ElemType &e)
{
    LinkList p = L->next;
    int j = 1;
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    if (!p || j > i)
        return ERROR;
    e = p->data;
    return OK;
}

Lnode *LocateELem_L(LinkList L, ElemType e)
{
    LinkList p = L->next;
    while (p && p->data != e)
    {
        p = p->next;
    }
    return p;
}

int LcateELemIndex_L(LinkList L, ElemType e)
{
    LinkList p = L->next;
    int i = 1; //注意
    while (p && p->data != e)
    {
        p = p->next;
        i++;
    }
    if (p)
    {
        return i;
    }
    return 0;
}
Status ListInsert_L(LinkList &L, int i, ElemType e)
{
    LinkList p = L;
    int j = 0;
    while (p && j < i - 1)
    {
        p = p->next;
        j++;
    }
    if (!p || j > i - 1)
        return ERROR;
    LinkList s = new LNode;
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}

Status ListDelete_L(LinkList &L, int i, ElemType &e)
{
    LinkList p = L;
    int j = 0;
    while (p->next && j < i - 1)
    {
        p = p->next;
        j++;
    }
    if (!(p->next) || j > i - 1)
        return ERROR;
    LinkList q = p->next;
    p->next = q->next;
    e = q->data;
    delete q;
    return OK;
}