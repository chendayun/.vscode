#include <stdio.h>
#include <stdlib.h>
#include "BiTree.h"

//先序创建二叉树
int CreateBiTree(BiTree *T)
{
    ElemType ch;
    ElemType temp;

    scanf("%d", &ch);
    temp = getchar();

    if (ch == -1)
        *T = NULL;
    else
    {
        *T = (BiTree)malloc(sizeof(BitNode));
        if (!(*T))
            exit(-1);

        (*T)->data = ch;
        printf("请输入%d的左子节点", ch);
        CreateBiTree(&(*T)->lchild);
        printf("输入%d的右子节点：", ch);
        CreateBiTree(&(*T)->rchild);
    }

    return 1;
}

void PreOrder(BiTree T)
{
    if (T == NULL)
        return;
    printf("%d ", T->data);
    PreOrder(T->lchild);
    PreOrder(T->rchild);
}

void InOrder(BiTree T)
{
    if (T == NULL)
        return;
    InOrder(T->lchild);
    printf("%d ", T->data);
    InOrder(T->rchild);
}

void PostOrder(BiTree T)
{
    if (T == NULL)
        return;
    PostOrder(T->lchild);
    PostOrder(T->rchild);
    printf("%d", T->data);
}

int TreeDeep(BiTree T)
{
    int deep = 0;
    if (T)
    {
        int leftdeep = TreeDeep(T->lchild);
        int rightdeep = TreeDeep(T->rchild);
        deep = leftdeep >= rightdeep ? leftdeep + 1 : rightdeep + 1;
    }
    return deep;
}
int LeafCount(BiTree T, int *num)
{
    if (T)
    {
        if (T->lchild == NULL && T->rchild == NULL)
            (*num)++;
        LeafCount(T->lchild, num);
        LeafCount(T->rchild, num);
    }
    return *num;
}
