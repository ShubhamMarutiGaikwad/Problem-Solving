#include<stdio.h>

void DisplayASCII()
{
int icnt=0;
 printf("Dec\tHex\tOct \n");
 printf("--------------------- \n");

for(icnt=0;icnt<=255;icnt++)
{      
        printf("|%d|\t|%x|\t|%o|\t|%c|\t \n",icnt,icnt,icnt,icnt);// x for hex and o for octal
        printf(" \n");
        printf("--------------------------- \n");
}
    
}
int main()
{
DisplayASCII();
return 0;
}
