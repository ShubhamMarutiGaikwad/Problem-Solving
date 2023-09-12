/*
Q: Write a recursive program which display below pattern
Input: 5
Output: 5 4 3 2 1 
*/

#include<stdio.h>

void DisplayR(int iNo)
{    
    static int iCnt=0;
    iCnt=iNo;
     
   if(iCnt>=1)
    {
        printf("%d\t",iCnt);
        iCnt--;
        DisplayR(iCnt);
    }
}

int main()
{   
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}