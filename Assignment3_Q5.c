//Program which accept number from user and display difference between summation of its factors & nonfactors 

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   SumNonFact
// Input:           Integer
// Output:          Integer
// Description :    display difference between summation of its factors & nonfactors 
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
    
   int iFactSum=0;
   int iNonFactSum=0;
   int iCnt=0;

   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
    if((iNo%iCnt)!=0)
    {  
       iNonFactSum=iNonFactSum+iCnt;
    }
   }
    for(iCnt=1;iCnt<=(iNo/2);iCnt++)
   {
    if((iNo%iCnt)==0)
    {  
       iFactSum=iFactSum+iCnt;
    }
   }

   return (iFactSum-iNonFactSum);
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