#include<stdio.h>
/*
Input : irow=6   icol=6 

Output:1       2       3       4       5
       1       2                       5
       1               3               5
       1                       4       5
       1       2       3       4       5
*/

void Pattern(int iRow, int iCol)
{ int i=0,j=0,iCnt=1;
 for(i=1;i<=iRow+1;i++)
 {
       for(j=1;j<=iCol+1;j++)
       {
              if(i==j||i==1||j==1||i==iRow+1||j==iCol+1)
              { 
                  
                     printf("%d\t",j);
                     
                
                     
              }
              
              else
              {
                     printf(" \t");
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