#include<stdio.h>



/*
Input : Marvellous Multi OS
       M
Output :0

Input : marvellous Multi OS
       W
Output :-1

Input : marvellous Multi OS
       e
Output :4


*/
int LastChar(char *str,char ch)
{ 

int cnt=1,pos=-1;
while(*str!='\0')
{
  if(*str==ch)
  {
       pos=cnt;
  }
       
       cnt++;
       str++;
}
     return pos;
      
}
int main()
{ 
char Arr[20],ch='\0'; 
int iRet=0;

printf("Enter string:\n");
scanf("%[^'\n']s",&Arr);

printf("Enter character to find:\n");
scanf(" %c",&ch);
iRet=LastChar(Arr,ch);

printf(" character's last location is %d",iRet);




return 0;
}
