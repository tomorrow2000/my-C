#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}NODE;

NODE* createlist()
{
    NODE* headNode = (NODE*)malloc(sizeof(NODE));
    headNode->data = 0;
    headNode->next = NULL;
    return headNode;
}

NODE* createNode(int data)
{
    NODE *newNode = (NODE*)malloc(sizeof(NODE));
    newNode->data=data;
    newNode->next=NULL;
};

void insertnodebyheadnode(NODE* headNode,int data)
{
    NODE* newNode = createNode(data);
    newNode->next=headNode->next;
    headNode->next=newNode;
}

void insertnodebybottomnode(NODE* headNode,int data)
{
    NODE* newNode = createNode(data);
    NODE* terminal = headNode;
    while (terminal->next)
    {
        terminal=terminal->next;
    }
    terminal->next = newNode;
}
void printflist(NODE* headNode)
{
    NODE* move;
    move = headNode->next;
    while(move)
    {
        printf("%d-->",move->data);
        move = move->next;
    }
}

int main()
{
    NODE* list = createlist();
    insertnodebyheadnode(list,1);
    insertnodebyheadnode(list,2);
    insertnodebyheadnode(list,3);
    insertnodebybottomnode(list,4);
    insertnodebybottomnode(list,5);
    insertnodebybottomnode(list,6);
    printflist(list);
    return 0;
}
