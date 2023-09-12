/*

Que:Accept String from user and calculate small character
Input:Marvellous
Output: 9

 */


import java.util.*;

class StringDemo
{
    public int CountSmall(String str)
  { 
    int iCount=0;

    for(int iCnt=0;iCnt<str.length();iCnt++)
    {
      if((str.charAt(iCnt)>='a')&&(str.charAt(iCnt)<='z'))
      {
        iCount++;
      }
    }
    return iCount;
  }
}

class Assignment33_Q2
{
  public static void main(String arg[])
  {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter the string:");
    String name = sobj.nextLine();

    StringDemo obj = new StringDemo();
    
    int iRet=obj.CountSmall(name);
    System.out.println("Number of small character are:"+iRet);


  }
}


