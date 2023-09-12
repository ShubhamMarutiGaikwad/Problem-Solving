#include<stdio.h>
/*

Input : iRow=5  iCol=5
Output :a       b       c       d       e
        1       2       3       4       5
        a       b       c       d       e
        1       2       3       4       5
        a       b       c       d       e
*/
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    char c='a';
 

   for(i=1;i<=iRow;i++)
  
    {  
        for(j=1;j<=iCol;j++,c++)
        { 
            if((i%2)==0)
            {
                
                  printf("%d\t",j);
                  //if row is even then we print 12345 numbers 
           
            }
           else
           {
        
             printf("%c\t",c);
             //if row is odd then we print abcde numbers
           }
           
           
        }
        c='a';
        printf("\n");
    }


        
    }
    

int main()
{
int iValue1=0,iValue2=0;


int *ptr=NULL;
printf("Enter number of rows and columns  : ");
scanf("%d %d",&iValue1,&iValue2);

Pattern(iValue1,iValue2);


return 0;
}
