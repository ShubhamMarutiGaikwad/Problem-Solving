//program which accept number from user returns the count of even digit

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   CountEven
// Input:           Integer
// Output:          Integer
// Description :    Count the even digit in given number  
// Author:          Shubham Maruti Gaikwad
// Date:            14/05/2023
//
////////////////////////////////////////////////////////////

int CountEven(int iNo)
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
      if((iDigit%2)==0)
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

    iRet=CountEven(iValue);

    printf("Count of even digit is:%d",iRet);

    return 0;
}

