/*Accept number of row and column from user and display below pattern
Example input= iRow=4 iCol=5
         output= 4 4 4 4 4 
                 3 3 3 3 3 
                 2 2 2 2 2 
                 1 1 1 1 1               
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
  
  for(i=iRow;i>=1;i--)  // Outer
  {
    for(j=1;j<=iCol;j++)   //Inner
    {
      printf("%d\t",i);
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

