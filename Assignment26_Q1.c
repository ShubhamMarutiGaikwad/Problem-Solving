/* Program to check whether 15th bit is on or off 
 input :16385
 output :15th bit is on

input :16335
output:15th bit is off
*/
#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;
#define TRUE 1
#define FALSE 0
BOOL ChkBit(UINT iNo)
{
 UINT iMask=0X4000;
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
              printf("15th bit is on");
       }
       else
       {
              printf("15th bit is off");
       }
       return 0;
}