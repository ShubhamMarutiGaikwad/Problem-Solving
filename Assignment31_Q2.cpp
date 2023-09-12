/*
wap which displays  element which are prime from singly liner linked list

Function prototype:
int DisplayPrime(PNODE Head);
Input linked list:|11|->|20|->|17|->|41|->|22|->|89|

Output:11 17 41 89


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
void DisplayPrime(PNODE Head)
{
    
    int iCnt=0,iNo=0,prime=0;
    while(Head!=NULL)
    { 
                iNo=Head->Data;

        
            for ( iCnt = 2; iCnt <=iNo/2; iCnt++)
            { 
            
                if((iNo%iCnt)==0)
                {
                  prime++;
                  
                    
                }
                
                
            }
            if(prime<=1)
            {
                printf("%d\t",iNo);
            }
            prime=0;
            
            
            
            Head=Head->next;
            
    }
  }
int main()
{
    PNODE First=NULL;
    int iRet=0;
    
    InsertFirst(&First,89);
    InsertFirst(&First,22);
    InsertFirst(&First,41);
    InsertFirst(&First,17);
    InsertFirst(&First,20);
    InsertFirst(&First,11);
    
    Display(First);
    DisplayPrime(First);






    return 0;
}