/*
Q: Write a recursive program which accept string from user and return count number of character
Input: Hello
Output: 5
*/

#include<stdio.h>

int Strlen(char *str)
{
    static int iCount=0;

    if(*str!='\0')
    {
        iCount++;
        str++;
        Strlen(str);
    }
    return iCount;
}


int main()
{   
   int iRet=0;

   char arr[20];

   printf("Enter string: ");
   scanf("%[^'\n']s",&arr);

   iRet=Strlen(arr);

   printf("Number of characters are: %d",iRet);

    return 0;
}