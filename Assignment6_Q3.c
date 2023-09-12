//Program to find factorial of given number
//Ex:5=5*4*3*2*1 =(120)

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Factorial
// Input:           Integer
// Output:          Integer
// Description :    Display factorial of given number
// Author:          Shubham Maruti Gaikwad
// Date:            11/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

int Factorial(int iNo)
{ 
  if(iNo<0)  // Updater to handle negative input
  {
    iNo=-iNo;
  }

  int iCnt=0;
  int iSum=1;
  
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    iSum=iSum * iCnt;
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

    iRet=Factorial(iValue);

    printf("Factorial of %d is: %d",iValue,iRet);

    return 0;
}

