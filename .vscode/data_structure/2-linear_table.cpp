#include <bits/stdc++.h>
using namespace std;

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXSIZE 100
typedef int Status;
typedef char ElemType;
typedef struct
{
    ElemType *elem;
    int lenth;
} SqList;

Status InitList_Sq(SqList &L);
void DestroyList(SqList &L);
void ClearList(SqList &L);
int GetLength(SqList L);
int GetElem(SqList L, int i, ElemType &e);
int LocateElem(SqList L, ElemType e);
Status ListInsert_Sq(SqList &L, int i, ElemType e);
Status ListDelete_Sq(SqList &L, int i);
int main()
{
    SqList L;
    int res = InitList_Sq(L);
    if (res == 1)
    {
        cout << "初始化线性表成功！" << endl;
    }
    else
    {
        cout << "初始化线性表失败！" << endl;
        return -1;
    }

    DestroyList(L);
    return 0;
}
Status InitList_Sq(SqList &L) //初始化顺序表
{
    L.elem = new ElemType[MAXSIZE];
    if (!L.elem)
    {
        exit(OVERFLOW);
    }
    L.lenth = 0;
    return OK;
}
void DestroyList(SqList &L) //销毁线性表
{
    if (L.elem)
    {
        delete[] L.elem;
        L.elem = NULL;
        cout << "释放线性表成功" << endl;
    }
}

void ClearList(SqList &L)
{
    L.lenth = 0;
}
int GetLength(SqList L)
{
    return L.lenth;
}
int isEmpty(SqList L)
{
    if (L.lenth == 0)
    {
        /* code */
        return 1;
    }
    return 0;
}
int GetElem(SqList L, int i, ElemType &e)
{
    if (i < 1 || i > L.lenth)
        return ERROR;
    e = L.elem[i - 1];
    return OK;
}
int LocateElem(SqList L, ElemType e)
{
    for (int i = 0; i < L.lenth; i++)
    {
        if (e == L.elem[i])
            return i + 1;
    }
    return 0;
}
Status ListInsert_Sq(SqList &L, int i, ElemType e)
{
    if (i < 1 || i > L.lenth + 1)
        return ERROR;
    if (L.lenth == MAXSIZE)
    {
        return ERROR;
    }

    for (int j = L.lenth - 1; j >= i - 1; j--)
        L.elem[j + 1] = L.elem[j];
    L.elem[i - 1] = e;
    L.lenth++;
    return OK;
}

Status ListDelete_Sq(SqList &L, int i)
{
    if (i < 1 || i > L.lenth)
    {
        return ERROR;
    }
    for (int j = i; j < L.lenth; j++)
    {
        L.elem[j - 1] = L.elem[j];
    }
    L.lenth--;
    return OK;
}