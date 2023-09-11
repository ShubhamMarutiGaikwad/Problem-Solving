//Program to print 5 to 1 numbers on screen

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Display
// Input:           Integer
// Output:          Integer
// Description :    program to print reverse numbers on screen from given input number
// Author:          Shubham Maruti Gaikwad
// Date:            4/05/2023
//
////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;  //Counter variable 

    if(iNo<=0)  // Check
    {
        printf("Please enter number greater than 0");
    }

    for(iCnt=iNo;iCnt>=1;iCnt--)
    {
        printf("%d \n",iCnt);
    }
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    int iValue=0;

    printf("Enter highest number:");

    scanf("%d",&iValue);

    Display(iValue); 
    
    return 0;
}