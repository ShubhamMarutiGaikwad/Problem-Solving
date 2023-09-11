//Program to accept one number print that number of * on screen 

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Accept
// Input:           Integer
// Output:          *
// Description :    accept one number print that number of * on screen
// Author:          Shubham Maruti Gaikwad
// Date:            4/05/2023
//
////////////////////////////////////////////////////////////

void Accept(int iNo)
{   
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("*\n");
    }

}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    int iValue=5;

    Accept(iValue);

    return 0; 
}