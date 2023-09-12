//Program which accept number from user and print all odd numbers up to N.

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   OddDisplay
// Input:           Integer
// Output:          Integer
// Description :    Display odd numbers from 1 to given input number
// Author:          Shubham Maruti Gaikwad
// Date:            11/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{ 
   int iCnt=0;
   for(iCnt=1;iCnt<=iNo;iCnt++)
   {
    if((iCnt%2) != 0)
    {
      printf("%d ",iCnt);
    }
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

    OddDisplay(iValue);

    return 0;
}

