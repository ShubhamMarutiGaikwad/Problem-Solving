/*
Que:Accept number of rows and column from user and display below pattern on screen \

Input:Row: 3  Column:4                         
 =Output  * # * # 
          * # * #
          * # * #
           
 */

import java.util.*;

class Pattern
{
   public void Pattern(int iRow,int iCol)
   {
     int i,j=0;
     
     for(i=1;i<=iRow;i++)
     {
      for(j=1;j<=iCol;j++)
      {
        if((j%2)==0)
        {
          System.out.print("#\t");
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
class Assignment39_Q4
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








