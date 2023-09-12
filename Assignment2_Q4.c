//Program to accept two number from user and display first number in second number of times 
#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Display
// Input:           Integer
// Output:          Hello / Demo
// Description :    accept one number print Hello / Demo based on condition
// Author:          Shubham Maruti Gaikwad
// Date:            4/05/2023
//
////////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iFrequency;iCnt++)
    {
        printf("%d ",iNo);
    }
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    int iValue=0;
    int iCount=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    printf("Enter frequency: ");
    scanf("%d",&iCount);

    Display(iValue,iCount);
    
    return 0; 
}