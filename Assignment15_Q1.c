/*Accept number of row and column from user and display below pattern
Example input= iRow=4 iCol=3
         output= * * * 
                 * * *
                 * * *
                 * * *
 */

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Pattern
// Input:           Integer
// Output:          Pattern 
// Description :    print the given pattern according to number of row and columns
// Author:          Shubham Maruti Gaikwad
// Date:            23/05/2023
//
////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{ 
 
  int i=0;
  int j=0;
  
  for(i=1;i<=iRow;i++)
  {
    for(j=1;j<=iCol;j++)
    {
      printf("*\t");
    }
    printf("\n");
  }
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{
  int iValue1=0,iValue2=0;
  printf("Enter number of rows:");
  scanf("%d",&iValue1);

  printf("Enter number of column:");
  scanf("%d",&iValue2);

  Pattern(iValue1,iValue2);

  return 0;

}

