/*
wap which accept one number and position from user and toggle contents of first and last nibble of that number .
Return modified number.(Nibble is a group of four bits)

Input:
Output: 
*/
#include<iostream>
using namespace std;
typedef unsigned int UINT;
UINT ToggleBit(UINT iNo)
{
       UINT iMask=0XF000000F;
      
       return (iNo^iMask);
     
     

}
int main()
{      UINT iValue1=0;
       int iRet=0;
       
       cout<<"Enter number "<<endl;
       cin>>iValue1;
      
       iRet=ToggleBit(iValue1);
       cout<<iRet<<endl;
       

       


       return 0;
}