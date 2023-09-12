/*
Q: Write a recursive program which accept number from user and return the factorial of that number
Input: 5
Output: 120
*/

#include<stdio.h>

int Fact(int iNo)
{
    static int ifact=1;
    static int iCnt=1;

    if(iCnt<=iNo)
    {
        ifact=ifact*iCnt;
        iCnt++;
        Fact(iNo);
    }
    return ifact;
   
}


int main()
{   
   int iRet=0, iValue=0;

   printf("Enter number: ");
   scanf("%d",&iValue);

   iRet=Fact(iValue);

   printf("Factorial is : %d",iRet);

    return 0;
}