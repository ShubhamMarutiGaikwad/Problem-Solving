/*

Que:Accept N number from user and accept another number as NO & return product of all odd number
Input:N:6                            Input:N:6                                                          NO:93                              
      Elements:15 66 3 70 10 88            Element:44 66 72 70 10 88            
Output:45                            Output:0                                    
               
 */

import java.util.*;

class Number
{
  public int LastOcc(int Arr[])
  {
    int iCnt=0;
    int iMul=1;
    for(iCnt=0;iCnt<Arr.length;iCnt++)
    {
       if(((Arr[iCnt]%2)!=0) && ((Arr[iCnt])!=0))
       {
        iMul=iMul*Arr[iCnt];
       }
    }
    return iMul;
  }
}

class Assignment36_Q5
{
  public static void main(String Arg[])
  {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter the number of element:");
    int iSize=sobj.nextInt();

    int iArr[]=new int[iSize];

    System.out.println("Enter the array element:");
    
    for(int iCnt=0;iCnt<iArr.length;iCnt++)
    {
      iArr[iCnt]=sobj.nextInt();
    }
    
    Number nobj=new Number();

    int iRet=nobj.LastOcc(iArr);

    if(iRet==1)
    {
      System.out.println("No Odd elements are present product is 0 ");
    }
    else
    {
      System.out.println("Product of odd elements is: "+iRet);
    }

    
  }
}








