//program which accept N number from user returns frequency 11 

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Frequency
// Input:           Integer
// Output:          Integer
// Description :    calculate frequency 11 from the given elements
// Author:          Shubham Maruti Gaikwad
// Date:            16/05/2023
//
////////////////////////////////////////////////////////////

int Frequency(int Arr[],int iLength)
{
   int iCnt=0;
   int iSum=0;
   
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if(Arr[iCnt]==11)
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

