//Program to accept one number and check that it is divisible by 5 or not

#include<stdio.h>
typedef int BOOL;  // typedef to reduce the function name 
#define TRUE 1    //Use of macro
#define FALSE 0    //Use of macro


////////////////////////////////////////////////////////////
// 
// Function name:   Check
// Input:           Integer
// Output:          Boolean return 
// Description :    program to check that it is divisible by 5 or not
// Author:          Shubham Maruti Gaikwad
// Date:            4/05/2023
//
////////////////////////////////////////////////////////////

BOOL Check( BOOL iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    int iValue=0;
    BOOL bRet=FALSE;

    printf("Enter number");
    scanf("%d",&iValue);
    bRet=Check(iValue);
    if(bRet==TRUE)
    {
        printf("number is divisible by 5");
    }
    else
    {
        printf("number is not  divisible by 5 ");
    }
    return 0;
    
    
}