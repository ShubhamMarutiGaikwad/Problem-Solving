/*
Accept number from user and display pattern. 

Input: 7846

Output: 7   8   4   6
        7   8   4   
        7   8   
        7   
*/
#include<stdio.h>

void Pattern(int iNo)
{   
    int iNoX=iNo;
    int Remainder=0;
    int iCount=0, i=0;
    int Reverse=0;
    
    // Find number of digit present in number & reverse the number
    while(iNoX!=0)
    {
        iCount++;
        Remainder=iNoX%10;
        Reverse=(Reverse*10)+Remainder;
        iNoX=iNoX/10;
    }
    
    //Printing digit from the number in pattren
    for(i=iCount;i>=1;i--)
    { 
      iCount=0;

      iNoX=Reverse;

      while(iNoX!=0)
      {
          Remainder=iNoX%10;
          iCount++;
            if(iCount<=i)
            {
              printf("%d\t",Remainder);
            }            
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