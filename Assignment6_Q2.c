//Program which accept digit from user and print it into words

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Display
// Input:           Integer
// Output:          Result based on condition
// Description :    Display digit word by taking digit as input from user
// Author:          Shubham Maruti Gaikwad
// Date:            11/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

void Display(int iNo)
{  
  if(iNo<0)  // Updater to handle negative input
  {
    iNo=-iNo;
  }

   switch(iNo)
  {
    case 1:
    printf("One");
    break;

    case 2:
    printf("Two");
    break;

    case 3:
    printf("Three");
    break;

    case 4:
    printf("Four");
    break;

    case 5:
    printf("Five");
    break;

    case 6:
    printf("Six");
    break;

    case 7:
    printf("Seven");
    break;

    case 8:
    printf("Eight");
    break;

    case 9:
    printf("Nine");
    break;

    default:
    {
      printf("Invalid input number");
    }
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

    Display(iValue);

    return 0;
}

