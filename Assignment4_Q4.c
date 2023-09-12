//Program which accept three number and prints its multiplication

#include<stdio.h>

////////////////////////////////////////////////////////////
// 
// Function name:   Multiply
// Input:           Integer
// Output:          Integer
// Description :    print multiplication of given inputs
// Author:          Shubham Maruti Gaikwad
// Date:            06/05/2023
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Time complexity of this program is N
////////////////////////////////////////////////////////////

int Multiply(int No1,int No2,int No3)  
{
    int iArr[3]={No1,No2,No3};

    int iCnt=0;
    int iMul=1;
   
    for(iCnt=0;iCnt<3;iCnt++)
    {  
        if(iArr[iCnt]==0)
        {
            continue;  // current iteration skip go to next iteration
        }
        else
        {
            iMul=iMul*iArr[iCnt];      
        }    
    }
     
     return iMul;
}

////////////////////////////////////////////////////////////
// Entry point function
////////////////////////////////////////////////////////////

int main()
{   
    int iValue1=0,iValue2=0,iValue3=0;
    int iRet=0;

    printf("Please enter three numbers:");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    if(iValue1==0 || iValue2==0 || iValue3==0)  //  To stop the function call when all input are 0 to reduce the function call time 
    {
        printf("Multiplication is: %d",iRet);
    }
    else
    {
        iRet=Multiply(iValue1,iValue2,iValue3);
        printf("Multiplication is: %d",iRet);
    }
   

    return 0;
}