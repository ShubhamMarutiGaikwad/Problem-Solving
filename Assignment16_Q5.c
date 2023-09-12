/*Accept number of row and column from user and display below pattern
Example input= iRow=3 iCol=4
         output= 1 2 3 4 
                 5 6 7 8 
                 9 10 11 12   
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
  int k=1; 
  
  for(i=1;i<=iRow;i++)
  {
    for(j=1;j<=iCol;j++)
    {
      printf("%d\t",k);
      k++;
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

