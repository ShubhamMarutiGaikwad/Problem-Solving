#include<stdio.h>
#define TRUE 1
#define FALSE 0 
typedef int BOOL;

/*
Input : Marvellous Multi OS
       M
Output :2

Input : marvellous Multi OS
       W
Output :0



*/
int CountChar(char *str,char ch)
{ 
int cnt=0;

while(*str!='\0')
{
       if((*str==ch))
       {
        cnt++;
       }
       str++;
}

return cnt;
      
      
}
int main()
{ 
char Arr[20],ch='\0'; 
int iRet=0;

printf("Enter string:\n");
scanf("%[^'\n']s",&Arr);

printf("Enter character to find:\n");
scanf(" %c",&ch);
iRet=CountChar(Arr,ch);

printf(" character frequency is %d",iRet);




return 0;
}
