//Program which accept one number from user and check whether that number is greater than 100 or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////
// 
// Function name:   ChkGreater
// Input:           Integer
// Output:          String as Greater or smaller
// Description :    Display whether that number is greater than 100 or not
// Author:          Shubham Maruti Gaikwad
// Date:            06/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
    if(iNo>100)
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
    printf("Please enter number:");
    scanf("%d",&iValue);

    bRet=ChkGreater(iValue);

    if(bRet==TRUE)
    {
        printf("given input is greater than 100");
    }
    else
    {
        printf("given input is smaller than 100");
    }

    return 0;
}