/* Program to check whether First and Last bit(ie. 1st and 32) is on or off 
Input number denya sathi mask takaycha hex section madhe programmers calculator madhe ani 
tyacha corresponding decimal deycha input mhanun jyacha bit on hoil
Input-2147483649

output-First and Last bit is on
*/
#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;
bool ChkBit(UINT iNo)
{
 UINT iMask=0X80000001;
 UINT iResult=0;
 iResult=iNo&iMask;
 if(iResult==iMask)
 {
       return true;
 }
 else
 {
       return false;
 }
}
int main()
{      bool bRet=false;
       UINT iValue=0;
       printf("Enter the number to check if First and Last bit is on or off:\n");
       scanf("%d",&iValue);
       bRet=ChkBit(iValue);
       if(bRet==true)
       {
              printf("First and Last bit is on");
       }
       else
       {
              printf("First and Last bit is off");
       }
       return 0;
}