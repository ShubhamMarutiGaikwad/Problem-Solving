#include<stdio.h>

/*
Input : A
Output :A's ASCII value in :
Decimal 65
Octal   0101
Hex     0X41







*/
void Display(char ch)
{ printf("%c's ASCII value in :\n",ch);
        printf("Decimal\t%d\n",ch);
        printf("Octal\t0%o\n",ch);
        printf("Hex\t0X%x\n",ch);


      
}
int main()
{ 
char cValue='\0';

printf("Enter the character:\n");
scanf("%c",&cValue);
Display(cValue);


return 0;
}
