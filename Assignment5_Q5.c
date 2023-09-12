//Program which accept N from user and print first 5 multiplies of N.

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   MultipleDisplay
// Input:           Integer
// Output:          Integer
// Description :    Display first 5 multiplies of the f=given input number
// Author:          Shubham Maruti Gaikwad
// Date:            11/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{ 
  int Multiplication=0;
  int iCnt=0;

  for(iCnt=1;iCnt<=5;iCnt++)
  {
    Multiplication=iNo*iCnt;
    printf("%d ",Multiplication);
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

    MultipleDisplay(iValue);

    return 0;
}

