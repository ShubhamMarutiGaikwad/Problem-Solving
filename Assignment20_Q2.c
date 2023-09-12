#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
/*
Input :F
Output : TRUE/It is a character

Input :&
Output : FALSE/It is a not character


*/
BOOL ChkCapital(char ch)
{
   if(((ch>='A')&&(ch<='Z')) )
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

bRet=ChkCapital(cValue);
if(bRet==TRUE)
{
    printf("It is a Capital character");
}
else
{
    printf("It is not a Capital character");
}


return 0;
}
