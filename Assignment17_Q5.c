#include<stdio.h>
/*

Input : iRow=5  iCol=5
Output :1       2       3       4
        2       3       4       5
        3       4       5       6
        4       5       6       7
*/
void Pattern(int iRow,int iCol)
{
    int i=0,j=0,num=0;
    
 

   for(i=1;i<=iRow;i++)
  
    {  
        for(j=1;j<=iCol;j++)
        { 
            printf(" %d\t",num+j);
        }
              
          

        num++;
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
