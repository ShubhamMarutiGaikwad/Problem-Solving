//Program which accept number from user and display summation of its nonfactors 

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   SumNonFact
// Input:           Integer
// Output:          Integer
// Description :    display summation of nonfactors for the given input
// Author:          Shubham Maruti Gaikwad
// Date:            06/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

int SumNonFact(int iNo)
{  
    if(iNo<0)  //Updater
    {
        iNo=-iNo;
    }

   int iSum=0;
   int iCnt=0;

   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
    if((iNo%iCnt)!=0)
    {  
       iSum=iSum+iCnt;
    }
   }
   return iSum;
}
////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    int iValue=0;
    int iRet=0;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);
    
    printf("Summation is %d",iRet);

    return 0;
}