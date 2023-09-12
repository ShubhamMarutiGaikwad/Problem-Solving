/*
wap which displays  element which return second maximum element from singly liner linked list

Function prototype:
int SecMax(PNODE Head);
Input linked list:|110|->|230|->|320|->|240|

Output:240


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

int SecMax(PNODE Head)
{
    int Largest=0,SecondLargest=0;

    while (Head!=NULL)
    { 
        int iNo=Head->Data;
        if(iNo>Largest)
        {
            SecondLargest=Largest;
            Largest=iNo;
        }
        else
        {
            if(iNo>SecondLargest && iNo<Largest)
            {
                SecondLargest=iNo;
            }
        }
       
        Head=Head->next;
    }
    return SecondLargest;
    
}
int main()
{
    PNODE First=NULL;
    int iRet=0;
    
    
    InsertFirst(&First,240);
    InsertFirst(&First,320);
    InsertFirst(&First,230);
    InsertFirst(&First,110);
    
    Display(First);
    iRet=SecMax(First);
    cout<<iRet<<endl;






    return 0;
}