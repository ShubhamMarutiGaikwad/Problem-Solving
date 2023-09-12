//program which accept number from user and display its digit in reverse order

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   DisplayDigit
// Input:           Integer
// Output:          Integer
// Description :    Display number digit in reverse order 
// Author:          Shubham Maruti Gaikwad
// Date:            13/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{  
   int iDigit=0;

   if(iNo<0)   // Updater to handle negative input
   {
    iNo=-iNo; 
   }

   while(iNo!=0)
   {
      iDigit=iNo%10;
      printf("%d",iDigit);

      iNo=iNo/10;
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

    DisplayDigit(iValue);

    return 0;
}

