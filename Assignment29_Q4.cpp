/*
wap which accept one number and two positions from user and check whether bit at first or bit at second position is on or off

Input:10 3 7
Output:true
*/
#include<iostream>
using namespace std;

typedef unsigned int UINT;
bool ChkBit(UINT ino,int pos1, int pos2)
{
    UINT iMask1=0X00000001;
    UINT iMask2=0x00000001;
    UINT iResult1=0;
    UINT iResult2=0;

    iMask1=iMask1<<pos1;//change the on bit as per user requirement
    iMask2=iMask2<<pos2;

    iResult1=ino&iMask1;//anding mask and number to check if the result is one or zero if both numbers are 1 then result is 1 else its 0
    iResult2=ino&iMask2;
    if((iResult1==iMask1) || (iResult2==iMask2))//check if one of the bit is on
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
    UINT iValue=0,iPos1=0,iPos2=0;
    cout<<"Enter a number"<<endl;
    cin>>iValue;
    cout<<"Enter first position"<<endl;
    cin>>iPos1;
    cout<<"Enter second position"<<endl;
    cin>>iPos2;
    bRet=ChkBit(iValue,iPos1,iPos2);
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
