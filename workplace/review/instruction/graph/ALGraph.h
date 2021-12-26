#ifndef ALGRAPH_H
#define ALGRAPH_H

#include <string>
using namespace std;

#define MAX_VERTEX_NUM 100
typedef int Status;
typedef int VertexType;
//边表节点
typedef struct ArcNode
{
    /* data */
    int adjVex;
    // int weight;
    ArcNode *next;
} ArcNode;

//顶点表结点

typedef struct VNode
{
    /* data */
    VertexType data;
    ArcNode *frist;
} VNode, AdjList[MAX_VERTEX_NUM];
typedef struct ALGraph
{
    /* data */
    AdjList vertices;   //邻接表
    int vexnum, arcnum; //图的顶点数，弧数
} ALGraph;

void CreateALG(ALGraph *g);

void InsertNode(ArcNode **node, ArcNode **newNode);

void TraverseALG(ALGraph g);

// //基于图的深度优先搜索策略算法
// Status DfsReachable(ALGraph g, int i, int j);

// //基于图的广度优先搜索策略算法
// Status BfsReachable(ALGraph g, int i, int j);
#endif