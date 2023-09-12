/*Accept number of row and column from user and display below pattern
Example input= iRow=3 iCol=4
         output= A A A A
                 B B B B 
                 C C C C                
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
  char ch='\0';
  
  for(i=1,ch='A';i<=iRow;i++,ch++)  // Outer
  {
    for(j=1;j<=iCol;j++)           // Inner
    { 
      printf("%c\t",ch);
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

