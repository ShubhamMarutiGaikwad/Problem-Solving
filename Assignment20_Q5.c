#include<stdio.h>

/*
Input :C
Output : Your exam is at 9.20 AM

Input :d
Output : Your exam is at 10.30 AM


*/
void DisplaySchedule(char chDiv)
{
char ch='\0';
    if((chDiv>='a')&&(chDiv<='z'))
    {
        ch=chDiv-32;//converting small case to capital case
    }
    else
    {
        ch=chDiv;
    }
  switch (ch)
  {
    case'A': printf("Your exam is at 7 AM \n");
            break;
    case 'B': printf("Your exam is at 8.30 AM \n");
            break;
    case 'C': printf("Your exam is at 9.20 AM \n");
            break;
    case 'D': printf("Your exam is at 10.30 AM \n");
            break;
    default : printf("Please enter valid division \n");
  }
}
    

int main()
{
char cValue='\0';


printf("Enter Your Division:\n");
scanf("%c",&cValue);

DisplaySchedule(cValue);



return 0;
}
