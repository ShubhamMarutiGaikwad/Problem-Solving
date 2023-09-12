#include<stdio.h>
#include<stdbool.h>

/*
Input : MarvellouS 
Output :SuollevraM

*/
void Reverse(char *str)
{ char *start=str,*end=str,temp;


while(*end!='\0')
{
        end++;
}
end--;
        while(start<end)
        {
                temp=*start;
                *start=*end;
                *end=temp;
                start++;
                end--;
                
        }

     
      
}
int main()
{ 
char Arr[20];
int iRet=0;

printf("Enter string:\n");
scanf("%[^'\n']s",&Arr);
Reverse(Arr);
printf("String after editing is : %s\n",Arr);




return 0;
}
