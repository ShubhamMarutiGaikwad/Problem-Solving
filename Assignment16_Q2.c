/*Accept number of row and column from user and display below pattern
Example input= iRow=3 iCol=5
         output= A B C D 
                 a b c d
                 A B C D
                 a b c d
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
  char ch1='\0';
  char ch2='\0';
  
  for(i=1;i<=iRow;i++)
  {
    for(j=1,ch1='A',ch2='a';j<=iCol;j++)
    { 
      if((i%2)==0)
      {
        printf("%c\t",ch2);
        ch2++;
      }
      else
      {
         printf("%c\t",ch1);
         ch1++;
      }
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

