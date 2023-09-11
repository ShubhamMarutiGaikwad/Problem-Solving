//Program to print 5 or by taking user input times "Marvellous" on screen 

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Display
// Input:           Integer
// Output:          String
// Description :    program to print 5/user given times "Marvellous" on screen
// Author:          Shubham Maruti Gaikwad
// Date:            4/05/2023
//
////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt=0;  //Counter variable 

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("Marvellous \n");
    }
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    int iValue=0;

    printf("Enter display count for Marvellous:");

    scanf("%d",&iValue);

    Display(iValue); 
    
    return 0;
}