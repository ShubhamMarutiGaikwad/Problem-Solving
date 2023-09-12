/*
Accept number from user and display pattern. 

Input: 7846

Output: 7   8   4   6
        7   8   4   6
        7   8   4   6
        7   8   4   6
*/
#include<stdio.h>

void Pattern(int iNo)
{   
    int iNoX=iNo;
    int Remainder=0;
    int iCount=0, i=0;
    int Reverse=0;
    
    // Find number of digit present in number
    while(iNoX!=0)
    {
        iCount++;
        Remainder=iNoX%10;
        Reverse=(Reverse*10)+Remainder;
        iNoX=iNoX/10;
    }
    
    //Printing digit from the number
    for(i=1;i<=iCount;i++)
    {
      iNoX=Reverse;
      while(iNoX!=0)
      {
        Remainder=iNoX%10;
        printf("%d\t",Remainder);
        iNoX=iNoX/10;
      }
      printf("\n");
    }

}
int main()
{
    int iNo=0;

    printf("Enter the number :");
    scanf("%d",&iNo);

    Pattern(iNo);

    return 0;
}