//Program to accept number from user and check whether number is even or odd

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////
// 
// Function name:   ChkEven
// Input:           Integer
// Output:          Even/ Odd result
// Description :    check whether number is even or odd
// Author:          Shubham Maruti Gaikwad
// Date:            4/05/2023
//
////////////////////////////////////////////////////////////

BOOL ChkEven(int iNo)
{
    if((iNo%2)==0)
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

    printf("Enter number: ");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);

    if(bRet==TRUE)
    {
        printf("%d Number is even",iValue);
    }
    else
    {
        printf("%d Number is odd",iValue);
    }
    
    return 0; 
}