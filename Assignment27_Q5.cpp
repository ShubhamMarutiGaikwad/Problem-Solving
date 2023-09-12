/* Program which accept one number from user and on first 4 bits of that 
number if it is on and return the modified number

Input-73
Output-79
*/
#include<iostream>
using namespace std;
typedef unsigned int UINT;


 UINT OnBit(UINT iNo)
{
 UINT iMask=0X0000000F;
 return (iNo|iMask);
 /*apan number ani mask la or kela mhange jar bit mask cha first 4 bits  different astil kiwa kutha pan 1asel  tar 1 hoil nahitar 0 hoil .
or honya sathi apan mask madhe numner cha bit on thevlay*/ 

}
int main()
{     UINT iValue=0,iRet=0;
       cout<<"Enter a number"<<endl;
       cin>>iValue;
       iRet=OnBit(iValue);
       cout<<"Number when bit on is "<<iRet;

       return 0;
}