//Program which accept number from user and print number till that number

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Display
// Input:           Integer
// Output:          Integer
// Description :    Display numbers from 1 to given number
// Author:          Shubham Maruti Gaikwad
// Date:            10/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

void Display(int iNo)
{  
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%d  ",iCnt);
    }
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}