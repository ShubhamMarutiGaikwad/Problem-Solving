/*
Question: Write java program which accept string from user and display below pattern

Input:Hello

Output: H E L L O
        H E L L *
        H E L * *
        H E * * *
        H * * * *
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
      int i,j=0;
      char Arr[]=Str.toCharArray();
      
      for(i=Arr.length-1;i>=0;i--)
      {
         for(j=0;j<=Arr.length-1;j++)
         {
           if((j<=i))
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

      for(i=0;i<=Arr.length;i++)
      {
         for(j=0;j<=Arr.length-1;j++)
         {
            if((i==j)||(i>=j))
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
class Assignment41_Q4
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