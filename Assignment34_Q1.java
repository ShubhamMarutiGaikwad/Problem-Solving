/*

Que:Accept N number from user and return difference between summation of even element & summation of odd element
Input: N=6
Element:85 66 3 80 93 88
Output: 53 (234-181)

 */


import java.util.*;

class ArrayDemo
{
    public int Difference(int Arr[])
  { 
    int SumEven=0;
    int SumOdd=0;

    for(int iCnt=0;iCnt<Arr.length;iCnt++)
    {
      if((Arr[iCnt]%2)==0)
      {
        SumEven=SumEven+Arr[iCnt];
      }
      if((Arr[iCnt]%2)!=0)
      {
        SumOdd=SumOdd+Arr[iCnt];
      }
    }
    return (SumEven-SumOdd);
  }    
}

class Assignment34_Q1
{
  public static void main(String arg[])
  {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter number of element:"); // Accepting number of element from user
    int iSize=sobj.nextInt();

    int iArr[]=new int[iSize];                      // Allocating memory to array

    
    System.out.println("Enter the array element:");

    for(int iCnt=0;iCnt<iArr.length;iCnt++)
    {
       iArr[iCnt]=sobj.nextInt();
    }

    ArrayDemo aobj = new ArrayDemo();

    int iRet=aobj.Difference(iArr);
    
    System.out.println("Difference of Even and Odd element is: "+iRet);
    

  }
}


