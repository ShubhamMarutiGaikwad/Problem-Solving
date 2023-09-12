/*
Q: Write a recursive program which accept string from user and calculate number of small character int it.
Input: HElloWOrlD
Output: 5
*/

#include<stdio.h>

int Small(char *str)
{   
  static int iCount=0;
  if(*str!='\0')
  {
    if((*str>='a')&&(*str<='z'))
    {
        iCount++;
        str++;
    }
    else
    {
        str++;
    }
    Small(str);
  }
  return iCount;
}

int main()
{   
   int iRet=0;
   char Arr[50];
   printf("Enter the string:");
   scanf("%[^'\n']s",Arr);

   iRet=Small(Arr);

   printf("Number of small characters are:%d",iRet);
   
    return 0;
}