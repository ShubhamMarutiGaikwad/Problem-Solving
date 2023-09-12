/*
Que:Accept string from user and display below pattern on screen \

Input: Hello                      
 =Output  H e l l o
          H e l l 
          H e l 
          H e 
          H 
           
 */

import java.util.*;

class Pattern
{
   public void Pattern(String str)
   {
     char Arr[]=str.toCharArray();
     int iLength=Arr.length;

     int i=0,j=0,icnt=0;

    for(i=iLength;i>0;i--)
    {
      for(j=0;j<i;j++)
      {
        System.out.print(Arr[j]+"\t");
      }
      System.out.println();
    }
   }
}
class Assignment40_Q2
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








