/*Design application for hotel. According to the management team of hotel they are giving
discount on total bill amount of customer. If bill bill amount is less than 500 then there is no discount, 
if bill amount is less than 1500 and more than 500 they give 10% discount. And if the bill amount is more than 1500 then they give 15% discount. 
Our application should accept total bill amount and depends on the discount policy we have to return the amount after applying discount.*/

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   CaculateBill
// Input:           Integer
// Output:          Integer/Float
// Description :    function to calculate discount on the bill amout
// Author:          Shubham Maruti Gaikwad
// Date:            23/05/2023
//
////////////////////////////////////////////////////////////

float CaculateBill(int iAmount)
{
   float iDiscount=0;
   if(iAmount>=0 && iAmount<500)
   {
    iDiscount=iAmount*0.0;
    iAmount=iAmount-iDiscount;
   }
   else if(iAmount>=500 && iAmount<=1500)
   {
    iDiscount=(iAmount*0.1);
    iAmount=iAmount-iDiscount;
   }
   else if(iAmount>1500)
   {
    iDiscount=(iAmount*0.15);
    iAmount=iAmount-iDiscount;
   }

   return iAmount;

}
////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////
int main()
{
  int iBill=0;
  float fRet=0;
  printf("Enter the bill amount:");
  scanf("%d",&iBill);

  fRet=CaculateBill(iBill);
  
  if(fRet==iBill)
  {
    printf("You are not eligible for discount. please pay:%f",fRet);
  }
  else
  {
    printf("After applying discount your payable amount is:%f",fRet);
  }
  
  return 0;

}

/*

Discount=((List price - selling price)/List price) X 100

*/