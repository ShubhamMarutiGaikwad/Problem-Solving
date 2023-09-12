//Program which accept number from user and print that number of $ & * on screen

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Pattern
// Input:           Integer
// Output:          Character
// Description :    Display $ * on screen for given number if times
// Author:          Shubham Maruti Gaikwad
// Date:            10/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

void Pattern(int iNo)
{  
    if(iNo<0)
    {
        iNo=-iNo;
    }
    int iCnt=0;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("$  * ");
    }
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
   int iValue=0;

   printf("Enter number:");
   scanf("%d",&iValue);

   Pattern(iValue);

    return 0;
}