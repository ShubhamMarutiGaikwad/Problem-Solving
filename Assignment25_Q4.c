#include<stdio.h>
/*
Input : irow=6   icol=6 

Output:*       *       *       *       *       *
       *       #       #       #       *       *      
       *       #       #       *       $       *      
       *       #       *       $       $       *      
       *       *       $       $       $       *      
       *       *       *       *       *       * 
*/

void Pattern(int iRow, int iCol)
{ int i=0,j=0;
 for(i=1;i<=iRow;i++)
 {
       for(j=iCol;j>=1;j--)
       {
              if(i==j||i==1||j==1||i==iRow||j==iCol)
              {
                     printf("*\t");
              }
              else if(i>j)
              {
                     
                     printf("$\t");
              }
              else
              {
                     printf("#\t");
              }
       }
       printf("\n");
 }
}

int main()
{
       int iValue1=0,iValue2=0;
       printf("Enter number of rows and columns ");
       scanf("%d %d",&iValue1,&iValue2);
       Pattern(iValue1,iValue2);
       return 0;
}