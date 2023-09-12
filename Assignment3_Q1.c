//Program which accept number from user and display multiplication of its factors

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   MultFact
// Input:           Integer
// Output:          Integer
// Description :    program for multiplication of factors
// Author:          Shubham Maruti Gaikwad
// Date:            06/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N/2
////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    if(iNo<0)  //updater
    {
        iNo=-iNo;
    }
    
    int iCnt=0;
    int iSum=1;

    for(iCnt=1;iCnt<=(iNo/2);iCnt++)     
    {
        if((iNo%iCnt)==0)
        {
          iSum=iSum*iCnt;
        }
    }
    return iSum;
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    int iValue=0;
    int iRet=0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

    printf("Multiplication of factor is:%d",iRet);

    return 0;
}