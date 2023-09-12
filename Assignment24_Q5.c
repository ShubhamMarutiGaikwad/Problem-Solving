#include<stdio.h>

/*
Input : abcd
Output :dcba

Input :abba
Output :abba

*/
void StrRevX(char *str)
{ 

char *start=str,*end=str,temp='\0';
while(*str!='\0')
{
  
       
       end++;
       str++;
}
end--;

while(start<end)
{
  temp=*start;
  *start=*end;
  *end=temp;
      *start ++; 
       
      *end--;
}
     
      
}
int main()
{ 
char Arr[20],ch='\0'; 
int iRet=0;

printf("Enter string:\n");
scanf("%[^'\n']s",&Arr);

StrRevX(Arr);

printf(" character's reverse is %s",Arr);




return 0;
}
