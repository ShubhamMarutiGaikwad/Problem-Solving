/*

Que:Accept number from user and return the count of even digit
Output: 1   Output:2     Output:4

 */


import java.util.*;

class Digits
{
  public int CountEven(int iNo)
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
      if((iDigit%2)==0)
      {
        iCount++;
      }
      iNo=iNo/10; 
    }
    return iCount;
  }
}

class Assignment35_Q1
{
  public static void main(String Arg[])
  {
     Scanner sobj=new Scanner(System.in);

     System.out.println("Enter the number");
     int iNo = sobj.nextInt();

     Digits dobj=new Digits();

     int iRet=dobj.CountEven(iNo);

     System.out.println("Summation of even digit in "+iNo+" is :"+iRet);
  }
}




