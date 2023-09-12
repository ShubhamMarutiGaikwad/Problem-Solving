/*
Accept number of row and column from user and create one matrix by accepting values from user and reverse the content of each row

Input: 3   2   5   9
       4   3   2   2
       8   4   1   5
       3   9   7   5

Output: 9   5   2   3
        2   2   3   4
        5   1   4   8
        7   5   9   3
                
        
        
*/

import java.util.*;

class Matrix
{
    public void ReverseRow(int Arr[][],int iRow,int iCol)
    {

        for(int k=0;k<iRow;k++)
        {
           int i=0;
           int j=Arr[i].length-1;
           int temp=0;

           while(i<j)
           {
               temp=Arr[k][i];
               Arr[k][i]=Arr[k][j];
               Arr[k][j]=temp;
               i++;
               j--;
           }
        }

       System.out.println("reversed row element of matrix");

       for(int i=0;i<Arr.length;i++)
       {
         for(int j=0;j<Arr[i].length;j++)
         {
            System.out.print(Arr[i][j]+"\t");
         }
         System.out.println();
       }
 
    }
}


class Assignment48_Q2
{
    public static void main(String arg[])
    {
        Scanner sobj =  new Scanner(System.in);

        System.out.println("Enter number of row: ");
        int Row=sobj.nextInt();

        System.out.println("Enter number of column: ");
        int Col=sobj.nextInt();

        int Arr[][] = new int[Row][Col];

        System.out.println("Enter matrix element");

        int i=0, j=0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                Arr[i][j]=sobj.nextInt();
            }
        }
        
       System.out.println("Matrix is: ");     

       for(i=0;i<Arr.length;i++)
       {
         for(j=0;j<Arr[i].length;j++)
         {
            System.out.print(Arr[i][j]+"\t");
         }
         System.out.println();
       }
       System.out.println();

        Matrix mobj = new Matrix();

        mobj.ReverseRow(Arr,Row,Col);

        sobj.close();    
    }
}