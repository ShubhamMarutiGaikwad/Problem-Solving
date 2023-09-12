/*
Accept number from user and display pattern. Number of element should be printed from start to end as digit occure in number

Input: 7846

Output: 7       6       5       4       3       2       1
        8       7       6       5       4       3       2       1
        4       3       2       1
        6       5       4       3       2       1
*/
#include<stdio.h>

void Display(int iNo)
{   
    int Remainder=0;
    int NewNo=0;

    while(iNo!=0)
    {
        Remainder=iNo%10;
        NewNo=(NewNo*10)+Remainder;
        iNo=iNo/10;
    }

    while(NewNo!=0)
    {
       Remainder=NewNo%10;
       for(int i=Remainder;i>=1;i--)
       {
        printf("%d\t",i);
       }
       NewNo=NewNo/10;
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