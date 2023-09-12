/* Program which accept one number from user and off 7th bit of that 
number if it is on and return the modified number

Input-79
Output-15

*/
#include<iostream>
using namespace std;
typedef unsigned int UINT;


 UINT OffBit(UINT iNo)
{
 UINT iMask=0X00000040;
 UINT iResult=0;
 iResult=iNo&iMask;
 if(iResult==iMask)
 {
       return (iNo^iMask);//jar ino cha 7th bit & kelya nanatar pan 1 asel tar xor operator ni tyala zero karaycha
 }
 else
 {
       return iNo;// ani jar 0 asel tar number return karaycha
 }
}
int main()
{     UINT iValue=0,iRet=0;
       cout<<"Enter a number"<<endl;
       cin>>iValue;
       iRet=OffBit(iValue);
       cout<<"Number when bit off is "<<iRet;

       return 0;
}