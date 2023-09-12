#include<stdio.h>
#include<stdbool.h>

/*
Input : marvellous 
Output :True

Input : Demo 
Output :True

Input : xyz 
Output :False

*/
bool chkVowel(char *str)
{ 

bool bret=false;
        while(*str!='\0')
        { 
                if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
                {
                        bret=true;
                }
                str++;
                
        }

return bret;
      
}
int main()
{ 
char Arr[20];
bool bRet=false;

printf("Enter string:\n");
scanf("%[^'\n']s",&Arr);
bRet=chkVowel(Arr);
if(bRet==true)
{
printf("contains Vowel");
}
else
{
     printf("contains no  Vowel");   
}



return 0;
}
