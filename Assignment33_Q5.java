/*

Que:Accept String from user and and display it in reverse order
Input:Marvellous
Output:suollevraM

 */


import java.util.*;

class StringDemo
{
    public String Reverse(String str)
  { 
      char Arr[]= str.toCharArray();   

      int iStart=0;
      int iEnd=Arr.length-1;

      char cTemp=' ';
 
      while(iStart<iEnd)
      {
         cTemp=Arr[iStart];
         Arr[iStart]=Arr[iEnd];
         Arr[iEnd]=cTemp;

         iStart++;
         iEnd--;
      }
      return new String(Arr);
    
  }
}

class Assignment33_Q5
{
  public static void main(String arg[])
  {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter the string:");
    String name = sobj.nextLine();

    StringDemo obj = new StringDemo();
    
   String sret = obj.Reverse(name);

   System.out.println("Result is :"+sret);



  
  }
}

/* 
cyclomatic complexity = 
1. If both for loop counter have same travel = N*M
2. If both for loop counter does not have same travel = N^2
*/


