/*Design application for school management system. As school is primary there are 4 standards from 1 to 4.
School fees of each standard is different. For first standard fees are 8900, for second standard 12790, for third standard 21000 and
for fourth standard fees are 23450. We have to accept standard from user and display the corresponding fees.
*/

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   SchoolFees
// Input:           Integer
// Output:          Integer
// Description :    function which returns the school fees for the standard from 1 to 4
// Author:          Shubham Maruti Gaikwad
// Date:            23/05/2023
//
////////////////////////////////////////////////////////////

int SchoolFees(int iStd)
{  
  int fees=0;
   switch (iStd)
   {
    case 1:
    fees=8900;
    break;

    case 2:
    fees=12790;
    break;

    case 3:
    fees=21000;
    break;

    case 4:
    fees=23450;
    break;

    default:
    fees=-1;
   }
   return fees;
}


////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////
int main()
{
  int iStandard=0;
  int iRet=0;
  printf("Enter standard from 1 to 4:");
  scanf("%d",&iStandard);

  iRet=SchoolFees(iStandard);

  if(iRet==-1)
  {
    printf("Wrong input");
  }
  else
  {
  printf("School fees for standard %d is: %d ",iStandard,iRet);
     
  }

  
  
  return 0;

}

