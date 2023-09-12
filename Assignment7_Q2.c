//program which accept number from user and check whether it contain 0 or not 

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////
// 
// Function name:   ChkZero
// Input:           Integer
// Output:          Integer
// Description :    check whether number contain 0 or not 
// Author:          Shubham Maruti Gaikwad
// Date:            13/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////
BOOL ChkZero(int iNo)
{
   int iDigit=0;

   while(iNo!=0)
   {
      iDigit=iNo%10;
      if(iDigit==0)
      {
         break;
      }
      iNo=iNo/10;
   }
   if(iDigit==0)
   {
      return TRUE;
   }
   else
   {
      return FALSE;
   }

}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    int iValue=0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet=ChkZero(iValue);

    if(bRet==TRUE)
    {
      printf("It contains zero");
    }
    else
    {
      printf("It does not contain zero");
    }

    return 0;
}

