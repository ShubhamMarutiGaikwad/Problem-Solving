//program which accept number from user returns the count digit in between 3 and 7

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   CountRange
// Input:           Integer
// Output:          Integer
// Description :    Count the digit between 3 to 7
// Author:          Shubham Maruti Gaikwad
// Date:            14/05/2023
//
////////////////////////////////////////////////////////////

int CountRange(int iNo)
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
      if((iDigit>3)&&(iDigit<7))
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

    iRet=CountRange(iValue);

    printf("Count of digit in between 3 & 7 is:%d",iRet);

    return 0;
}

