//program which accept N number from user and accept range, Display all elements from that range

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Range
// Input:           Integer
// Output:          Integer
// Description :    Display the elements in the given range 
// Author:          Shubham Maruti Gaikwad
// Date:            16/05/2023
//
////////////////////////////////////////////////////////////

void Range(int Arr[],int iLength,int iStart,int iEnd)
{  
   int iCnt=0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if((Arr[iCnt]>=iStart) && (Arr[iCnt]<=iEnd))
      {
         printf("%d\t",Arr[iCnt]);
      }
   }

}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
   int iSize=0, iCnt=0; 
   int iValue1=0,iValue2=0;
   int *p=NULL;

   printf("Enter number of elements:");
   scanf("%d",&iSize);

   printf("Enter the starting point:");
   scanf("%d",&iValue1);

   printf("Enter the end point:");
   scanf("%d",&iValue2);

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

   Range(p,iSize,iValue1,iValue2);
   
   free(p);
 
    return 0;
}

