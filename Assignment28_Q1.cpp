/*
wap which accept one number and position from user and check whether bit at that position is on or off.
If bit is one return true otherwise return false

Input: 10 2
Output: TRUE
*/
#include<iostream>
using namespace std;
typedef unsigned int UINT;
bool ChkBit(UINT iNo,int iPos)
{
       UINT iMask=0X00000001,iResult=0;
       iMask=iMask<<(iPos-1);
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
{      UINT iValue1=0;
       int iPos=0;
       bool bRet=false;
       cout<<"Enter number "<<endl;
       cin>>iValue1;
       cout<<"Enter position"<<endl;
       cin>>iPos;
       bRet=ChkBit(iValue1,iPos);
       if(bRet==true)
       {
              cout<<"TRUE";
       }
       else
       {
              cout<<"False";
       }

       


       return 0;
}