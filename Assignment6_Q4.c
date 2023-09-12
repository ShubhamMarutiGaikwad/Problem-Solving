//program which accept number from user and display its table

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Table
// Input:           Integer
// Output:          Integer
// Description :    Display table for the given number
// Author:          Shubham Maruti Gaikwad
// Date:            11/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

void Table(int iNo)
{
   if(iNo<0)   // Updater to handle negative input
   {
    iNo=-iNo; 
   }

   int iCnt=0;
   int TableNumber=0;

   for(iCnt=1;iCnt<=10;iCnt++)
   {
      TableNumber=iNo * iCnt;
      printf("%d ",TableNumber);
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

    Table(iValue);

    return 0;
}

