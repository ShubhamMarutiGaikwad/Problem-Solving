/*
Q: Write a java program which accept number of row & column from user and display below pattern
Input: Row=4    Column=4
Output:* * * #
       * * # @
       * # @ @
       # @ @ @
*/
import java.util.*;

class Pattern
{   
    public void Pattern(int iRow,int iCol)
    {   
        int i=0;
        int j=0;
        
        if(iRow != iCol)
        {
           System.out.println("Invalid input\n");
            return;
        }
       
        for(i=iRow;i>=1;i--)
        {
            for(j=1;j<=iCol;j++)
            {
                if((i==j))
                {
                    System.out.print("#\t");
                }
                else if(i>j)
                {
                    System.out.print("*\t");
                }
                else
                {
                     System.out.print("@\t");
                }
            }
            System.out.println();
        }
    }
}

class Assignment45_Q2
{   
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int Row=0;
        int Col=0;
     
        System.out.println("Enter the number of row :");
        Row=sobj.nextInt();

        System.out.println("Enter the number of column :");
        Col=sobj.nextInt();

       Pattern pobj = new Pattern();
       pobj.Pattern(Row,Col);

       sobj.close();
    }
   
}