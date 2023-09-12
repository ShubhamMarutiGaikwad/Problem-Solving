/*
wap which accept two numbers from user and display position of common on bits from that two numbers

Input: 10     15
Output:2      4
*/
#include<iostream>
using namespace std;

typedef unsigned int UINT;

void CommonBits(UINT iNo1,UINT iNo2)
{
     int iCount=1,valueoflastbit1=0,valueoflastbit2=0;
     while (iNo1!=0 || iNo2!=0)
     {
      valueoflastbit1=iNo1&1;
      valueoflastbit2=iNo2&1;
      // last number cha bit and karun bagaycha . Jar one asel tar count ++ karaycha nahitar rightshift karun parat and kaarun bagaycha one yetoyka 
      
              if((valueoflastbit1 && valueoflastbit2)==1)
              {
               
                    cout<<iCount<<"\t";
                     
              }
              iNo1=iNo1>>1; 
              iNo2=iNo2>>1; 
              iCount++;
              
     }
     
     
                   
    
     

}
int main()
{     
       UINT ivalue1=0,ivalue2=0;
       int iRet=0;
       cout<<"Enter 1st number to check how many bits are on"<<endl;
       cin>>ivalue1;
       cout<<"Enter 2nd number to check how many bits are on"<<endl;
       cin>>ivalue2;
       CommonBits(ivalue1,ivalue2);
       
       return 0;
}

