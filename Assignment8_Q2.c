//program which accept number from user returns the count of odd digit

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   CountOdd
// Input:           Integer
// Output:          Integer
// Description :    Count the even digit in given number  
// Author:          Shubham Maruti Gaikwad
// Date:            14/05/2023
//
////////////////////////////////////////////////////////////

int CountOdd(int iNo)
{  
   if(iNo<0)
   {
      iNo=-iNo;
   }

   int iSum=0;
   int iDigit=0;
   
   while(iNo!=0)
   {
      iDigit=iNo%10;
      if((iDigit%2)!=0)
      {
         iSum++;
      }
      iNo=iNo/10;
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

    iRet=CountOdd(iValue);

    printf("Count of odd digit is:%d",iRet);

    return 0;
}

