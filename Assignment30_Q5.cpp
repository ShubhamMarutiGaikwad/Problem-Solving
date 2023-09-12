/*
wap which returns smallest element from singly liner linked list

Function prototype:
int Minimum(PNODE Head);
Input linked list:|10|->|20|->|30|->|40|->|50|->|30|->|70|

Output:10


*/

// jar function kahitari change karnar asel tar call by address karaycha ani jar nusta print/count karnar asel tar call by value karaycha
#include<iostream>
using namespace std;

struct node
{
    int Data;
    node *next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(node));
    newn->next=NULL;
    newn->Data=no;
    if(*Head==NULL)
    {
        *Head=newn;
    }
    else
    {
        newn->next=*Head;
        *Head=newn;
        
    }

}

void Display(PNODE Head)
{
    while (Head!=NULL)
    {
        printf("|%d|->",Head->Data);
        Head=Head->next;
    }
    printf("NULL\n");
    
}

int Minimum(PNODE Head)
{
    int smallest=Head->Data;
    while (Head!=NULL)
    {
        if((Head->Data)<smallest)
        {
            smallest=Head->Data;
        }
        Head=Head->next;
    }
    return smallest;
    
}
int main()
{
    PNODE First=NULL;
    int iRet=0;
    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,90);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);
    
    Display(First);
    iRet=Minimum(First);
    cout<<"Smallest element from linkedlist is :"<<iRet;






    return 0;
}