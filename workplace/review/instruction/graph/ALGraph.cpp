#include <stdio.h>
#include <iostream>
#include <malloc.h>
#include "ALGraph.h"

using namespace std;

void CreateALG(ALGraph *g)
{
    g = (ALGraph *)malloc(sizeof(ALGraph));

    cout << "输入顶点的数目: " << endl;
    cin >> g->vexnum;

    cout << "输入图中边的数目: " << endl;
    cin >> g->arcnum;

    cout << g->vexnum << " ";

    for (int i = 0; i < g->vexnum; i++)
    {
        g->vertices[i].frist = NULL;
    }
    ArcNode *node;

    //
    int u = -1, v = -1;
    cout << g->arcnum << endl;
    for (int i = 0; i < g->arcnum; i++)
    {
        cout << "请输入两个顶点" << endl;

        cin >> u >> v;
        node = (ArcNode *)malloc(sizeof(ArcNode));
        node->adjVex = v;
        node->next = NULL;
        g->vertices[u].data = u;
        if (g->vertices[u].frist == NULL)
        {
            g->vertices[u].frist = node;
        }
        else
        {
            // printf("ptr address: %d %d\n", g->vertices[u].frist, node);
            InsertNode(&(g->vertices[u].frist), &node);
        }
    }
}

void InsertNode(ArcNode **node, ArcNode **newNode)
{
    //  printf("function %d %d\n", node, newNode);
    ArcNode *p = (*node);
    while (p->next != NULL)
    {
        /* code */
        p = p->next;
    }
    p->next = (*newNode);
}

void TraverseALG(ALGraph g)
{
    cout << "vexnum" << endl;
    for (int i = 0; i < g.vexnum; i++)
    {
        if (g.vertices[i].frist != NULL)
        {
            cout << i << " ";
        }
        ArcNode *p = g.vertices[i].frist;
        while (p != NULL)
        {
            /* code */
            cout << p->adjVex << " ";
            p = p->next;
        }
        cout << endl;
    }
}