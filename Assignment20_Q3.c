#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
/*
Input :7
Output : TRUE/It is a Digit

Input :d
Output : FALSE/It is not a Digit


*/
BOOL ChkDigit(char ch)
{
   if(((ch>='0')&&(ch<='9')) )
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

bRet=ChkDigit(cValue);
if(bRet==TRUE)
{
    printf("It is a Digit");
}
else
{
    printf("It is not a Digit");
}


return 0;
}
