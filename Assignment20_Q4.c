#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
/*
Input :g
Output : TRUE/It is a smallcase character

Input :D
Output : FALSE/It is not a smallcase character


*/
BOOL ChkSmall(char ch)
{
   if(((ch>='a')&&(ch<='z')) )
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

bRet=ChkSmall(cValue);
if(bRet==TRUE)
{
    printf("It is a small case character");
}
else
{
    printf("It is not a small case character");
}


return 0;
}
