#include<stdio.h>
/*
Input : Q
Output :Q       R       S       T       U       V       W       X       Y       Z

Input : m
Output :m       l       k       j       i       h       g       f       e       d       c       b       a

Input : 8
Output :



*/
void Display(char ch)
{ char cCount='\0';
        if(ch>='A'&& ch<='Z')
        {
                for(cCount=ch;cCount<='Z';cCount++)
                {
                        printf("%c\t ",cCount);
                }
                printf("\n");
                
        }
        else if(ch>='a'&&ch<='z')
        {   
                  for(cCount=ch;cCount>='a';cCount--)
                {
                        printf("%c\t ",cCount);
                }
                printf("\n");
        }
        else
       {
        return;
       }
    
}
int main()
{ char cValue='\0';
printf("Enter the character:\n");
scanf("%c",&cValue);
Display(cValue);
return 0;
}
