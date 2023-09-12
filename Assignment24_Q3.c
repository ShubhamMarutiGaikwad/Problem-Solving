#include<stdio.h>
#define ERR_NOTFOUND -1


/*
Input : Marvellous Multi OS
       M
Output :0

Input : marvellous Multi OS
       W
Output :-1

Input : marvellous Multi OS
       e
Output :4


*/
int FirstChar(char *str,char ch)
{ 

int cnt=1;
/*while((*str!='\0')&& (*str!=ch))
{
  
       cnt++;
       str++;
}
    both the loops perform same operation
    */  

for(;(*str!='\0')&& (*str!=ch);cnt++,str++);

     if((*str=='\0'))
       {
             
        return ERR_NOTFOUND;
       }
       else
       {
              return cnt;
       }
      
}
int main()
{ 
char Arr[20],ch='\0'; 
int iRet=0;

printf("Enter string:\n");
scanf("%[^'\n']s",&Arr);

printf("Enter character to find:\n");
scanf(" %c",&ch);
iRet=FirstChar(Arr,ch);

printf(" character location is %d",iRet);




return 0;
}
