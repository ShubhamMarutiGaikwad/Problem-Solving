#include<stdio.h>

/*
Input : Marvellous 
Output :6 (8-2)

*/
int Difference(char *str)
{ int iCnt=0,icnt1=0;


        while(*str!='\0')
        { 
                if(*str>='a'&&*str<='z')
                {
                        iCnt++;
                }
                else if(*str>='A'&&*str<='Z')
                {
                        icnt1++;
                }
                
                
                str++;
        }

return iCnt-icnt1;
      
}
int main()
{ 
char Arr[20];
int iRet=0;

printf("Enter string:\n");
scanf("%[^'\n']s",&Arr);
iRet=Difference(Arr);
printf("%d",iRet);


return 0;
}
