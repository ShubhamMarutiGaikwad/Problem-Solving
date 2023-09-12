/*
Q: Write a java program which accept number of row & column from user and display below pattern
Input: Row=6    Column=6
Output:1 2 3 4 5
       1 2     5
       1   3   5
       1     4 5
       1 2 2 4 5     
       
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
       
        for(i=1;i<=iRow;i++)
        {
            for(j=1;j<=iCol;j++)
            {
                if((i==j)||(i==1)||(j==1)||(j==iCol)||(i==iRow))
                {
                    System.out.print(j+"\t");
                }
                else
                {
                    System.out.print(" \t");
                }
            }
            System.out.println();
        }
    }
}

class Assignment45_Q5
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