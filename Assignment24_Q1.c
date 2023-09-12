#include<stdio.h>
#define TRUE 1
#define FALSE 0 
typedef int BOOL;

/*
Input : marvellous
Output :0

Input : Marvellous Multi OS
       e 
Output : charcter e found



*/
BOOL ChkChar(char *str,char ch)
{ 
BOOL bret=FALSE;

while(*str!='\0')
{
       if((*str==ch))
       {
        bret=TRUE;
       }
       str++;
}

return bret;
      
      
}
int main()
{ 
char Arr[20],ch='\0'; 
BOOL bRet=FALSE;

printf("Enter string:\n");
scanf("%[^'\n']s",&Arr);

printf("Enter character to find:\n");
scanf(" %c",&ch);
bRet=ChkChar(Arr,ch);
if(bRet==TRUE)
{
printf("Character %c found\n",ch);
}
else
{
printf("Character %cnot  found\n",ch);
}





return 0;
}
