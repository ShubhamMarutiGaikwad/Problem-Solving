/*

Que:Accept number from user and return the count of digit in between 3 and 7
Input:2395  Input:1018   Input:4521   Input:9922
Output:1   Output:0     Output:2     Output:0

 */


import java.util.*;

class Digits
{
  public int CountRange(int iNo)
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
      if((iDigit>3) && (iDigit<7))
      {
        iCount++;
      }
      iNo=iNo/10; 
    }
    return iCount;
  }
}

class Assignment35_Q3
{
  public static void main(String Arg[])
  {
     Scanner sobj=new Scanner(System.in);

     System.out.println("Enter the number");
     int iNo = sobj.nextInt();

     Digits dobj=new Digits();

     int iRet=dobj.CountRange(iNo);

     System.out.println("count of digit in between 3 and 7 is :"+iRet);
  }
}




