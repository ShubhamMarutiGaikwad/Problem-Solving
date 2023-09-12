/*
Q: Write a recursive program which accept number from user and display the below pattern
Input: 5
Output: 5 * 4 * 3 * 2 * 1 *
*/

#include<stdio.h>

void Display(iNo)
{  
   static int iCnt=0;
   iCnt=iNo;
   
   if(iCnt>=1)
   {
    printf("%d\t*\t",iCnt);
    iCnt--;
    Display(iCnt);
   }
  
}

int main()
{   
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}