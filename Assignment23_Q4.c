#include<stdio.h>
#include<stdbool.h>

/*
Input : marve89llous121
Output :89121

*/
void DisplayDigit(char *str)
{ 


while(*str!='\0')
{
       if((*str>='0')&&(*str<='9'))
       {
        printf("%c",*str);
       }
       str++;
}


      
      
}
int main()
{ 
char Arr[20];
int iRet=0;

printf("Enter string:\n");
scanf("%[^'\n']s",&Arr);
DisplayDigit(Arr);





return 0;
}
