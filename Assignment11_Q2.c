//program which accept N number from user and accept one anothe number as NO and return index of first occurance of that NO.

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
// 
// Function name:   FirstOcc
// Input:           Integer
// Output:          Integer
// Description :    Find the first occurance of NO
// Author:          Shubham Maruti Gaikwad
// Date:            16/05/2023
//
////////////////////////////////////////////////////////////

int FirstOcc(int Arr[],int iLength,int iNo)
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
      return -1;
   }
   else
   {
      return iCnt;
   }

}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
   int iSize=0, iCnt=0; 
   int iValue=0;
   int iRet=0;
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

   iRet=FirstOcc(p,iSize,iValue);

   if(iRet==-1)
   {
      printf("There is no such element");
   }
   else
   {
      printf("%d is present at index %d",iValue,iRet);
   }
   

   free(p);
 
    return 0;
}

