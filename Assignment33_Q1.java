/*

Que:Accept String from user and calculate capital character
Input:Marvellous Multi OS
Output: 4

 */


import java.util.*;

class StringDemo
{
    public int CountCapital(String str)
  { 
    int iCount=0;

    for(int iCnt=0;iCnt<str.length();iCnt++)
    {
      if((str.charAt(iCnt)>='A')&&(str.charAt(iCnt)<='Z'))
      {
        iCount++;
      }
    }
    return iCount;
  }
}

class Assignment33_Q1
{
  public static void main(String arg[])
  {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter the string:");
    String name = sobj.nextLine();

    StringDemo obj = new StringDemo();
    
    int iRet=obj.CountCapital(name);
    System.out.println("Number of capital character are:"+iRet);


  }
}


