//Program which accept two number from user and check whether that numbers are equal or not

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

////////////////////////////////////////////////////////////
// 
// Function name:   ChkEqual
// Input:           Integer
// Output:          Result as Euqal or not
// Description :    check whether that two input numbers are equal or not
// Author:          Shubham Maruti Gaikwad
// Date:            06/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

BOOL ChkEqual(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
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
    int iValue1=0,iValue2=0;

    BOOL bRet=FALSE;

    printf("Please enter two number:");
    scanf("%d %d",&iValue1,&iValue2);

    bRet=ChkEqual(iValue1,iValue2);

    if(bRet==TRUE)
    {
        printf("Numbers are Equal");
    }
    else
    {
        printf("Numbers are not Equal");
    }

    return 0;
}