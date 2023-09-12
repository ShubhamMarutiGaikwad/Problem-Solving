/*
Question: Write java program which accept string from user and display below pattern

Input:Hello

Output:H * * * *
       H E * * *
       H E L * *
       H E L L *
       H E L L O
 */

import java.util.*;

class Pattern
{
   public void Display(String Str)
   {
      int sLength=Str.length();
      int i,j=0;
      char Arr[]=Str.toCharArray();

      for(i=0;i<sLength;i++)
      {
         for(j=0;j<sLength;j++)
         {
           if((i==j)||(i>j))
           {
             System.out.print(Arr[j]+"\t");  
           }
           else
           {
           System.out.print("*\t");
           }
         }
         System.out.println();
      }
   }
}
class Assignment41_Q1
{
    public static void main(String Arg[])
    {
       Scanner sobj = new Scanner(System.in);

       System.out.println("Enter string: ");
       String Str=sobj.nextLine();

       Pattern pobj = new Pattern();
       pobj.Display(Str);

       sobj.close();
      

    }
}