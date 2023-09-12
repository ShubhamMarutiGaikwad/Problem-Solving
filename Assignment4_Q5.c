//Program which accept total mark & obtain mark and calculate percentage

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Percentage
// Input:           Integer
// Output:          Integer
// Description :    print multiplication of given inputs
// Author:          Shubham Maruti Gaikwad
// Date:            06/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

float Percentage(int iNo1,int iNo2)
{
    if(iNo2==0)
    {   
        printf("Unable to calculate");
        return -1;
    }
    float Result=((float)iNo2/iNo1)*100;

    return Result;
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    float iValue1=0,iValue2=0;
    float fRet=0.0f;

    printf("Please enter total marks:");
    scanf("%f",&iValue1);

    printf("Please enter obtained marks:");
    scanf("%f",&iValue2);

    fRet=Percentage(iValue1,iValue2);

    printf("percentage is: %f",fRet);

    return 0;
}