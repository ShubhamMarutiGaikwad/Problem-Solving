//program which accept N number from user and accept one another number from as NO returns frequency of NO from it.

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
// 
// Function name:   
// Input:           Integer
// Output:          True / False
// Description :    check and return the frequency of given number from given numbers 
// Author:          Shubham Maruti Gaikwad
// Date:            16/05/2023
//
////////////////////////////////////////////////////////////

int Frequency(int Arr[],int iLength,int iNo)
{
   int iCnt=0;
   int iSum=0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if(Arr[iCnt]==iNo)
      {
         iSum++;
      }
   }
   return iSum;
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
   int iSize=0, iCnt=0;
   int iRet=0;
   int iValue=0;
   int *p=NULL;

   printf("Enter number of elements:");
   scanf("%d",&iSize);

   printf("Enter the number :");
   scanf("%d",&iValue);

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

   iRet=Frequency(p,iSize,iValue);

   printf("Frequency of %d is:%d",iValue,iRet);

   free(p);
 
    return 0;
}

