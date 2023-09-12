/*
wap which displays  element which are perfect from singly liner linked list

Function prototype:
int DisplayPerfect(PNODE Head);
Input linked list:|11|->|28|->|17|->|41|->|6|->|89|

Output:6 28


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


void Display(PNODE Head)
{
    while (Head!=NULL)
    {
        printf("|%d|->",Head->Data);
        Head=Head->next;
    }
    printf("NULL\n");
    
}


void DisplayPerfect(PNODE Head)
{
    
    int iCnt=0,iSum=0,iNo=0;

    while(Head!=NULL)
    { 
                iNo=Head->Data;

        
            for ( iCnt = 1; iCnt <=iNo/2; iCnt++)
            { 
            
                if((iNo%iCnt)==0)
                {
                    iSum=iSum+iCnt;
                    
                }
                
            }
            if(iSum==iNo)
            {
                printf("%d\t",iNo);
            }
            iSum=0;
            Head=Head->next;
            
    }
  }
int main()
{
    PNODE First=NULL;
    int iRet=0;
    
    InsertFirst(&First,89);
    InsertFirst(&First,6);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,28);
    InsertFirst(&First,11);
    
    Display(First);
    DisplayPerfect(First);






    return 0;
}