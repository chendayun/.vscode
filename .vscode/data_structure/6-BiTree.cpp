#include <iostream>
using namespace std;

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXQSIZE 100
typedef int Status;
typedef int TElemType;
typedef struct
{
    TElemType data;
    BiNode *lchild, *rchild;
} BiNode, *BiTree;
