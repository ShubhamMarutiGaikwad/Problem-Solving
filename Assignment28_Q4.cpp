/*
wap which accept one number and position from user and toggle that bit .
Return modified number

Input: 10 3
Output: 14
*/
#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT ToggleBit(UINT iNo,int iPos)
{
       UINT iMask=0X00000001;
       iMask=iMask<<(iPos-1);
       return (iNo^iMask);
     
     

}
int main()
{      UINT iValue1=0;
       int iPos=0,iRet=0;
       
       cout<<"Enter number "<<endl;
       cin>>iValue1;
       cout<<"Enter position "<<endl;
       cin>>iPos;
       iRet=ToggleBit(iValue1,iPos);
       cout<<iRet<<endl;
       

       


       return 0;
}