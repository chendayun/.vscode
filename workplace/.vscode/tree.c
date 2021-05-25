#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct tree
{
   
    char element;
    struct tree *lchild;
    struct tree *rchild;
    
}treeNode;
treeNode *createTree()
{
    treeNode *root=(treeNode*)malloc(sizeof(treeNode));
    char data;
    scanf("%c",&data);
    if(data=='#')
        return NULL;
     root->element=data;
     root->lchild=createTree();
     root->rchild=createTree();


     return root;   
}

void preOrder(treeNode *root)
{
       treeNode *temp=root;
       if(temp!=NULL)
       {
         printf("%c",temp->element);
         preOrder(temp->lchild);
         preOrder(temp->rchild);
       }
       
         else
       {
           printf("#");
       }
       
}

void midOrder(treeNode *root)
{
     treeNode *temp=root;
       if(temp!=NULL)
       {
         
        midOrder(temp->lchild);
        printf("%c",temp->element);
        midOrder(temp->rchild);
       }
         else
       {
           printf("#");
       }
       
     
}


void laterOrder(treeNode *root)
{
     treeNode *temp=root;
       if(temp!=NULL)
       {
         
        laterOrder(temp->lchild);
        laterOrder(temp->rchild);
        printf("%c",temp->element);
       }
       else
       {
           printf("#");
       }
       
      
}


int main()
{
    treeNode *root=NULL;
    root=createTree();
    printf("先序序列:");
    preOrder(root);
    printf("\n");
    printf("中序序列:");
    midOrder(root);
    printf("\n");
    printf("后序序列:");
    laterOrder(root);
    printf("\n");
}

