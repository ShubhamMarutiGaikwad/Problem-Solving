/*

Que:Accept number of rows and column from user and display below pattern on screen 
Input:Row: 3  Column:4                          
 =Output  1 2 3 4
          5 6 7 8
          9 10 11 12
                        
 */

import java.util.*;

class Pattern
{
   public void Pattern(int iRow,int iCol)
   {
     int i,j=0;
     int iDigit=1; 
     for(i=1;i<=iRow;i++)
     {
      for(j=1;j<=iCol;j++)
      {  
         System.out.print(iDigit+"\t");
         iDigit++;
      }
       System.out.println();
     }
   }
}
class Assignment38_Q5
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








