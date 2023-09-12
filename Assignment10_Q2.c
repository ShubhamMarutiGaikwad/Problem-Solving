//program which accept N number from user returns difference between frequency of even numbers and odd numbers

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Frequency
// Input:           Integer
// Output:          Integer
// Description :    calculate difference between frequency of even numbers and odd numbers
// Author:          Shubham Maruti Gaikwad
// Date:            16/05/2023
//
////////////////////////////////////////////////////////////

int Frequency(int Arr[],int iLength)
{
   int iCnt=0;
   int iSumEven=0;
   int iSumOdd=0;

   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if((Arr[iCnt]%2)==0)
      {
         iSumEven++;
      }
      else
      {
         iSumOdd++;
      }
   }

   return (iSumEven-iSumOdd);
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
   int iSize=0, iRet=0, iCnt=0;
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

   iRet=Frequency(p,iSize);

   printf("Difference is:%d",iRet);

   free(p);
 
    return 0;
}

