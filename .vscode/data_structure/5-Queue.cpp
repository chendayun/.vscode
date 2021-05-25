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
typedef int QElemType;
typedef struct
{
    QElemType *base;
    int front; //头
    int rear;

} SqQueue;
Status InitQueue(SqQueue Q)
{
    Q.base = new QElemType[MAXQSIZE];
    if (!Q.base)
        return ERROR;
    Q.front = Q.rear;
    return OK;
}

int QueueLength(SqQueue Q)
{
    return (Q.rear - Q.rear + MAXQSIZE) % MAXQSIZE;
}
Status DeQueue(SqQueue &Q, QElemType &e)
{
    if ((Q.front == Q.rear))
    {
        return ERROR;
    }
    e = Q.base[Q.front];
    Q.front = (Q.front + 1) % MAXQSIZE;
    return OK;
}
Status EnQueue(SqQueue &Q, QElemType e)
{
    if ((Q.rear + 1) % MAXQSIZE == Q.front)
        return ERROR;
    Q.base[Q.rear] = e;
    Q.rear = (Q.rear + 1) % MAXQSIZE;
    return OK;
}
QElemType GetHead(SqQueue Q)
{
    if (Q.front != Q.rear)
        return Q.base[Q.front];
    return 0;
}