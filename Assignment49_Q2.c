/*
Accept number from user and display pattern. Number of element should be printed in reverse digit

Input: 7846

Output:*       *       *       *       *       *
       *       *       *       *
       *       *       *       *       *       *       *       *
       *       *       *       *       *       *       * 
*/
#include<stdio.h>

void Display(int iNo)
{   
    int Remainder=0;

    while(iNo!=0)
    {
       Remainder=iNo%10;
       for(int i=1;i<=Remainder;i++)
       {
        printf("*\t");
       }
       iNo=iNo/10;
       printf("\n");
    }

}
int main()
{
    int iNo=0;

    printf("Enter the number :");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}