//Program to accept one number and if number is less than print "Hello"
//otherwise print "Demo"

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

void Display(int iNo)
{  

    if(iNo<10)  
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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