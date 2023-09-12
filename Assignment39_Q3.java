/*

Que:Accept number of rows and column from user and display below pattern on screen 
Input:Row: 3  Column:5                          
 =Output  5 4 3 2 1
          5 4 3 2 1 
          5 4 3 2 1
           
 */

import java.util.*;

class Pattern
{
   public void Pattern(int iRow,int iCol)
   {
     int i,j=0;
     
     for(i=1;i<=iRow;i++)
     {
      for(j=iCol;j>0;j--)
      {
        System.out.print(j+"\t");
      }
      System.out.println();
     }
   }
}
class Assignment39_Q3
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








