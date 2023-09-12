#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

/*
Input :F
Output : TRUE/It is a character

Input :&
Output : FALSE/It is not a character

*/
BOOL ChkAlpha(char ch)
{
   if(((ch>='a')&&(ch<='z')) || ((ch>='A')&&(ch<='Z')) )
   {
    return TRUE;

   }
    else 
    {
        return FALSE;
    }
}
    

int main()
{
char cValue='\0';
BOOL bRet=FALSE;

printf("Enter the character:\n");
scanf("%c",&cValue);

bRet=ChkAlpha(cValue);
if(bRet==TRUE)
{
    printf("It is a character");
}
else
{
    printf("It is not a character");
}


return 0;
}
