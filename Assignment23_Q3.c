#include<stdio.h>
#include<stdbool.h>

/*
Input : MarvellouS  Multi OS
Output :mARVELLOUS mULTI oS 

*/
void strtogglex(char *str)
{ 


while(*str!='\0')
{
       if((*str>='a')&&(*str<='z'))
       {
        *str=*str-32;
       }
       else if((*str>='A')&&(*str<='Z'))
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
strtogglex(Arr);
printf("String after toggling  is : %s\n",Arr);




return 0;
}
