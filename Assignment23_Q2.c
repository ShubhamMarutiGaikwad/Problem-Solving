#include<stdio.h>
#include<stdbool.h>

/*
Input : MarvellouS  Multi OS
Output :MARVELLOUS MULTI OS 

*/
void struprx(char *str)
{ 


while(*str!='\0')
{
       if((*str>='a')&&(*str<='z'))
       {
        *str=*str-32;
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
struprx(Arr);
printf("String after editing to uppercase is : %s\n",Arr);




return 0;
}
