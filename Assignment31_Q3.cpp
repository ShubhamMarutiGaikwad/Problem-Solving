/*
wap which displays  element which are prime from singly liner linked list

Function prototype:
int AdditionEven(PNODE Head);
Input linked list:|11|->|20|->|32|->|41|

Output:52


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


int AdditionEven(PNODE Head)
{
    
    int iCnt=0,iNo=0,iSum=0;
    while(Head!=NULL)
    { 
                iNo=Head->Data;
            
                if((iNo%2)==0)
                {
                 iSum=iSum+iNo;
                }                      
            Head=Head->next;
            
    }
    return iSum;
  }
int main()
{
    PNODE First=NULL;
    int iRet=0;
    
    
    InsertFirst(&First,41);
    InsertFirst(&First,32);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
    
    Display(First);
    iRet=AdditionEven(First);
    cout<<iRet<<endl;






    return 0;
}