/* Program which accept one number from user and off 7th bit of that 
number if it is on and return the modified number

Input-137
Output-201
*/
#include<iostream>
using namespace std;
typedef unsigned int UINT;


 UINT ToggleBit(UINT iNo)
{
 UINT iMask=0X00000040;
 return (iNo^iMask);
 /*apan number ani mask la xor kela mhange jar bit mask cha 7th bit ani number cha 7th bit different astil tar 1 hoil ani jar tasa nasel tar 0 hoil .
xor honya sathi apan mask madhe numner cha bit on thevlay*/ 

}
int main()
{     UINT iValue=0,iRet=0;
       cout<<"Enter a number"<<endl;
       cin>>iValue;
       iRet=ToggleBit(iValue);
       cout<<"Number when bit Toggled is "<<iRet;

       return 0;
}