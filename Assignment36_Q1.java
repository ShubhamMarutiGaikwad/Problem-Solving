/*

Que:Accept N number from user and accept another number as NO & check whether that NO is present in the given elements
Input:N:6                            Input:N:6
      NO:66                                NO:12
      Elements:85 66 3 66 93 88            Element:85 11 3 15 11 111
Output:True                          Output:False                    
               
 */

import java.util.*;

class Number
{
  boolean Check(int Arr[],int iNo)
  {
    int iCount=0;
    for(int iCnt=0;iCnt<Arr.length;iCnt++)
    {
      if(Arr[iCnt]==iNo)
      {
        iCount++;
        break;
      }
    }
    if(iCount>0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
}

class Assignment36_Q1
{
  public static void main(String Arg[])
  {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter the number of element:");
    int iSize=sobj.nextInt();

    System.out.println("Enter the number you want to check:");
    int iNo=sobj.nextInt();

    int iArr[]=new int[iSize];

    System.out.println("Enter the array element:");
    
    for(int iCnt=0;iCnt<iArr.length;iCnt++)
    {
      iArr[iCnt]=sobj.nextInt();
    }
    
    Number nobj=new Number();

    boolean bRet=nobj.Check(iArr,iNo);

    if(bRet==true)
    { 
      System.out.println(iNo+" is present in the given element");
    }
    else
    {
      System.out.println(iNo+" is present not in the given element");
    }
  }
}








