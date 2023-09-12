/*Accept number from user and display below pattern
Example input=5
         output= A B C D E*/

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Pattern
// Input:           Integer
// Output:          Characters
// Description :    print the numbers of characters on screen upto the given number
// Author:          Shubham Maruti Gaikwad
// Date:            23/05/2023
//
////////////////////////////////////////////////////////////

void Pattern(int iNo)
{ 
  if(iNo<0)
  {
    iNo=-iNo;
  }
  char ch='A';
  int iCnt=0;
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    printf("%c\n",ch);
    ch++;
  }
  printf("\n");
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{
  int iValue=0;
  printf("Enter number of elements:");
  scanf("%d",&iValue);

  Pattern(iValue);

  return 0;

}

