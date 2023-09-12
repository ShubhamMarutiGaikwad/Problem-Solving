/*  We have to design application for tourist company. Tourist company provides cars on rent. Depends on the running of car they apply rent.
If running is less than 100 kilometres then they charge 25 rupees per kilometre. 
And if running is more than 100 kilometres then they apply 15 rupees per kilometre after 100 kilometres.
We have to accept number of kilometres from user and return the estimated rent.
*/

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   TouristBill
// Input:           Integer
// Output:          Integer
// Description :    calculate the rent amount 
// Author:          Shubham Maruti Gaikwad
// Date:            23/05/2023
//
////////////////////////////////////////////////////////////

int TouristBill(int iKm)
{  
  int iCharges=0;
   
   if(iKm>=0 && iKm<100)
   {
    iCharges=iKm*25;
   }
   else if(iKm>100)
   {
    iCharges=iKm*15;
   }

   return iCharges;

}


////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{
  int kilometre=0;
  int iRet=0;
  printf("Enter the kilometers:");
  scanf("%d",&kilometre);

  iRet=TouristBill(kilometre);

  printf("You car rent is %d",iRet);

  return 0;

}

