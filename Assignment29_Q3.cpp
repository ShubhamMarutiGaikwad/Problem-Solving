/*
wap which accept one numbers from user and check whether 9th or 12th but is on or off

Input:257
Output:on
*/
#include<iostream>
using namespace std;

typedef unsigned int UINT;
bool ChkBit(UINT ino)
{
    UINT iMask1=0X00000100;
    UINT iMask2=0x00000800;
    UINT iResult1=0;
    UINT iResult2=0;

    iResult1=ino&iMask1;
    iResult2=ino&iMask2;
    if((iResult1==iMask1) || (iResult2==iMask1))
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{ 
    bool bRet=false;
    UINT iValue=0;
    cout<<"Enter a number"<<endl;
    cin>>iValue;
    bRet=ChkBit(iValue);
    if(bRet==true)
    {
        cout<<"Bit is on";
    }
    else
    {
        cout<<"Bit is off";
    }

    return 0;
}
