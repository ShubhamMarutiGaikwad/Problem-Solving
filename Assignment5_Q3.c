//Program which accept number from user and print its numbers line
//Ex. 8 = - 8 -7 -6 ........7 8

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Display
// Input:           Integer
// Output:          Integer
// Description :    Display number line 
// Author:          Shubham Maruti Gaikwad
// Date:            11/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N-
////////////////////////////////////////////////////////////

void Display(int iNo)
{ 
  int iCnt=-iNo;
  do
  {
    printf("%d",iCnt);
    iCnt++;
  }
  while(iCnt<=(iNo));

// For loop logic 

// int iCnt=-iNo;
// for(int i=iCnt;iCnt<=iNo;i++)
// {
//     printf("%d",iCnt);
//     iCnt++;  // double incremental for
// }

// Normal for loop logic 

// for(int iCnt=-iNo;iCnt<=iNo;iCnt++)
// {
//     printf("%d",iCnt);  
// }
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    int iValue=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

// {
//     // printf("%d",iCnt);
//     // iCnt++; //iCnt=iCnt+1 (-4+1=-3)
//   }