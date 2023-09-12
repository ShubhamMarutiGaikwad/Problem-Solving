//program which accept N number from user display summation of digits of each number

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Digits
// Input:           Integer
// Output:          Integer
// Description :    display such element which contain 3 digit in it.
// Author:          Shubham Maruti Gaikwad
// Date:            17/05/2023
//
////////////////////////////////////////////////////////////

void DigitSum(int iArr[],int iLength)
{  
   int iCnt=0;
   int iDigit=0;
   int iSum=0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      while(iArr[iCnt]!=0)
      {
         iDigit=iArr[iCnt]%10;
         iSum=iSum+iDigit;

         iArr[iCnt]=iArr[iCnt]/10;
      }
      printf("%d ",iSum);
     
   }

   
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
   int iSize=0, iCnt=0; 
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

   DigitSum(p,iSize);

   free(p);
 
    return 0;
}

