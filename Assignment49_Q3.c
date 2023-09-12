/*
Accept number from user and display pattern. Number of element should be printed from start to end as digit occure in number

Input: 7846

Output: 1       2       3       4       5       6       7
        1       2       3       4       5       6       7       8
        1       2       3       4
        1       2       3       4       5       6

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
       for(int i=1;i<=Remainder;i++)
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