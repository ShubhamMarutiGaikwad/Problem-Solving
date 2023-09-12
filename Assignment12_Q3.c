//program which accept N number from user and return the difference betweeen largest element & smallest element

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Difference
// Input:           Integer
// Output:          Integer
// Description :    Find difference betweeen largest element & smallest element
// Author:          Shubham Maruti Gaikwad
// Date:            17/05/2023
//
////////////////////////////////////////////////////////////

int Difference(int iArr[],int iLength)
{  
   int iCnt=0;
   int iMax=iArr[0];
   int iMin=iArr[0];
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if(iArr[iCnt]>iMax)
      {
         iMax=iArr[iCnt];
      }
      if(iArr[iCnt]<iMin)
      {
         iMin=iArr[iCnt];
      }
      
   }

   return (iMax-iMin); 
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

   iRet=Difference(p,iSize);

   printf("Difference oflargest and smallest element is:%d",iRet);

   free(p);
 
    return 0;
}

