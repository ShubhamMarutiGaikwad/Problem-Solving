#include<stdio.h>
#include<stdbool.h>

/*
Input : MarvellouS  Multi OS
Output :marvellous multi os 

*/
void strlwrx(char *str)
{ 


while(*str!='\0')
{
       if((*str>='A')&&(*str<='Z'))
       {
        *str=*str+32;
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
strlwrx(Arr);
printf("String after editing to lowercase is : %s\n",Arr);




return 0;
}
