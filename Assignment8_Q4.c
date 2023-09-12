//program which accept number from user returns the multiplication of all digit.

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   MultiDigit
// Input:           Integer
// Output:          Integer
// Description :    perform the multipication of all digit in numbers
// Author:          Shubham Maruti Gaikwad
// Date:            14/05/2023
//
////////////////////////////////////////////////////////////

int MultiDigit(int iNo)
{  
  
   int iMul=1;
   int iDigit=0;
   
   while(iNo!=0)
   {
      iDigit=iNo%10;
      if(iDigit==0)
      {  
         continue;
      }
      else
      {
         iMul=iMul*iDigit;
         iNo=iNo/10;
      }    
   }  
   return iMul;
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

    iRet=MultiDigit(iValue);

    printf("Multiplication of digit is:%d",iRet);

    return 0;
}

