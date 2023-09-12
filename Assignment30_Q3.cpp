/*
wap which returns addition of all element from singly liner linked list

Function prototype:
int SearchLastOcc(PNODE Head, int no);
Input linked list:|10|->|20|->|30|->|40|->|50|->|30|->|70|

Output:250


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

int Addition(PNODE Head)
{
    int iCount=0;
    while(Head!=NULL)
    {
        iCount=iCount+Head->Data;
        Head=Head->next;
    }
    return iCount;
}
int main()
{
    PNODE First=NULL;
    int iRet=0;
    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);
    
    Display(First);
    iRet=Addition(First);
    cout<<"Sum of all elements of linkedlist is :"<<iRet;






    return 0;
}