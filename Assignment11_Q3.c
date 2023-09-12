//program which accept N number from user and accept one anothe number as NO and return index of last occurance of that NO.

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
// 
// Function name:   LastOcc
// Input:           Integer
// Output:          Integer
// Description :    Find the last occurance of NO
// Author:          Shubham Maruti Gaikwad
// Date:            16/05/2023
//
////////////////////////////////////////////////////////////

int LastOcc(int Arr[],int iLength,int iNo)
{

   int iCnt=0;
   for(iCnt=iLength-1;iCnt>=0;iCnt--)
   {
      if(Arr[iCnt]==iNo)
      {  
         break;
      }
      
   }
   if(iCnt==0)
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

   iRet=LastOcc(p,iSize,iValue);

   if(iRet==-1)
   {
      printf("There is no such element");
   }
   else
   {
      printf("last occurence of number is %d",iRet);
   }
   
   free(p);
 
    return 0;
}

