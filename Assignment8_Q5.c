//program which accept number from user returns the difference between summation of even digit and odd digit

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   CountDiff
// Input:           Integer
// Output:          Integer
// Description :    calculate difference between summation of even digit and odd digit
// Author:          Shubham Maruti Gaikwad
// Date:            14/05/2023
//
////////////////////////////////////////////////////////////

int CountDiff(int iNo)
{  
   if(iNo<0)
   {
      iNo=-iNo;
   }

   int iSumEven=0;
   int iSumOdd=0;
   int iDigit=0;
   
   while(iNo!=0)
   {
      iDigit=iNo%10;
      if((iDigit%2)==0)
      {
         iSumEven=iSumEven+iDigit;
      }
      else 
      {
         iSumOdd=iSumOdd+iDigit;
      }
      iNo=iNo/10;
   }  

   return (iSumEven-iSumOdd);
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

    iRet=CountDiff(iValue);

    printf("Difference of even & odd digit summation is:%d",iRet);

    return 0;
}

