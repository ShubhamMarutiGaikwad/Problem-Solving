/*
Accept number from user and display pattern. 

Input: 7846

Output: 6       #       #       #       #       #       #
        4       #       #       #       #
        8       #       #       #       #       #       #       #       #
        7       #       #       #       #       #       #       #    
*/
#include<stdio.h>

void Display(int iNo)
{   
    int Remainder=0;

    while(iNo!=0)
    {
       Remainder=iNo%10;
       printf("%d\t",Remainder);
       for(int i=Remainder;i>=1;i--)
       {
        printf("#\t");
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