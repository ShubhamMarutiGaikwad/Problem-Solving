/*
Q: Write a recursive program which accept number from user and return product of its digit
Input: 523
Output: 30
*/

#include<stdio.h>

int Mult(int iNo)
{   
    if(iNo==0)
    {
      return -1;
    }
    
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    static int iProduct=1;
    int iDigit=0;

    if(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit!=0)
        {
            iProduct=iProduct*iDigit;
            iNo=iNo/10;
            Mult(iNo);
        }
        else
        {
            iNo=iNo/10;
            Mult(iNo);
        }
    }
    return iProduct;
   
}


int main()
{   
   int iRet=0, iValue=0;

   printf("Enter number: ");
   scanf("%d",&iValue);

   iRet=Mult(iValue);

  if(iRet!=-1)
  {
    printf("Product of digit is : %d",iRet);
  }
  else
  {
    printf("Please enter number greater than 0");
  }

    return 0;
}