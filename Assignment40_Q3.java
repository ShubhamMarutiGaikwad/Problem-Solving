/*
Que:Accept string from user and display below pattern on screen \

Input: Hello                      
 =Output  H
          H e 
          H e l 
          H e l l
          H e l l o
           
 */

import java.util.*;

class Pattern
{
   public void Pattern(String str)
   {
     char Arr[]=str.toCharArray();
     int iLength=Arr.length;

     int i=0,j=0,icnt=0;

    for(i=0;i<iLength;i++)
    {
      for(j=0;j<=i;j++)
      {
        System.out.print(Arr[j]+"\t");
      }
      System.out.println();
    }
   }
}
class Assignment40_Q3
{
  public static void main(String Arg[])
  {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter the string:");
    String str=sobj.nextLine();

    Pattern pobj=new Pattern();
    pobj.Pattern(str);

  }
}








