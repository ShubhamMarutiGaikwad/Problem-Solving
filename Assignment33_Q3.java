/*

Que:Accept String from user and return the difference between capital and small character
Input:MarvellouS
Output: 6(8-2)

 */
import java.util.*;

class StringDemo
{
    public int CountDiff(String str)
  { 
    int iCount1=0;
    int iCount2=0;
    int Diff=0;
    char Arr[]=str.toCharArray();  // Converting string to array

    int StringLength=Arr.length;   //Finding string length
     
     // For loop to find small character 
    for(int iCnt=0;iCnt<str.length();iCnt++)
    {
      if((str.charAt(iCnt)>='a')&&(str.charAt(iCnt)<='z'))
      {
        iCount1++;
      }
      else
      {
        iCount2++;
      }
      Diff=iCount1-iCount2; // Substracting the Capital & small count
    }
    return Diff;  
  }
}

class Assignment33_Q3
{
  public static void main(String arg[])
  {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter the string:");
    String name = sobj.nextLine();

    StringDemo obj = new StringDemo();
    
    int iRet=obj.CountDiff(name);
    System.out.println("Difference between small and capital character is :"+iRet);
  }
}


