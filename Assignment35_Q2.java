/*

Que:Accept number from user and return the count of odd digit
Input:2395  Input:1018   Input:8462
Output:3    Output:2     Output:0

 */


import java.util.*;

class Digits
{
  public int CountOdd(int iNo)
  { 
    if(iNo<0)
    {
      iNo=-iNo;
    }

    int iCount=0;
    int iDigit=0;

    while(iNo!=0)
    { 
      iDigit=iNo%10;
      if((iDigit%2)!=0)
      {
        iCount++;
      }
      iNo=iNo/10; 
    }
    return iCount;
  }
}

class Assignment35_Q2
{
  public static void main(String Arg[])
  {
     Scanner sobj=new Scanner(System.in);

     System.out.println("Enter the number");
     int iNo = sobj.nextInt();

     Digits dobj=new Digits();

     int iRet=dobj.CountOdd(iNo);

     System.out.println("Summation of odd digit in "+iNo+" is :"+iRet);
  }
}




