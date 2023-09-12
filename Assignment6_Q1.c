//Program which accept number from user and print stataemnt based on condition
//Number < 50 print small
//Number >50 & <100 print medium
//Number >100 large

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Number
// Input:           Integer
// Output:          Result based on condition
// Description :    Display small/medium/large based on condition
// Author:          Shubham Maruti Gaikwad
// Date:            11/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

void Number(int iNo)
{ 
  if(iNo<0)
  {
    printf("Please enter number greater than 0.");
  }

  if((iNo>0)&&(iNo<50))
  {
    printf("Small");
  }
  else if((iNo>50)&&(iNo<100))
  {
    printf("Medium");
  }
  else if(iNo>100)
  {
    printf("Large");
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

    Number(iValue);

    return 0;
}

