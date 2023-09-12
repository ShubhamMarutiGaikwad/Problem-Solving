/* Program to check whether 15th bit is on or off 
Input number denya sathi mask takaycha hex section madhe programmers calculator madhe ani 
tyacha corresponding decimal deycha input mhanun jyacha bit on hoil

Input-131088

output-5th & 18th bit is on
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
 UINT iMask=0X20010;
 UINT iResult=0;
 iResult=iNo&iMask;
 if(iResult==iMask)
 {
       return TRUE;
 }
 else
 {
       return FALSE;
 }
}
int main()
{      BOOL bRet=FALSE;
       UINT iValue=0;
       printf("Enter the number to check if 15th bit is on or off:\n");
       scanf("%d",&iValue);
       bRet=ChkBit(iValue);
       if(bRet==TRUE)
       {
              printf("5th & 18th bit is on");
       }
       else
       {
              printf("5th & 18th bit is off");
       }
       return 0;
}