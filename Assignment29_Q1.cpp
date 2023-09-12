/*
wap which accept one number from user and on(1)bits of that number without using % and / operator.


Input: 11
Output: 3
*/
#include<iostream>
using namespace std;
typedef unsigned int UINT;
int CountOne(UINT iNo)
{
     int iCount=0,valueoflastbit=0;
     while (iNo!=0)
     {
      valueoflastbit=iNo&1;// last number cha bit and karun bagaycha . Jar one asel tar count ++ karaycha nahitar rightshift karun parat and kaarun bagaycha one yetoyka 

              if(valueoflastbit==1)
              {
                     iCount++;
              }
              iNo=iNo>>1; 
     }
     return iCount;
     

}
int main()
{     
       UINT ivalue=0;
       int iRet=0;
       cout<<"Enter a number to check how many bits are on"<<endl;
       cin>>ivalue;
       iRet=CountOne(ivalue);
       cout<<"Bits on in "<<ivalue<<" is "<<iRet<<endl;
       return 0;
}