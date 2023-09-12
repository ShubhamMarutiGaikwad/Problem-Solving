//Program to accept one number print that number of * on screen using while loop

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

void Display(int iNo)
{  

    if(iNo<0)  // check
    {
        printf("Please enter number greater than 0");
    }

    while(iNo>0)
    {
        printf("*\n");
        iNo--;
    }

}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    int iValue=0;

    printf("Enter number: ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0; 
}