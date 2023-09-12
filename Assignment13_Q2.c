/*Design application for income tax department to calculate tax amount. According to the income tax department there is no income tax for the
 income less than 5 lakhs. If income is in between 5 to 10 lakhs then there will be 10% tax. 
 If income is in between 10 to 20 lakhs then there will be 20% tax. And for more than 20 lakhs there will be 30% tax. 
 We have to accept gross income from user and return the tax amount.
*/

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   IncomeTax
// Input:           Integer
// Output:          Integer/Float
// Description :    function to calculate tax on the given amount
// Author:          Shubham Maruti Gaikwad
// Date:            23/05/2023
//
////////////////////////////////////////////////////////////

float IncomeTax(int iAmount)
{
  

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