/*Accept number from user and display below pattern
Example input=5
         output= 5 * 4 * 3 * 2 * 1 *    
*/

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
  int iCnt=0;
  char ch='#';
  for(iCnt=iNo;iCnt>=1;iCnt--)
  {
    printf("%d\t%c\t",iCnt,ch);
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

