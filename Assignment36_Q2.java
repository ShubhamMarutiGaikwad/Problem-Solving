/*

Que:Accept N number from user and accept another number as NO & return index of first occurance of that NO.
Input:N:6                            Input:N:6
      NO:66                                NO:12
      Elements:85 66 3 66 93 88            Element:85 11 3 15 11 111
Output:True                          Output:False                    
               
 */

import java.util.*;

class Number
{
  public int FirstOcc(int Arr[],int iNo)
  {
    int iCnt=0;
    int iIndex=-1;
    for(iCnt=0;iCnt<Arr.length;iCnt++)
    {
       if(Arr[iCnt]==iNo)
       {
        iIndex=iCnt;
        break;
       }
    }
    return iIndex;
  }
}

class Assignment36_Q2
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

    int iRet=nobj.FirstOcc(iArr,iNo);

    if(iRet==-1)
    {
      System.out.println(iNo+" is not present");
    }
    else
    {
      System.out.println(iNo+" Occured at index number "+iRet);
    }

    
  }
}








