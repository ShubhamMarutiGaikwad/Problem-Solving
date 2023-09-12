/*

Que:Accept number of rows and column from user and display below pattern on screen 
Input:Row: 4  Column:4                          
 =Output  A B C D
          a b c d
          A B C D
          a b c d                    

               
 */

import java.util.*;

class Pattern
{
   public void Pattern(int iRow,int iCol)
   {
     int i,j=0;
     char ch1='\0';
     char ch2='\0';

     for(i=1;i<=iRow;i++)
     {
      if((i%2)!=0)
      {
         for(j=1,ch1='A';j<=iCol;j++)
         {
           System.out.print(ch1+"\t");
           ch1++;
         }
         System.out.println();
      }
      else
      {
        for(j=1,ch1='a';j<=iCol;j++)
         {
           System.out.print(ch1+"\t");
           ch1++;
         }
         System.out.println();
      }  
     }
   }
}
class Assignment38_Q2
{
  public static void main(String Arg[])
  {
    Scanner sobj=new Scanner(System.in);

    System.out.println("Enter the number of row:");
    int iRow=sobj.nextInt();

    System.out.println("Enter the number column:");
    int iCol=sobj.nextInt();

    Pattern pobj=new Pattern();
    pobj.Pattern(iRow,iCol);

    
    
  }
}








