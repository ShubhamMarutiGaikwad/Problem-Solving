//program which accept N number from user and check whether 11 is present in it or not

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

////////////////////////////////////////////////////////////
// 
// Function name:   Check
// Input:           Integer
// Output:          True / False
// Description :    check whether 11 is present or not in given numbers
// Author:          Shubham Maruti Gaikwad
// Date:            16/05/2023
//
////////////////////////////////////////////////////////////

BOOL Check(int Arr[],int iLength)
{

   int iCnt=0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if(Arr[iCnt]==11)
      {
         break;
      }
   }

   if(iCnt==iLength)
   {
       return FALSE;
   }
  else
   {
      return TRUE;
   }

}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
   int iSize=0, iCnt=0;
   BOOL bRet=FALSE;
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

   bRet=Check(p,iSize);

   if(bRet==TRUE)
   {
      printf("11 is present");
   }
   else
   {
      printf("11 is not present");
   }

   free(p);
 
    return 0;
}

