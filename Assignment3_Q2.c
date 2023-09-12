//Program which accept number from user and display its factors in decreasing order

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   FactRev
// Input:           Integer
// Output:          Integer
// Description :    display its factors in decreasing order
// Author:          Shubham Maruti Gaikwad
// Date:            06/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N/2
////////////////////////////////////////////////////////////

void FactRev(int iNo)
{
    if(iNo<0)  //updater
    {
        iNo=-iNo;
    }

    int iCnt=0;
    for(iCnt=(iNo/2);iCnt>0;iCnt--)
    {
        if((iNo%iCnt)==0)
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

    FactRev(iValue);

    

    return 0;
}