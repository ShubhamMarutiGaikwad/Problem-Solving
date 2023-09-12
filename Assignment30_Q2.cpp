/*
wap which search Last occurence of particular element from singly linear linked list
function should return position at which element is found

Function prototype:
int SearchFirstOcc(PNODE Head, int no);
Input linked list:|10|->|20|->|30|->|40|->|50|->|30|->|70|
Input element:30
Output:6


*/
//you can refer program 93 for lastocc logic
// jar function kahitari change karnar asel tar call by address karaycha ani jar nusta print/count karnar asel tar call by value karaycha
//reserve loop jasta efficient aahe last occurence sathi
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
int Count(PNODE Head)
{
    int iCount=0;
    while (Head!=NULL)
    {
        iCount++;
        Head=Head->next;
    }
    return iCount;
    
}
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
int SearchLastOcc(PNODE Head, int ino)
{ 
 int iLength=Count(Head);
 int iCnt=0;
 int iPos=0;
    for( iCnt=iLength;iCnt>=1;iCnt--)
    {
        if(Head->Data==ino)
        {
            break;
        }
        iPos=iCnt;
        Head=Head->next;
    }
    return iPos;
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
    iRet=SearchLastOcc(First,30);
    cout<<"Last occurence of 30 is at location :"<<iRet;






    return 0;
}