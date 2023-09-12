/*
Q: Write a recursive program which display below pattern
Input: 6
Output: A B C D E F 
*/

#include<stdio.h>

void DisplayR(int iNo)
{
    static char ch='A';
   
    if((ch<('A'+iNo)))
    {
        printf("%c\t",ch);
        ch++;
        DisplayR(iNo);
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