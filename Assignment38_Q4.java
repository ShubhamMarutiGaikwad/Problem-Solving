/*

Que:Accept number of rows and column from user and display below pattern on screen 
Input:Row: 4  Column:5                          
 =Output  4 4 4 4 4
          3 3 3 3 3
          2 2 2 2 2
          1 1 1 1 1              
 */

import java.util.*;

class Pattern
{
   public void Pattern(int iRow,int iCol)
   {
     int i,j=0;
     for(i=iRow;i>0;i--)
     {
      for(j=1;j<=iCol;j++)
      {
         System.out.print(i+"\t");
      }
       System.out.println();
     }
   }
}
class Assignment38_Q4
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








