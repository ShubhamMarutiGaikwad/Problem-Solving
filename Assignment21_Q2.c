#include<stdio.h>
/*
Input : Q
Output :q

Input : m
Output :M

Input : 4
Output :4

Input : %
Output :%

*/
void Display(char ch)
{
        if(ch>='a'&&ch<='z')
        {
                ch=ch-32;
                printf("%c\n",ch);
        }
        else if(ch>='A'&& ch<='Z')
        {
                 ch=ch+32;
                printf("%c\n",ch);
        }
        else
       {
        printf("%c\n",ch);
       }
    
}
int main()
{ char cValue='\0';
printf("Enter the character:\n");
scanf("%c",&cValue);
Display(cValue);
return 0;
}
