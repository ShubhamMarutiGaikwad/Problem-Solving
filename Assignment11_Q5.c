//program which accept N number from user and return product of all odd elements

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Product
// Input:           Integer
// Output:          Integer
// Description :    Calculate and return product of all odd numbers
// Author:          Shubham Maruti Gaikwad
// Date:            16/05/2023
//
////////////////////////////////////////////////////////////

int Product(int Arr[],int iLength)
{

   int iCnt=0;
   int iMul=1;
   int iSum=0;
   for(iCnt=iLength-1;iCnt>=0;iCnt--)
   {
      if((Arr[iCnt]%2)!=0)
      { 
        iSum++;
        iMul=iMul*Arr[iCnt];
      }
   }
   if(iSum==0)
   {
      return (iMul=0);
   }
   else
   {
      return iMul;
   }
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
   int iSize=0, iCnt=0; 
   int iRet=0;
   int *p=NULL;

   printf("Enter number of elements:");
   scanf("%d",&iSize);

   p=(int *)malloc(iSize*sizeof(int));

   if(p==NULL)
   {
      printf("Unable to allocate memory");
      return -1;
   }

   printf("Enter %d elements\n",iSize);
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
      printf("Enter %d element:",iCnt+1);
      scanf("%d",&p[iCnt]);
   }

   iRet=Product(p,iSize);

   printf("Product is:%d",iRet);

   free(p);
 
    return 0;
}

