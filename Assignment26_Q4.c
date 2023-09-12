/* Program to check whether 7th 8th 9th bit is on or off. 
Input number denya sathi mask takaycha hex section madhe programmers calculator madhe ani 
tyacha corresponding decimal deycha input mhanun jyacha bit on hoil
Input-448

output-7th 8th 9th bit is on
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
 UINT iMask=0X000001C0;
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
       printf("Enter the number to check if 7th 8th 9th bit is on or off:\n");
       scanf("%d",&iValue);
       bRet=ChkBit(iValue);
       if(bRet==TRUE)
       {
              printf("7th 8th 9th bit is on");
       }
       else
       {
              printf("7th 8th 9th bit is off");
       }
       return 0;
}