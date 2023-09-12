#include<stdio.h>


/*
Input : marvellous
Output :0

Input : marvellous infosystems
Output :1



*/
int DisplayDigit(char *str)
{ 
int icnt=0;

while(*str!='\0')
{
       if((*str==' '))
       {
        icnt++;
       }
       str++;
}

return icnt;
      
      
}
int main()
{ 
char Arr[20];
int iRet=0;

printf("Enter string:\n");
scanf("%[^'\n']s",&Arr);
iRet= DisplayDigit(Arr);
printf("%d",iRet);




return 0;
}
