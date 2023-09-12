/*
wap which accept one number from user and range of positions from user .Toggle all bits from that range.
Input:897 9 13
Output: 7297

Input:25 2 4 
Output: 23
*/
#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT ChkBit(UINT ino,int iStart, int iEnd)
{
    UINT iMask=((1<<iEnd)-1)^((1<<iStart-1)-1);
    
  
    
 
    return ino^iMask;

    

}
int main()
{ 
   
    UINT iValue=0,iPos1=0,iPos2=0,iRet=0;
    cout<<"Enter a number"<<endl;
    cin>>iValue;
    cout<<"Enter first position"<<endl;
    cin>>iPos1;
    cout<<"Enter second position"<<endl;
    cin>>iPos2;
    iRet=ChkBit(iValue,iPos1,iPos2);
    cout<<"Number is :"<<iRet;

    return 0;
}
