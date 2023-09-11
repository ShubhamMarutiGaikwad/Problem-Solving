//Program to divide two numbers 

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Divide
// Input:           Integer
// Output:          Integer
// Description :    program to divide two numbers 
// Author:          Shubham Maruti Gaikwad
// Date:            4/05/2023
//
////////////////////////////////////////////////////////////

int Divide(int iNo1, int iNo2)
{
    int iAns=0;

    if(iNo2>iNo1)    // Check 
    {
        return -1;
    }

    iAns=iNo1/iNo2;

    return iAns;
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    
    int iValue1=0, iValue2=0; // variable to accept input

    int iRet = 0; // variable to accept return value 

    printf("Enter the first number:");
    scanf("%d",&iValue1);
    printf("Enter the second number:");
    scanf("%d",&iValue2);

    iRet=Divide(iValue1,iValue2);  //Function call

    printf("Division is %d",iRet);

    return 0;
}