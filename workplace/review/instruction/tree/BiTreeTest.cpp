#include <stdio.h>
#include <stdlib.h>
#include "BiTree.h"
int main()
{
    BiTree T;
    BiTree *p = (BiTree *)malloc(sizeof(BiTree));
    int deepth, num = 0;
    printf("请输入第一个结点的值,-1表示没有叶子结点:\n");
    CreateBiTree(&T);
    printf("先序遍历二叉树:\n");
    PreOrder(T);
    printf("\n");
    printf("中序遍历二叉树:\n");
    InOrder(T);
    printf("\n");
    printf("后序遍历二叉树:\n");
    PostOrder(T);
    printf("\n");
    deepth = TreeDeep(T);
    printf("树的深度为:%d", deepth);
    printf("\n");
    LeafCount(T, &num);
    printf("树的叶子结点个数为:%d", num);
    printf("\n");
}