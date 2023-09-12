//program which accept N number from user display such element which contain 3 digit in it.

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

void Digits(int iArr[],int iLength)
{  
   int iCnt=0;
   int iDigit=0;
   int iSum=0;

   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      while(iArr[iCnt]!=0)
      {
         iDigit=iArr[iCnt]/10;
         iSum++;

      if(iSum>3)
      {  
         printf("%d\t",iSum);
         break;
      }
      
      }
      
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

   Digits(p,iSize);


   free(p);
 
    return 0;
}

