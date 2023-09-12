/*
wap which displays addition of digits of element from singly liner linked list

Function prototype:
int SumDigit(PNODE Head);
Input linked list:|110|->|230|->|320|->|240|->|640|

Output:2    5   2   6   20


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

void SumDigit(PNODE Head)
{
    int iDigit=0,iSum=0;

    while (Head!=NULL)
    { int iNo=Head->Data;

        while (iNo!=0)
        {
            iDigit=iNo%10;
            iSum=iSum+iDigit;
            iNo=iNo/10;
        }
        printf("%d\t",iSum);
        iSum=0;
        
        Head=Head->next;
        
    }
  
    
}
int main()
{
    PNODE First=NULL;
    int iRet=0;
    
    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,230);
    InsertFirst(&First,110);
    
    Display(First);
    SumDigit(First);
 






    return 0;
}