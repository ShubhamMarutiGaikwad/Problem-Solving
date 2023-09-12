/*

Que:Accept number of rows and column from user and display below pattern on screen 
Input:Row: 3  Column:5                          
 =Output  A A A A A
          B B B B B
          C C C C C              
 */

import java.util.*;

class Pattern
{
   public void Pattern(int iRow,int iCol)
   {
     int i,j=0;
     char ch='\0';

     for(i=1,ch='A';i<=iRow;i++)
     {
       for(j=1;j<=iCol;j++)
       {
         System.out.print(ch+"\t");
       }
       ch++;
       System.out.println();
     }
   }
}
class Assignment38_Q3
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








