
#ifndef BITREE_H
#define BITREE_H
typedef int ElemType;

typedef struct BitNode
{
    /* data */
    ElemType data;
    struct BitNode *lchild, *rchild;

} BitNode, *BiTree;

int CreateBiTree(BiTree *T);

void PreOrder(BiTree T);

void InOrder(BiTree T);

void PostOrder(BiTree T);

int TreeDeep(BiTree T);

int LeafCount(BiTree T, int *num);
#endif