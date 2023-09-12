//program which accept N number from user and accept one anothe number as NO and check whether NO is present or not.

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
// Description :    check whether NO entered by user is present in given numbers or not.
// Author:          Shubham Maruti Gaikwad
// Date:            16/05/2023
//
////////////////////////////////////////////////////////////

BOOL Check(int Arr[],int iLength,int iNo)
{

   int iCnt=0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if(Arr[iCnt]==iNo)
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
   int iValue=0;
   BOOL bRet=FALSE;
   int *p=NULL;

   printf("Enter number of elements:");
   scanf("%d",&iSize);

   printf("Enter NO :");
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

   bRet=Check(p,iSize,iValue);

   if(bRet==TRUE)
   {
      printf("TRUE NO is present");
   }
   else
   {
      printf("FALSE NO is not present");
   }

   free(p);
 
    return 0;
}

