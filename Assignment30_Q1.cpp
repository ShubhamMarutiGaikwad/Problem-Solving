/*
wap which search First occurence of particular element from singly linear linked list
function should return position at which element is found

Function prototype:
int SearchFirstOcc(PNODE Head, int no);
Input linked list:|10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element:30
Output:3


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
int SearchFirstOcc(PNODE Head, int ino)
{ 
 int iCount=1;
    while(Head!=NULL)
    {
        if(Head->Data==ino)
        {
            
            
            break;
        }
        iCount++;
         Head = Head -> next;
        
    }
    return iCount;
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
    iRet=SearchFirstOcc(First,70);
    cout<<"Element 30 is at location :"<<iRet;
    return 0;
}