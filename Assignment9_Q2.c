//program which accept N number from user and display all such numbers which are divisible by 5

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Display
// Input:           Integer
// Output:          Integer
// Description :    display all such numbers which are divisible by 5
// Author:          Shubham Maruti Gaikwad
// Date:            16/05/2023
//
////////////////////////////////////////////////////////////

void Display(int Arr[],int iLength)
{
   int iCnt=0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if((Arr[iCnt]%5)==0)
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
   int iSize=0,iCnt=0;
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

   Display(p,iSize);

   free(p);
 
    return 0;
}

