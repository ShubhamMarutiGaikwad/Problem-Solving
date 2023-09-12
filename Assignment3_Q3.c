//Program which accept number from user and display its nonfactors 

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   FactRev
// Input:           Integer
// Output:          Integer
// Description :    display its nonfactors of the given input number
// Author:          Shubham Maruti Gaikwad
// Date:            06/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    if(iNo<0)  //updater
    {
        iNo=-iNo;
    }

    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            printf("%d ",iCnt);
        }
    }
}
////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    int iValue=0;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    NonFact(iValue);

    

    return 0;
}