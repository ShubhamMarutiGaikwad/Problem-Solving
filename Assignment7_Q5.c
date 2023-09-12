//program which accept number from user and count frequency of such digit which are less than 6

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   CheckTwo
// Input:           Integer
// Output:          Integer
// Description :    check whether number contain 2 in it or not and display its count 
// Author:          Shubham Maruti Gaikwad
// Date:            13/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////
int Count(int iNo)
{  
   if(iNo<0)
   {
      iNo=-iNo;
   }
   int iDigit=0;
   int iSum=0;

   while(iNo!=0)
   {   
      iDigit=iNo%10;
      if(((iDigit<6)&&(iDigit>=0))||(iDigit<0))
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
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=Count(iValue);

    printf("Digit count of below 6 in %d is %d",iValue,iRet);

    return 0;
}

