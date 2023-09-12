/* Program which accept one number from user and off 7th & 10th bit of that 
number if it is on and return the modified number

Input-577
Output-1
*/
#include<iostream>
using namespace std;
typedef unsigned int UINT;


 UINT OffBit(UINT iNo)
{
 UINT iMask=0X00000240;
 UINT iResult=0;
 iResult=iNo&iMask;
 if(iResult==iMask)
 {
       return (iNo^iMask);//jar ino cha 7th ani 10th bit & kelya nanatar pan 1 asel tar xor operator ni tyala zero karaycha
 }
 else
 {
       return iNo;// ani jar 0 asel tar number direct return karaycha
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