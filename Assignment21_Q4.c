#include<stdio.h>
#include <stdbool.h>
/*
Input : %
Output :TRUE

Input : d
Output : FALSE





*/
bool Chkcpecial(char ch)
{ 
        if(ch=='!' || ch=='@' || ch=='#' || ch=='$' || ch=='%' || ch=='^' || ch=='&'||ch=='*')
        {
              return true;
                
        }
        else
        {
                return false;
        }
       
    
}
int main()
{ char cValue='\0';
bool bRet=false;
printf("Enter the character:\n");
scanf("%c",&cValue);
bRet=Chkcpecial(cValue);

if(bRet==true)
{
        printf("It is special character");
}
else
{
        printf("It is not a special character");
}
return 0;
}
